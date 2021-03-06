<?php
/**
 * @file
 * dco_registration.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function dco_registration_commerce_product_default_types() {
  $items = array(
    'ticket' => array(
      'type' => 'ticket',
      'name' => 'Ticket',
      'description' => 'A registration or ticket for an event.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function dco_registration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dco_registration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dco_registration_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Events users are signing up for.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_registration_state().
 */
function dco_registration_default_registration_state() {
  $items = array();
  $items['canceled'] = entity_import('registration_state', '{
    "name" : "canceled",
    "label" : "Canceled",
    "description" : "Registration was cancelled",
    "default_state" : "0",
    "active" : "1",
    "held" : "0",
    "show_on_form" : "1",
    "weight" : "1"
  }');
  $items['complete'] = entity_import('registration_state', '{
    "name" : "complete",
    "label" : "Complete",
    "description" : "Registration has been completed.",
    "default_state" : "0",
    "active" : "1",
    "held" : "0",
    "show_on_form" : "1",
    "weight" : "1"
  }');
  $items['pending'] = entity_import('registration_state', '{
    "name" : "pending",
    "label" : "Pending",
    "description" : "Registration is pending.",
    "default_state" : "1",
    "active" : "1",
    "held" : "0",
    "show_on_form" : "1",
    "weight" : "1"
  }');
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function dco_registration_default_registration_type() {
  $items = array();
  $items['paid_registration'] = entity_import('registration_type', '{
    "name" : "paid_registration",
    "label" : "Paid Registration",
    "locked" : "0",
    "default_state" : "pending",
    "weight" : "0",
    "data" : { "held_expire" : "1", "held_expire_state" : "canceled" }
  }');
  return $items;
}
