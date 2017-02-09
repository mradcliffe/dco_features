<?php
/**
 * @file
 * dco_session.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function dco_session_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_accepted'.
  $field_bases['field_accepted'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_accepted',
    'field_permissions' => array(
      'type' => 2,
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
        1 => 'Accepted',
        2 => 'Declined',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'field_permissions' => array(
        'edit' => 'edit',
        'view' => 'view',
      ),
      'max' => 2,
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
    'type_name' => 'session',
  );

  // Exported field_base: 'field_experience'.
  $field_bases['field_experience'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_experience',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'beginner' => 'Beginner',
        'intermediate' => 'Intermediate',
        'advanced' => 'Advanced',
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
    'type_name' => 'session',
  );

  // Exported field_base: 'field_featured'.
  $field_bases['field_featured'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_featured',
    'field_permissions' => array(
      'type' => 2,
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
        0 => 'No',
        1 => 'Yes',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
      'field_permissions' => array(
        'edit' => 'edit',
        'view' => 'view',
      ),
      'max' => 1,
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
    'type_name' => 'session',
  );

  // Exported field_base: 'field_marketing_image'.
  $field_bases['field_marketing_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_marketing_image',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
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
    'type_name' => 'session',
  );

  // Exported field_base: 'field_room_capacity'.
  $field_bases['field_room_capacity'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_room_capacity',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'field_permissions' => array(
        'edit' => 'edit',
        'view' => 'view',
      ),
      'max_length' => 255,
      'text_processing' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
    'type_name' => 'room',
  );

  // Exported field_base: 'field_room_photo'.
  $field_bases['field_room_photo'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_room_photo',
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
    'type_name' => 'room',
  );

  // Exported field_base: 'field_room_session_capacity'.
  $field_bases['field_room_session_capacity'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_room_session_capacity',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_php' => '',
      'field_permissions' => array(
        'edit' => 'edit',
        'view' => 'view',
      ),
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
    ),
    'translatable' => 0,
    'type' => 'number_integer',
    'type_name' => 'room',
  );

  // Exported field_base: 'field_session_length'.
  $field_bases['field_session_length'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_session_length',
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
        60 => '1 hour',
        90 => '1.5 hours',
        120 => '2 hours',
        150 => '2.5 hours',
        180 => '3 hours',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_session_room'.
  $field_bases['field_session_room'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_session_room',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'field_permissions' => array(
        'edit' => 'edit',
        'view' => 'view',
      ),
      'referenceable_types' => array(
        'bof' => 0,
        'event' => 0,
        'invoice' => 0,
        'news' => 0,
        'page' => 0,
        'product' => 0,
        'report' => 0,
        'room' => 'room',
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
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
    'type_name' => 'session',
  );

  // Exported field_base: 'field_session_slot'.
  $field_bases['field_session_slot'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_session_slot',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'field_permissions' => array(
        'edit' => 'edit',
        'view' => 'view',
      ),
      'referenceable_types' => array(
        'bof' => 0,
        'event' => 0,
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
        'time_slot' => 'time_slot',
        'webform' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => 'references_1',
        'view_name' => 'time_slots',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
    'type_name' => 'session',
  );

  // Exported field_base: 'field_session_video_url'.
  $field_bases['field_session_video_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_session_video_url',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_slides'.
  $field_bases['field_slides'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_slides',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'description_field' => 0,
      'display_default' => 1,
      'display_field' => 1,
      'field_permissions' => array(
        'edit' => 'edit',
        'view' => 'view',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
    'type_name' => 'session',
  );

  // Exported field_base: 'field_slot_datetime'.
  $field_bases['field_slot_datetime'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_slot_datetime',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'field_permissions' => array(
        'edit' => 'edit',
        'view' => 'view',
      ),
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'year' => 'year',
      ),
      'repeat' => 0,
      'timezone_db' => 'UTC',
      'todate' => 'required',
      'tz_handling' => 'site',
    ),
    'translatable' => 0,
    'type' => 'datetime',
    'type_name' => 'time_slot',
  );

  // Exported field_base: 'field_speakers'.
  $field_bases['field_speakers'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_speakers',
    'field_permissions' => array(
      'type' => 0,
    ),
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
      'nodeaccess_userreference' => array(
        'all' => array(
          'view' => 'view',
        ),
        'author' => array(
          'delete' => 'delete',
          'update' => 'update',
          'view' => 0,
        ),
        'create' => array(
          'event' => 0,
          'invoice' => 0,
          'news' => 0,
          'page' => 0,
          'product' => 0,
          'report' => 0,
          'room' => 0,
          'schedule_item' => 0,
          'session' => 0,
          'sponsor' => 0,
          'time_slot' => 0,
          'webform' => 0,
        ),
        'priority' => 0,
        'referenced' => array(
          'delete' => 0,
          'deny_delete' => 0,
          'deny_update' => 0,
          'deny_view' => 0,
          'update' => 'update',
          'view' => 0,
        ),
        'unused' => 0,
        'views' => array(
          'view' => '',
          'view_args' => '',
        ),
      ),
      'referenceable_roles' => array(
        2 => 2,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
        7 => 0,
        8 => 0,
        9 => 0,
      ),
      'referenceable_status' => array(
        0 => 0,
        1 => 1,
      ),
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
    'type_name' => 'session',
  );

  // Exported field_base: 'field_track'.
  $field_bases['field_track'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_track',
    'field_permissions' => array(
      'type' => 2,
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
        0 => 'Track 1',
        1 => 'Track 2',
        2 => 'Track 3',
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
    'type_name' => 'session',
  );

  return $field_bases;
}
