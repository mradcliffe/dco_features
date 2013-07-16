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
  $items['rules_check_registration_on_new_account'] = entity_import('rules_config', '{ "rules_check_registration_on_new_account" : {
      "LABEL" : "Check registration on new account",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "commerce" ],
      "ON" : [ "user_insert" ],
      "IF" : [
        { "entity_exists" : {
            "type" : "registration",
            "property" : "anon_mail",
            "value" : "[account:mail]"
          }
        }
      ],
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "registration",
              "property" : "anon_mail",
              "value" : [ "account:mail" ]
            },
            "PROVIDE" : { "entity_fetched" : { "registrations" : "Registrations" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "registrations" ] },
            "ITEM" : { "list_item" : "Current registration" },
            "DO" : [
              { "component_rules_reconcile_user_account_to_registration" : { "registration" : [ "list_item" ], "user" : [ "account" ] } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_create_account_for_anonymous_registration'] = entity_import('rules_config', '{ "rules_create_account_for_anonymous_registration" : {
      "LABEL" : "Create Account for Anonymous Registration",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "6",
      "TAGS" : [ "dco" ],
      "REQUIRES" : [
        "rules",
        "commerce",
        "simplenews_rules",
        "commerce_checkout",
        "registration"
      ],
      "ON" : [ "registration_update", "registration_insert" ],
      "IF" : [
        { "data_is" : { "data" : [ "registration:state:name" ], "value" : "complete" } },
        { "NOT data_is_empty" : { "data" : [ "registration:anon-mail" ] } },
        { "NOT entity_exists" : {
            "type" : "user",
            "property" : "mail",
            "value" : [ "registration:anon-mail" ]
          }
        }
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
        { "component_rules_reconcile_user_account_to_registration" : { "registration" : [ "registration" ], "user" : [ "new-account" ] } },
        { "simplenews_rules_action_subscribe" : {
            "mail" : [ "new-account:mail" ],
            "tid" : "1",
            "confirmation" : "2",
            "source" : "registration"
          }
        },
        { "send_account_email" : {
            "account" : [ "new-account" ],
            "email_type" : "register_no_approval_required"
          }
        }
      ]
    }
  }');
  $items['rules_reconcile_registration_accounts'] = entity_import('rules_config', '{ "rules_reconcile_registration_accounts" : {
      "LABEL" : "Reconcile registration accounts",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "6",
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
        { "component_rules_reconcile_user_account_to_registration" : { "registration" : [ "registration" ], "user" : [ "existing-account:0" ] } },
        { "simplenews_rules_action_subscribe" : {
            "mail" : [ "existing-account:mail" ],
            "tid" : "1",
            "confirmation" : "2",
            "source" : "registration"
          }
        }
      ]
    }
  }');
  $items['rules_reconcile_registration_owner'] = entity_import('rules_config', '{ "rules_reconcile_registration_owner" : {
      "LABEL" : "Reconcile registration owner",
      "PLUGIN" : "action set",
      "TAGS" : [ "dco" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "registration" : { "label" : "Registration", "type" : "registration" },
        "order" : { "label" : "Order", "type" : "commerce_order" }
      },
      "ACTION SET" : [
        { "data_set" : { "data" : [ "registration:author" ], "value" : [ "order:owner" ] } },
        { "entity_save" : { "data" : [ "registration" ] } }
      ]
    }
  }');
  $items['rules_reconcile_user_account_to_registration'] = entity_import('rules_config', '{ "rules_reconcile_user_account_to_registration" : {
      "LABEL" : "Reconcile user account to registration",
      "PLUGIN" : "action set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "registration" : { "label" : "Registration", "type" : "registration" },
        "user" : { "label" : "User Account", "type" : "user" }
      },
      "ACTION SET" : [
        { "data_set" : { "data" : [ "registration:anon-mail" ] } },
        { "data_set" : { "data" : [ "registration:user" ], "value" : [ "user" ] } },
        { "entity_save" : { "data" : [ "registration" ], "immediate" : 1 } }
      ]
    }
  }');
  return $items;
}
