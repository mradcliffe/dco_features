<?php
/**
 * @file
 * dco_sponsor.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function dco_sponsor_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'commerce_stock'
  $field_bases['commerce_stock'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_product',
    ),
    'field_name' => 'commerce_stock',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'commerce_stock_override'
  $field_bases['commerce_stock_override'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_product',
    ),
    'field_name' => 'commerce_stock_override',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 0,
        1 => 1,
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_image_cache'
  $field_bases['field_image_cache'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_image_cache',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => NULL,
      'description_field' => 0,
      'field_permissions' => array(
        'edit' => 'edit',
        'view' => 'view',
      ),
      'list_default' => 1,
      'list_field' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
    'type_name' => 'product',
  );

  // Exported field_base: 'field_logo'
  $field_bases['field_logo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_logo',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => NULL,
      'description_field' => 0,
      'field_permissions' => array(
        'edit' => 'edit',
        'view' => 'view',
      ),
      'list_default' => 0,
      'list_field' => 1,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
    'type_name' => 'sponsor',
  );

  // Exported field_base: 'field_product_reference'
  $field_bases['field_product_reference'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_product_reference',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'product_id' => array(
        0 => 'product_id',
      ),
    ),
    'locked' => 0,
    'module' => 'commerce_product_reference',
    'settings' => array(
      'options_list_limit' => NULL,
    ),
    'translatable' => 0,
    'type' => 'commerce_product_reference',
  );

  // Exported field_base: 'field_related_attendees'
  $field_bases['field_related_attendees'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_related_attendees',
    'indexes' => array(
      'uid' => array(
        0 => 'uid',
      ),
    ),
    'locked' => 0,
    'module' => 'user_reference',
    'settings' => array(
      'field_permissions' => array(
        'edit' => 'edit',
        'view' => 'view',
      ),
      'referenceable_roles' => '',
      'referenceable_status' => '',
      'view' => array(
        'args' => array(
          0 => '',
        ),
        'display_name' => 'default',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'user_reference',
    'type_name' => 'sponsor',
  );

  // Exported field_base: 'field_sponsorship_level'
  $field_bases['field_sponsorship_level'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sponsorship_level',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Platinum',
        1 => 'Gold',
        2 => 'Silver',
        3 => 'Bronze',
        4 => 'Host',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'field_permissions' => array(
        'edit' => 'edit',
        'view' => 'view',
      ),
      'text_processing' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_text',
    'type_name' => 'sponsorship',
  );

  // Exported field_base: 'field_url'
  $field_bases['field_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_url',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => '',
      'field_permissions' => array(
        'edit' => 'edit',
        'view' => 'view',
      ),
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'validate_url' => 1,
    ),
    'translatable' => 0,
    'type' => 'link_field',
    'type_name' => 'sponsor',
  );

  return $field_bases;
}
