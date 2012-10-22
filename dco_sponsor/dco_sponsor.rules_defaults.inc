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
      "REQUIRES" : [ "commerce_order", "commerce_cart" ],
      "ON" : [ "commerce_cart_product_add" ],
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
            "product_id" : "dco-2012",
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "commerce_cart_product_add_by_sku" : {
            "USING" : {
              "user" : [ "commerce-line-item:order:owner" ],
              "sku" : "dco-2012",
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
      "REQUIRES" : [
        "commerce_registration",
        "commerce_order",
        "rules",
        "commerce_line_item",
        "commerce_product_reference"
      ],
      "ON" : [ "commerce_product_calculate_sell_price" ],
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
              "op" : "\\u002F",
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
  $items['rules_reduce_quantity_to_one'] = entity_import('rules_config', '{ "rules_reduce_quantity_to_one" : {
      "LABEL" : "Reduce quantity to one",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "dco" ],
      "REQUIRES" : [ "commerce_order", "rules", "entity" ],
      "ON" : [ "commerce_line_item_update" ],
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
