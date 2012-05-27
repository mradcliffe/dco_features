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
