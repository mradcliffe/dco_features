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
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce" ],
      "ON" : { "user_insert" : [] },
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
  $items['rules_check_registration_ownership'] = entity_import('rules_config', '{ "rules_check_registration_ownership" : {
      "LABEL" : "Check registration ownership",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "dco" ],
      "REQUIRES" : [ "commerce", "rules" ],
      "ON" : { "cron" : [] },
      "IF" : [
        { "entity_exists" : { "type" : "registration", "property" : "author_uid", "value" : "0" } }
      ],
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "registration",
              "property" : "author_uid",
              "value" : "0",
              "limit" : "20"
            },
            "PROVIDE" : { "entity_fetched" : { "registrations" : "Registrations" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "registrations" ] },
            "ITEM" : { "registration" : "Current registration" },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "commerce_order", "id" : [ "registration:order-id" ] },
                  "PROVIDE" : { "entity_fetched" : { "order" : "Order" } }
                }
              },
              { "component_rules_reconcile_registration_owner" : { "registration" : [ "registration" ], "order" : [ "order" ] } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_check_registration_state'] = entity_import('rules_config', '{ "rules_check_registration_state" : {
      "LABEL" : "Check Registration State",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "dco" ],
      "REQUIRES" : [ "commerce", "rules" ],
      "ON" : { "cron" : [] },
      "IF" : [
        { "entity_exists" : { "type" : "registration", "property" : "state", "value" : "pending" } }
      ],
      "DO" : [
        { "entity_query" : {
            "USING" : { "type" : "registration", "property" : "state", "value" : "pending" },
            "PROVIDE" : { "entity_fetched" : { "registrations" : "Registrations" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "registrations" ] },
            "ITEM" : { "registration" : "Registration" },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "commerce_order", "id" : [ "registration:order-id" ] },
                  "PROVIDE" : { "entity_fetched" : { "order" : "Order" } }
                }
              },
              { "component_rules_reconcile_registration_state" : { "registration" : [ "registration" ], "order" : [ "order" ] } }
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
      "OWNER" : "rules",
      "TAGS" : [ "dco" ],
      "REQUIRES" : [
        "rules",
        "commerce",
        "simplenews_rules",
        "commerce_checkout",
        "registration"
      ],
      "ON" : { "registration_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "registration:state" ], "value" : "complete" } },
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
      "OWNER" : "rules",
      "TAGS" : [ "dco" ],
      "REQUIRES" : [ "rules", "commerce", "simplenews_rules", "registration" ],
      "ON" : { "registration_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "registration:state" ], "value" : "complete" } },
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
            "mail" : [ "existing-account:0:mail" ],
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
      "OWNER" : "rules",
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
  $items['rules_reconcile_registration_state'] = entity_import('rules_config', '{ "rules_reconcile_registration_state" : {
      "LABEL" : "Reconcile Registration State",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "dco" ],
      "REQUIRES" : [ "rules", "commerce_order" ],
      "USES VARIABLES" : {
        "registration" : { "label" : "Registration", "type" : "registration" },
        "order" : { "label" : "Order", "type" : "commerce_order" }
      },
      "IF" : [
        { "data_is" : { "data" : [ "registration:state" ], "value" : "pending" } },
        { "data_is" : {
            "data" : [ "order:state" ],
            "op" : "IN",
            "value" : { "value" : { "pending" : "pending", "completed" : "completed" } }
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "registration:state" ], "value" : "complete" } },
        { "entity_save" : { "data" : [ "registration" ], "immediate" : 1 } },
        { "commerce_order_update_state" : { "commerce_order" : [ "order" ], "order_state" : "completed" } }
      ]
    }
  }');
  $items['rules_reconcile_user_account_to_registration'] = entity_import('rules_config', '{ "rules_reconcile_user_account_to_registration" : {
      "LABEL" : "Reconcile user account to registration",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
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
  $items['rules_redirect_to_cart_after_adding_to_cart'] = entity_import('rules_config', '{ "rules_redirect_to_cart_after_adding_to_cart" : {
      "LABEL" : "Redirect to cart after adding to cart",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "dco" ],
      "REQUIRES" : [ "rules", "commerce_cart" ],
      "ON" : { "commerce_cart_product_add" : [] },
      "DO" : [ { "redirect" : { "url" : "cart" } } ]
    }
  }');
  return $items;
}
