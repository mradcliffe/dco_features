<?php
/**
 * @file
 * dco_base.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function dco_base_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_event'
  $field_bases['field_event'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_event',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'bof' => 0,
        'event' => 'event',
        'invoice' => 0,
        'news' => 0,
        'page' => 0,
        'product' => 0,
        'report' => 0,
        'room' => 0,
        'schedule_item' => 0,
        'session' => 0,
        'simplenews' => 0,
        'sponsor' => 0,
        'sprint' => 0,
        'time_slot' => 0,
        'webform' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => 'references_1',
        'view_name' => 'latest_event',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  return $field_bases;
}
