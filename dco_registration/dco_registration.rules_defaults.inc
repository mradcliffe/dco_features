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
      "TAGS" : [ "dco" ],
      "REQUIRES" : [ "rules", "commerce", "registration" ],
      "ON" : [ "registration_update" ],
      "IF" : [
        { "data_is" : { "data" : [ "registration:state" ], "value" : "1" } },
        { "data_is" : { "data" : [ "registration-unchanged:state" ], "value" : "2" } },
        { "NOT data_is_empty" : { "data" : [ "registration:anon-mail" ] } },
        { "NOT entity_exists" : {
            "type" : "user",
            "property" : "mail",
            "value" : "[registration:anon-mail]"
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "user",
              "param_name" : "registration-[registration:registration-id]",
              "param_mail" : [ "registration:anon-mail" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        }
      ]
    }
  }');
  return $items;
}
