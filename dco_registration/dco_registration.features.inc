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
      'revision' => '1',
      'module' => 'commerce_product_ui',
    ),
  );
  return $items;
}

/**
 * Implements hook_views_api().
 */
function dco_registration_views_api() {
  return array("version" => "3.0");
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
    "weight" : "0",
    "data" : null
  }');
  return $items;
}
