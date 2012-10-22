<?php
/**
 * @file
 * dco_session.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function dco_session_field_default_fields() {
  $fields = array();

  // Exported field: 'node-room-body'
  $fields['node-room-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'room',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Rooms provide a location for each session.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'trim_length' => '800',
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Description',
      'required' => 0,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'node-room-field_room_capacity'
  $fields['node-room-field_room_capacity'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_room_capacity',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'allowed_values' => '',
        'allowed_values_php' => '',
        'field_permissions' => array(
          'edit' => 'edit',
          'view' => 'view',
        ),
        'max_length' => 255,
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'text',
      'type_name' => 'room',
    ),
    'field_instance' => array(
      'bundle' => 'room',
      'default_value' => '',
      'deleted' => '0',
      'description' => 'How many people does this space hold?',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-4',
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-4',
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-4',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-4',
        ),
        'teaser' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-4',
        ),
        'token' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_room_capacity',
      'label' => 'Capacity',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'weight' => '-4',
      'widget' => array(
        'active' => '0',
        'module' => 'text',
        'settings' => array(
          'default_value' => NULL,
          'default_value_php' => NULL,
          'rows' => 5,
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '-4',
      ),
      'widget_type' => 'text_textfield',
    ),
  );

  // Exported field: 'node-room-field_room_photo'
  $fields['node-room-field_room_photo'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_room_photo',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'image',
      'settings' => array(
        'default_image' => NULL,
        'description_field' => '0',
        'field_permissions' => array(
          'edit' => 'edit',
          'view' => 'view',
        ),
        'list_default' => 1,
        'list_field' => '0',
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
      'type_name' => 'room',
    ),
    'field_instance' => array(
      'bundle' => 'room',
      'default_value' => '',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'file',
            'image_style' => 'thumbnail',
          ),
          'type' => 'image',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '-1',
        ),
        'rss' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-1',
        ),
        'search_index' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-1',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-1',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-1',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_room_photo',
      'label' => 'Photo',
      'required' => FALSE,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '0',
        'min_resolution' => '0',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'weight' => '-1',
      'widget' => array(
        'active' => '0',
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'bar',
          'use_default_image' => 0,
        ),
        'type' => 'image_image',
        'weight' => '-1',
      ),
      'widget_type' => 'imagefield_widget',
    ),
  );

  // Exported field: 'node-room-field_room_session_capacity'
  $fields['node-room-field_room_session_capacity'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_room_session_capacity',
      'foreign keys' => array(),
      'indexes' => array(),
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
      'translatable' => '0',
      'type' => 'number_integer',
      'type_name' => 'room',
    ),
    'field_instance' => array(
      'bundle' => 'room',
      'default_value' => array(
        0 => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_room_session_capacity][0][value',
        ),
      ),
      'deleted' => '0',
      'description' => 'Number of sessions or BoFs that this room can hold in a time slot. Used to allow multiple BoFs in the same room at the same time slot.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '-3',
        ),
        'rss' => array(
          'label' => 'hidden',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '-3',
        ),
        'search_index' => array(
          'label' => 'hidden',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '-3',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '-3',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '-3',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '-3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_room_session_capacity',
      'label' => 'Session capacity',
      'required' => FALSE,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'weight' => '-3',
      'widget' => array(
        'active' => '0',
        'module' => 'number',
        'settings' => array(
          'default_value_php' => NULL,
        ),
        'type' => 'number',
        'weight' => '-3',
      ),
      'widget_type' => 'number',
    ),
  );

  // Exported field: 'node-schedule_item-body'
  $fields['node-schedule_item-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'schedule_item',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Use schedule items for content you wish to have in the schedule but not be part of any session submission workflows. Examples include scheduling lunch or breaks.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'trim_length' => '800',
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => 0,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-schedule_item-field_accepted'
  $fields['node-schedule_item-field_accepted'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_accepted',
      'field_permissions' => array(
        'type' => '2',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
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
        'max' => '2',
        'min' => '0',
        'prefix' => '',
        'suffix' => '',
      ),
      'translatable' => '0',
      'type' => 'list_integer',
      'type_name' => 'session',
    ),
    'field_instance' => array(
      'bundle' => 'schedule_item',
      'default_value' => array(
        0 => array(
          'value' => '',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '7',
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '7',
        ),
        'teaser' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '7',
        ),
        'token' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '7',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_accepted',
      'label' => 'Status',
      'required' => FALSE,
      'settings' => array(
        'max' => '2',
        'min' => '0',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'weight' => '7',
      'widget' => array(
        'active' => '0',
        'module' => 'options',
        'settings' => array(
          'default_value_php' => NULL,
        ),
        'type' => 'options_buttons',
        'weight' => '2',
      ),
      'widget_type' => 'optionwidgets_buttons',
    ),
  );

  // Exported field: 'node-schedule_item-field_event'
  $fields['node-schedule_item-field_event'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_event',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'event' => 'event',
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
        'view' => array(
          'args' => array(),
          'display_name' => 'references_1',
          'view_name' => 'latest_event',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'schedule_item',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => 4,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_event',
      'label' => 'Event',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-schedule_item-field_session_room'
  $fields['node-schedule_item-field_session_room'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_session_room',
      'field_permissions' => array(
        'type' => '2',
      ),
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'module' => 'node_reference',
      'settings' => array(
        'field_permissions' => array(
          'edit' => 'edit',
          'view' => 'view',
        ),
        'referenceable_types' => array(
          'event' => 0,
          'invoice' => 0,
          'news' => 0,
          'page' => 0,
          'product' => 0,
          'report' => 0,
          'room' => 'room',
          'schedule_item' => 0,
          'session' => 0,
          'sponsor' => 0,
          'time_slot' => 0,
          'webform' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
      'type_name' => 'session',
    ),
    'field_instance' => array(
      'bundle' => 'schedule_item',
      'default_value' => array(
        0 => array(
          'nid' => NULL,
        ),
      ),
      'deleted' => '0',
      'description' => 'Select room(s) in which the session occurs.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '9',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '9',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '9',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '9',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '9',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '9',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_session_room',
      'label' => 'Room',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'weight' => '9',
      'widget' => array(
        'active' => '0',
        'module' => 'options',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'default_value_php' => NULL,
          'size' => 60,
        ),
        'type' => 'options_buttons',
        'weight' => '4',
      ),
      'widget_type' => 'nodereference_buttons',
    ),
  );

  // Exported field: 'node-schedule_item-field_session_slot'
  $fields['node-schedule_item-field_session_slot'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_session_slot',
      'field_permissions' => array(
        'type' => '2',
      ),
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'module' => 'node_reference',
      'settings' => array(
        'field_permissions' => array(
          'edit' => 'edit',
          'view' => 'view',
        ),
        'referenceable_types' => array(
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
          'time_slot' => 'time_slot',
          'webform' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
      'type_name' => 'session',
    ),
    'field_instance' => array(
      'bundle' => 'schedule_item',
      'default_value' => array(
        0 => array(
          'nid' => '',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '8',
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '8',
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '8',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '8',
        ),
        'teaser' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '8',
        ),
        'token' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '8',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_session_slot',
      'label' => 'Time slot',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'weight' => '8',
      'widget' => array(
        'active' => '0',
        'module' => 'options',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'default_value_php' => NULL,
          'size' => 60,
        ),
        'type' => 'options_select',
        'weight' => '3',
      ),
      'widget_type' => 'nodereference_select',
    ),
  );

  // Exported field: 'node-session-body'
  $fields['node-session-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'session',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Use this content type to propose sessions at the event. Users can vote on proposed sessions and add sessions to their individual session agendas.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Description',
      'required' => 1,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-session-field_accepted'
  $fields['node-session-field_accepted'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_accepted',
      'field_permissions' => array(
        'type' => '2',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
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
        'max' => '2',
        'min' => '0',
        'prefix' => '',
        'suffix' => '',
      ),
      'translatable' => '0',
      'type' => 'list_integer',
      'type_name' => 'session',
    ),
    'field_instance' => array(
      'bundle' => 'session',
      'default_value' => NULL,
      'default_value_function' => '',
      'default_value_php' => '',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '1',
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'token' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_accepted',
      'label' => 'Status',
      'required' => 0,
      'settings' => array(
        'max' => '2',
        'min' => '0',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'weight' => '1',
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '10',
      ),
      'widget_type' => 'optionwidgets_buttons',
    ),
  );

  // Exported field: 'node-session-field_event'
  $fields['node-session-field_event'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_event',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'event' => 'event',
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
        'view' => array(
          'args' => array(),
          'display_name' => 'references_1',
          'view_name' => 'latest_event',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'session',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_event',
      'label' => 'Event',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'options_select',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-session-field_experience'
  $fields['node-session-field_experience'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_experience',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
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
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'list_text',
      'type_name' => 'session',
    ),
    'field_instance' => array(
      'bundle' => 'session',
      'default_value' => array(
        0 => array(
          'value' => NULL,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '3',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-2',
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-2',
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-2',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-2',
        ),
        'teaser' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '1',
        ),
        'token' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_experience',
      'label' => 'Experience level',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'weight' => '-2',
      'widget' => array(
        'active' => '0',
        'module' => 'options',
        'settings' => array(
          'default_value_php' => NULL,
        ),
        'type' => 'options_buttons',
        'weight' => '5',
      ),
      'widget_type' => 'optionwidgets_buttons',
    ),
  );

  // Exported field: 'node-session-field_featured'
  $fields['node-session-field_featured'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_featured',
      'field_permissions' => array(
        'type' => '2',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
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
        'max' => '1',
        'min' => '0',
        'prefix' => '',
        'suffix' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
      'type_name' => 'session',
    ),
    'field_instance' => array(
      'bundle' => 'session',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'default_value_function' => '',
      'default_value_php' => '',
      'deleted' => '0',
      'description' => 'Checking this will promote the session to the feature sessions slideshow on the front page.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '2',
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '2',
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '2',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'token' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_featured',
      'label' => 'Featured Session',
      'required' => 0,
      'settings' => array(
        'max' => '1',
        'min' => '0',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'weight' => '2',
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 0,
        ),
        'type' => 'options_onoff',
        'weight' => '11',
      ),
      'widget_type' => 'optionwidgets_onoff',
    ),
  );

  // Exported field: 'node-session-field_marketing_image'
  $fields['node-session-field_marketing_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_marketing_image',
      'field_permissions' => array(
        'type' => '2',
      ),
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'description_field' => '0',
        'field_permissions' => array(
          'edit' => 'edit',
          'view' => 'view',
        ),
        'list_default' => 1,
        'list_field' => '0',
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
      'type_name' => 'session',
    ),
    'field_instance' => array(
      'bundle' => 'session',
      'default_value' => '',
      'deleted' => '0',
      'description' => 'Add an image to display in the views slideshow for "featured sessions".',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-2',
        ),
        'rss' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-2',
        ),
        'search_index' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-2',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-2',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '-2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_marketing_image',
      'label' => 'Marketing image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'weight' => '-2',
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'bar',
        ),
        'type' => 'image_image',
        'weight' => '4',
      ),
      'widget_type' => 'imagefield_widget',
    ),
  );

  // Exported field: 'node-session-field_session_room'
  $fields['node-session-field_session_room'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_session_room',
      'field_permissions' => array(
        'type' => '2',
      ),
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'module' => 'node_reference',
      'settings' => array(
        'field_permissions' => array(
          'edit' => 'edit',
          'view' => 'view',
        ),
        'referenceable_types' => array(
          'event' => 0,
          'invoice' => 0,
          'news' => 0,
          'page' => 0,
          'product' => 0,
          'report' => 0,
          'room' => 'room',
          'schedule_item' => 0,
          'session' => 0,
          'sponsor' => 0,
          'time_slot' => 0,
          'webform' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
      'type_name' => 'session',
    ),
    'field_instance' => array(
      'bundle' => 'session',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Select room(s) in which the session occurs.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '0',
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '0',
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '0',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'token' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_session_room',
      'label' => 'Room',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'weight' => '0',
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '9',
      ),
      'widget_type' => 'nodereference_buttons',
    ),
  );

  // Exported field: 'node-session-field_session_slot'
  $fields['node-session-field_session_slot'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_session_slot',
      'field_permissions' => array(
        'type' => '2',
      ),
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'module' => 'node_reference',
      'settings' => array(
        'field_permissions' => array(
          'edit' => 'edit',
          'view' => 'view',
        ),
        'referenceable_types' => array(
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
          'time_slot' => 'time_slot',
          'webform' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
      'type_name' => 'session',
    ),
    'field_instance' => array(
      'bundle' => 'session',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '-1',
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '-1',
        ),
        'search_index' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '-1',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '-1',
        ),
        'teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'token' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '-1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_session_slot',
      'label' => 'Time slot',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'weight' => '-1',
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '6',
      ),
      'widget_type' => 'nodereference_select',
    ),
  );

  // Exported field: 'node-session-field_slides'
  $fields['node-session-field_slides'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_slides',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'file',
      'settings' => array(
        'description_field' => '0',
        'display_default' => 1,
        'display_field' => '1',
        'field_permissions' => array(
          'edit' => 'edit',
          'view' => 'view',
        ),
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
      'type_name' => 'session',
    ),
    'field_instance' => array(
      'bundle' => 'session',
      'default_value' => '',
      'deleted' => '0',
      'description' => 'Upload your slides here as a PDF, or link to them from the description. (This is typically done after your session.)',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '6',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '0',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '0',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '0',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_slides',
      'label' => 'Slides',
      'required' => FALSE,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => 'slides',
        'file_extensions' => 'ppt pdf odt odp gz zip',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'weight' => '0',
      'widget' => array(
        'active' => '0',
        'module' => 'file',
        'settings' => array(
          'progress_indicator' => 'bar',
        ),
        'type' => 'file_generic',
        'weight' => '8',
      ),
      'widget_type' => 'filefield_widget',
    ),
  );

  // Exported field: 'node-session-field_speakers'
  $fields['node-session-field_speakers'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_speakers',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'uid' => array(
          'columns' => array(
            'uid' => 'uid',
          ),
          'table' => 'users',
        ),
      ),
      'indexes' => array(
        'uid' => array(
          0 => 'uid',
        ),
      ),
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
          'priority' => '0',
          'referenced' => array(
            'delete' => 0,
            'deny_delete' => 0,
            'deny_update' => 0,
            'deny_view' => 0,
            'update' => 'update',
            'view' => 0,
          ),
          'unused' => '0',
          'views' => array(
            'view' => '',
            'view_args' => '',
          ),
        ),
        'referenceable_roles' => array(
          2 => '2',
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
          1 => '1',
        ),
        'view' => array(
          'args' => array(
            0 => '',
          ),
          'display_name' => 'default',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'user_reference',
      'type_name' => 'session',
    ),
    'field_instance' => array(
      'bundle' => 'session',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Add your username and optionally 1-5 additional speaker usernames.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'user_reference',
          'settings' => array(),
          'type' => 'user_reference_default',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'user_reference',
          'settings' => array(),
          'type' => 'user_reference_default',
          'weight' => '-3',
        ),
        'rss' => array(
          'label' => 'inline',
          'module' => 'user_reference',
          'settings' => array(),
          'type' => 'user_reference_default',
          'weight' => '-3',
        ),
        'teaser' => array(
          'label' => 'inline',
          'module' => 'user_reference',
          'settings' => array(),
          'type' => 'user_reference_default',
          'weight' => '0',
        ),
        'token' => array(
          'label' => 'inline',
          'module' => 'user_reference',
          'settings' => array(),
          'type' => 'user_reference_default',
          'weight' => '-3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_speakers',
      'label' => 'Speaker(s)',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'weight' => '-3',
      'widget' => array(
        'active' => 1,
        'module' => 'user_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'user_reference/autocomplete',
          'size' => '40',
        ),
        'type' => 'user_reference_autocomplete',
        'weight' => '2',
      ),
      'widget_type' => 'userreference_autocomplete',
    ),
  );

  // Exported field: 'node-session-field_track'
  $fields['node-session-field_track'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_track',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
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
        'text_processing' => '0',
      ),
      'translatable' => '0',
      'type' => 'list_text',
      'type_name' => 'session',
    ),
    'field_instance' => array(
      'bundle' => 'session',
      'default_value' => array(
        0 => array(
          'value' => '',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '-3',
        ),
        'rss' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-3',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_track',
      'label' => 'Track',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'weight' => '-3',
      'widget' => array(
        'active' => '0',
        'module' => 'options',
        'settings' => array(
          'default_value_php' => NULL,
        ),
        'type' => 'options_buttons',
        'weight' => '3',
      ),
      'widget_type' => 'optionwidgets_buttons',
    ),
  );

  // Exported field: 'node-time_slot-field_slot_datetime'
  $fields['node-time_slot-field_slot_datetime'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_slot_datetime',
      'foreign keys' => array(),
      'indexes' => array(),
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
      'translatable' => '0',
      'type' => 'datetime',
      'type_name' => 'time_slot',
    ),
    'field_instance' => array(
      'bundle' => 'time_slot',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '-4',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '-4',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '-4',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '-4',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '-4',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '-4',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '-4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_slot_datetime',
      'label' => 'Date and time',
      'required' => FALSE,
      'settings' => array(
        'default_value' => 'blank',
        'default_value2' => 'blank',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'weight' => '-4',
      'widget' => array(
        'active' => '0',
        'module' => 'date',
        'settings' => array(
          'display_all_day' => 0,
          'increment' => '1',
          'input_format' => 'm/d/Y - H:i',
          'input_format_custom' => '',
          'label_position' => 'above',
          'repeat_collapsed' => '',
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_popup',
        'weight' => '-4',
      ),
      'widget_type' => 'date_popup',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add an image to display in the views slideshow for "featured sessions".');
  t('Add your username and optionally 1-5 additional speaker usernames.');
  t('Body');
  t('Capacity');
  t('Checking this will promote the session to the feature sessions slideshow on the front page.');
  t('Date and time');
  t('Description');
  t('Event');
  t('Experience level');
  t('Featured Session');
  t('How many people does this space hold?');
  t('Marketing image');
  t('Number of sessions or BoFs that this room can hold in a time slot. Used to allow multiple BoFs in the same room at the same time slot.');
  t('Photo');
  t('Room');
  t('Rooms provide a location for each session.');
  t('Select room(s) in which the session occurs.');
  t('Session capacity');
  t('Slides');
  t('Speaker(s)');
  t('Status');
  t('Time slot');
  t('Track');
  t('Upload your slides here as a PDF, or link to them from the description. (This is typically done after your session.)');
  t('Use schedule items for content you wish to have in the schedule but not be part of any session submission workflows. Examples include scheduling lunch or breaks.');
  t('Use this content type to propose sessions at the event. Users can vote on proposed sessions and add sessions to their individual session agendas.');

  return $fields;
}
