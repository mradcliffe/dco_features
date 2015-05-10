<?php
/**
 * @file
 * dco_sponsor.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dco_sponsor_default_rules_configuration() {
  $items = array();
  $items['rules_add_registration_for_individual_sponsorship'] = entity_import('rules_config', '{ "rules_add_registration_for_individual_sponsorship" : {
      "LABEL" : "Add registration for individual sponsorship",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "6",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_order", "commerce_cart" ],
      "ON" : { "commerce_cart_product_add" : [] },
      "IF" : [
        { "commerce_order_contains_product" : {
            "commerce_order" : [ "commerce_order" ],
            "product_id" : "individual-sponsorship",
            "operator" : "\\u003E=",
            "value" : "1"
          }
        },
        { "NOT commerce_order_contains_product" : {
            "commerce_order" : [ "commerce_order" ],
            "product_id" : "dco-2015-2718",
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "commerce_cart_product_add_by_sku" : {
            "USING" : {
              "user" : [ "commerce-line-item:order:owner" ],
              "sku" : "dco-2015-2718",
              "quantity" : "1",
              "combine" : 1
            },
            "PROVIDE" : { "product_add_line_item" : { "product_add_line_item" : "Added product line item" } }
          }
        }
      ]
    }
  }');
  $items['rules_discount_registration_with_individual_sponsorship'] = entity_import('rules_config', '{ "rules_discount_registration_with_individual_sponsorship" : {
      "LABEL" : "Discount registration with individual sponsorship",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [
        "commerce_registration",
        "commerce_order",
        "rules",
        "commerce_line_item",
        "commerce_product_reference"
      ],
      "ON" : { "commerce_product_calculate_sell_price" : [] },
      "IF" : [
        { "commerce_registration_item_has_registration_capacity" : { "commerce_line_item" : [ "commerce_line_item" ] } },
        { "commerce_order_contains_product" : {
            "commerce_order" : [ "commerce-line-item:order" ],
            "product_id" : "individual-sponsorship",
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "commerce-line-item:quantity" ],
              "op" : "-",
              "input_2" : "1"
            },
            "PROVIDE" : { "result" : { "quantity_one_less" : "Quantity One Less" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "commerce-line-item:commerce-unit-price:amount" ],
              "op" : "*",
              "input_2" : [ "quantity-one-less" ]
            },
            "PROVIDE" : { "result" : { "total_price_one_less" : "Total Price One Less" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "total-price-one-less" ],
              "op" : "\\/",
              "input_2" : [ "commerce-line-item:quantity" ]
            },
            "PROVIDE" : { "result" : { "new_unit_price" : "New Unit Price" } }
          }
        },
        { "commerce_line_item_unit_price_amount" : {
            "commerce_line_item" : [ "commerce_line_item" ],
            "amount" : [ "new-unit-price" ],
            "component_name" : "discount",
            "round_mode" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_notify_of_sponsor_purchase'] = entity_import('rules_config', '{ "rules_notify_of_sponsor_purchase" : {
      "LABEL" : "Notify of sponsor purchase",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "dco" ],
      "REQUIRES" : [ "commerce_order", "rules" ],
      "USES VARIABLES" : { "order" : { "label" : "Order", "type" : "commerce_order" } },
      "IF" : [
        { "OR" : [
            { "commerce_order_contains_product" : {
                "commerce_order" : [ "order" ],
                "product_id" : "bronze-sponsorship",
                "operator" : "\\u003E=",
                "value" : "1"
              }
            },
            { "commerce_order_contains_product" : {
                "commerce_order" : [ "order" ],
                "product_id" : "gold-sponsorship",
                "operator" : "\\u003E=",
                "value" : "1"
              }
            },
            { "commerce_order_contains_product" : {
                "commerce_order" : [ "order" ],
                "product_id" : "silver-sponsorship",
                "operator" : "\\u003E=",
                "value" : "1"
              }
            },
            { "commerce_order_contains_product" : {
                "commerce_order" : [ "order" ],
                "product_id" : "platinum-sponsorship",
                "operator" : "\\u003E=",
                "value" : "1"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "7" : "7", "6" : "6" } },
            "subject" : "[site:name] Sponsorship order #[order:order-number] complete",
            "message" : "A new sponsorship was ordered from [site:name] at [order:admin-url].\\r\\n\\r\\nCustomer: [order:mail-username]\\r\\n\\r\\nLine items:\\r\\n[order:commerce-line-items]\\r\\n\\r\\nNext steps:\\r\\n\\r\\n- Send a note to the volunteer who worked with the sponsor (if any).\\r\\n- Contact the sponsor with logistics:\\r\\n    - Ask for their logo.\\r\\n    - Ask who from their company is coming (see [site:url]\\/sponsor\\/benefits).\\r\\n- Create a sponsor node [site:url]\\/node\\/add\\/sponsor of the appropriate type and add their logo.",
            "from" : "no-reply@drupalcampohio.org"
          }
        }
      ]
    }
  }');
  $items['rules_reduce_quantity_to_one'] = entity_import('rules_config', '{ "rules_reduce_quantity_to_one" : {
      "LABEL" : "Reduce quantity to one",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "dco" ],
      "REQUIRES" : [ "commerce_order", "rules", "entity" ],
      "ON" : { "commerce_line_item_update" : [] },
      "IF" : [
        { "OR" : [
            { "commerce_order_contains_product" : {
                "commerce_order" : [ "commerce-line-item:order" ],
                "product_id" : "bronze-sponsorship",
                "operator" : "\\u003E",
                "value" : "1"
              }
            },
            { "commerce_order_contains_product" : {
                "commerce_order" : [ "commerce-line-item:order" ],
                "product_id" : "silver-sponsorship",
                "operator" : "\\u003E",
                "value" : "1"
              }
            },
            { "commerce_order_contains_product" : {
                "commerce_order" : [ "commerce-line-item:order" ],
                "product_id" : "gold-sponsorship",
                "operator" : "\\u003E",
                "value" : "1"
              }
            },
            { "commerce_order_contains_product" : {
                "commerce_order" : [ "commerce-line-item:order" ],
                "product_id" : "platinum-sponsorship",
                "operator" : "\\u003E",
                "value" : "1"
              }
            },
            { "commerce_order_contains_product" : {
                "commerce_order" : [ "commerce-line-item:order" ],
                "product_id" : "individual-sponsorship",
                "operator" : "\\u003E",
                "value" : "1"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "commerce-line-item:quantity" ], "value" : "1" } },
        { "drupal_message" : {
            "message" : "Please refrain from adding more than one quantity for a sponsorship.",
            "type" : "warning"
          }
        }
      ]
    }
  }');
  return $items;
}
