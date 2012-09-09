<?php
/**
 * @file
 * dco_registration.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dco_registration_default_rules_configuration() {
  $items = array();
  $items['rules_create_account_for_anonymous_registration'] = entity_import('rules_config', '{ "rules_create_account_for_anonymous_registration" : {
      "LABEL" : "Create Account for Anonymous Registration",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "6",
      "TAGS" : [ "dco" ],
      "REQUIRES" : [ "rules", "commerce", "registration" ],
      "ON" : [ "registration_update", "registration_insert" ],
      "IF" : [
        { "data_is" : { "data" : [ "registration:state:name" ], "value" : "complete" } },
        { "NOT data_is_empty" : { "data" : [ "registration:anon-mail" ] } },
        { "NOT entity_exists" : {
            "type" : "user",
            "property" : "mail",
            "value" : [ "registration:anon-mail" ]
          }
        },
        { "NOT data_is" : { "data" : [ "registration:author-uid" ], "value" : "0" } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "user",
              "param_name" : [ "registration:anon-mail" ],
              "param_mail" : [ "registration:anon-mail" ]
            },
            "PROVIDE" : { "entity_created" : { "new_account" : "New Account" } }
          }
        },
        { "user_unblock" : { "account" : [ "new-account" ] } },
        { "entity_save" : { "data" : [ "new-account" ], "immediate" : 1 } },
        { "data_set" : { "data" : [ "registration:mail" ] } },
        { "data_set" : { "data" : [ "registration:user" ], "value" : [ "new-account" ] } },
        { "entity_save" : { "data" : [ "registration" ] } }
      ]
    }
  }');
  $items['rules_reconcile_registration_accounts'] = entity_import('rules_config', '{ "rules_reconcile_registration_accounts" : {
      "LABEL" : "Reconcile registration accounts",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "5",
      "TAGS" : [ "dco" ],
      "REQUIRES" : [ "rules", "commerce", "registration" ],
      "ON" : [ "registration_update", "registration_insert" ],
      "IF" : [
        { "data_is" : { "data" : [ "registration:state:name" ], "value" : "complete" } },
        { "NOT data_is_empty" : { "data" : [ "registration:anon-mail" ] } },
        { "entity_exists" : {
            "type" : "user",
            "property" : "mail",
            "value" : [ "registration:anon-mail" ]
          }
        }
      ],
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "user",
              "property" : "mail",
              "value" : [ "registration:anon-mail" ],
              "limit" : "1"
            },
            "PROVIDE" : { "entity_fetched" : { "existing_account" : "Existing account" } }
          }
        },
        { "data_set" : { "data" : [ "registration:mail" ] } },
        { "data_set" : { "data" : [ "registration:user" ], "value" : [ "existing-account:0" ] } },
        { "entity_save" : { "data" : [ "registration" ] } }
      ]
    }
  }');
  return $items;
}
