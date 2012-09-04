<?php
/**
 * @file
 * dco_registration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dco_registration_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'registrations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'registration';
  $view->human_name = 'Registrations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Registration overview';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    5 => '5',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'mail' => 'mail',
    'name_1' => 'name_1',
    'field_meal_preference' => 'field_meal_preference',
    'field_tshirt_size' => 'field_tshirt_size',
    'field_allergies' => 'field_allergies',
    'field_special_request' => 'field_special_request',
    'view_registration' => 'view_registration',
    'edit_node' => 'edit_node',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meal_preference' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tshirt_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_allergies' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_special_request' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_registration' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = FALSE;
  $handler->display->display_options['header']['result']['content'] = '<h3>Total Registrations: @total</h3>
';
  /* Relationship: Registration: Author entity author_uid */
  $handler->display->display_options['relationships']['author']['id'] = 'author';
  $handler->display->display_options['relationships']['author']['table'] = 'registration';
  $handler->display->display_options['relationships']['author']['field'] = 'author';
  $handler->display->display_options['relationships']['author']['label'] = 'Buyer';
  $handler->display->display_options['relationships']['author']['required'] = 1;
  /* Relationship: Registration: User_uid */
  $handler->display->display_options['relationships']['user_uid']['id'] = 'user_uid';
  $handler->display->display_options['relationships']['user_uid']['table'] = 'registration';
  $handler->display->display_options['relationships']['user_uid']['field'] = 'user_uid';
  $handler->display->display_options['relationships']['user_uid']['required'] = 1;
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'action::system_block_ip_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::user_block_user_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_user_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::mimemail_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['name']['label'] = 'User name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'author';
  $handler->display->display_options['fields']['name_1']['label'] = 'Purchased by';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name_1']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name_1']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name_1']['format_username'] = 1;
  /* Field: Registration: Meal Preference */
  $handler->display->display_options['fields']['field_meal_preference']['id'] = 'field_meal_preference';
  $handler->display->display_options['fields']['field_meal_preference']['table'] = 'field_data_field_meal_preference';
  $handler->display->display_options['fields']['field_meal_preference']['field'] = 'field_meal_preference';
  $handler->display->display_options['fields']['field_meal_preference']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_meal_preference']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meal_preference']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_meal_preference']['field_api_classes'] = 0;
  /* Field: Registration: T-Shirt Size */
  $handler->display->display_options['fields']['field_tshirt_size']['id'] = 'field_tshirt_size';
  $handler->display->display_options['fields']['field_tshirt_size']['table'] = 'field_data_field_tshirt_size';
  $handler->display->display_options['fields']['field_tshirt_size']['field'] = 'field_tshirt_size';
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tshirt_size']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tshirt_size']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tshirt_size']['field_api_classes'] = 0;
  /* Field: Registration: Food Allergies */
  $handler->display->display_options['fields']['field_allergies']['id'] = 'field_allergies';
  $handler->display->display_options['fields']['field_allergies']['table'] = 'field_data_field_allergies';
  $handler->display->display_options['fields']['field_allergies']['field'] = 'field_allergies';
  $handler->display->display_options['fields']['field_allergies']['label'] = 'Allergies';
  $handler->display->display_options['fields']['field_allergies']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_allergies']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_allergies']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_allergies']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_allergies']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_allergies']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_allergies']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_allergies']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_allergies']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_allergies']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_allergies']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_allergies']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_allergies']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_allergies']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_allergies']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_allergies']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_allergies']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_allergies']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_allergies']['field_api_classes'] = 0;
  /* Field: Registration: Special Request */
  $handler->display->display_options['fields']['field_special_request']['id'] = 'field_special_request';
  $handler->display->display_options['fields']['field_special_request']['table'] = 'field_data_field_special_request';
  $handler->display->display_options['fields']['field_special_request']['field'] = 'field_special_request';
  $handler->display->display_options['fields']['field_special_request']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_special_request']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_special_request']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_special_request']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_special_request']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_special_request']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_special_request']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_special_request']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_special_request']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_special_request']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_special_request']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_special_request']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_special_request']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_special_request']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_special_request']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_special_request']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_special_request']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_special_request']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_special_request']['field_api_classes'] = 0;
  /* Field: Registration: View link */
  $handler->display->display_options['fields']['view_registration']['id'] = 'view_registration';
  $handler->display->display_options['fields']['view_registration']['table'] = 'registration';
  $handler->display->display_options['fields']['view_registration']['field'] = 'view_registration';
  $handler->display->display_options['fields']['view_registration']['label'] = '';
  $handler->display->display_options['fields']['view_registration']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_registration']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_registration']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_registration']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_registration']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_registration']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_registration']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_registration']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_registration']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['view_registration']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_registration']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_registration']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_registration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_registration']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_registration']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_registration']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_registration']['hide_alter_empty'] = 1;
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Field: Registration: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'registration';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created on';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Filter criterion: Registration: Meal Preference (field_meal_preference) */
  $handler->display->display_options['filters']['field_meal_preference_value']['id'] = 'field_meal_preference_value';
  $handler->display->display_options['filters']['field_meal_preference_value']['table'] = 'field_data_field_meal_preference';
  $handler->display->display_options['filters']['field_meal_preference_value']['field'] = 'field_meal_preference_value';
  $handler->display->display_options['filters']['field_meal_preference_value']['group_type'] = 'count_distinct';
  $handler->display->display_options['filters']['field_meal_preference_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_meal_preference_value']['expose']['operator_id'] = 'field_meal_preference_value_op';
  $handler->display->display_options['filters']['field_meal_preference_value']['expose']['label'] = 'Meal Preference';
  $handler->display->display_options['filters']['field_meal_preference_value']['expose']['operator'] = 'field_meal_preference_value_op';
  $handler->display->display_options['filters']['field_meal_preference_value']['expose']['identifier'] = 'field_meal_preference_value';
  $handler->display->display_options['filters']['field_meal_preference_value']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['field_meal_preference_value']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_meal_preference_value']['expose']['reduce'] = 0;
  /* Filter criterion: Registration: T-Shirt Size (field_tshirt_size) */
  $handler->display->display_options['filters']['field_tshirt_size_value']['id'] = 'field_tshirt_size_value';
  $handler->display->display_options['filters']['field_tshirt_size_value']['table'] = 'field_data_field_tshirt_size';
  $handler->display->display_options['filters']['field_tshirt_size_value']['field'] = 'field_tshirt_size_value';
  $handler->display->display_options['filters']['field_tshirt_size_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tshirt_size_value']['expose']['operator_id'] = 'field_tshirt_size_value_op';
  $handler->display->display_options['filters']['field_tshirt_size_value']['expose']['label'] = 'T-Shirt Size';
  $handler->display->display_options['filters']['field_tshirt_size_value']['expose']['operator'] = 'field_tshirt_size_value_op';
  $handler->display->display_options['filters']['field_tshirt_size_value']['expose']['identifier'] = 'field_tshirt_size_value';
  $handler->display->display_options['filters']['field_tshirt_size_value']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['field_tshirt_size_value']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_tshirt_size_value']['expose']['reduce'] = 0;

  /* Display: Overview */
  $handler = $view->new_display('page', 'Overview', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['path'] = 'admin/registration/overview';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Overview';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Registration';
  $handler->display->display_options['tab_options']['description'] = 'Registration for 2012 and newer';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Meal */
  $handler = $view->new_display('page', 'Meal', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Meal Preferences';
  $handler->display->display_options['display_description'] = 'Meal Preferences';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_meal_preference',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Registration: User_uid */
  $handler->display->display_options['relationships']['user_uid']['id'] = 'user_uid';
  $handler->display->display_options['relationships']['user_uid']['table'] = 'registration';
  $handler->display->display_options['relationships']['user_uid']['field'] = 'user_uid';
  $handler->display->display_options['relationships']['user_uid']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Registration: Meal Preference */
  $handler->display->display_options['fields']['field_meal_preference']['id'] = 'field_meal_preference';
  $handler->display->display_options['fields']['field_meal_preference']['table'] = 'field_data_field_meal_preference';
  $handler->display->display_options['fields']['field_meal_preference']['field'] = 'field_meal_preference';
  $handler->display->display_options['fields']['field_meal_preference']['label'] = '';
  $handler->display->display_options['fields']['field_meal_preference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_meal_preference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meal_preference']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meal_preference']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meal_preference']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_meal_preference']['field_api_classes'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['name']['group_type'] = 'count';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['format_plural'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'admin/registration/meals';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Meals';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Registration';
  $handler->display->display_options['tab_options']['description'] = 'Registration for 2012 and newer';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Shirt */
  $handler = $view->new_display('page', 'Shirt', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Shirt Sizes';
  $handler->display->display_options['display_description'] = 'Shirt Preferences';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_tshirt_size',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Registration: User_uid */
  $handler->display->display_options['relationships']['user_uid']['id'] = 'user_uid';
  $handler->display->display_options['relationships']['user_uid']['table'] = 'registration';
  $handler->display->display_options['relationships']['user_uid']['field'] = 'user_uid';
  $handler->display->display_options['relationships']['user_uid']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Registration: T-Shirt Size */
  $handler->display->display_options['fields']['field_tshirt_size']['id'] = 'field_tshirt_size';
  $handler->display->display_options['fields']['field_tshirt_size']['table'] = 'field_data_field_tshirt_size';
  $handler->display->display_options['fields']['field_tshirt_size']['field'] = 'field_tshirt_size';
  $handler->display->display_options['fields']['field_tshirt_size']['label'] = '';
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_tshirt_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tshirt_size']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tshirt_size']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tshirt_size']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tshirt_size']['field_api_classes'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['name']['group_type'] = 'count';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['format_plural'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'admin/registration/shirts';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Shirts';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Registration';
  $handler->display->display_options['tab_options']['description'] = 'Registration for 2012 and newer';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Requests */
  $handler = $view->new_display('page', 'Requests', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Food Allergies & Special Requests';
  $handler->display->display_options['display_description'] = 'Food allergies or special requests';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'action::system_block_ip_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::user_block_user_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_user_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::mimemail_send_email_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['name']['label'] = 'User name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'author';
  $handler->display->display_options['fields']['name_1']['label'] = 'Purchased by';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name_1']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name_1']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name_1']['format_username'] = 1;
  /* Field: Registration: Food Allergies */
  $handler->display->display_options['fields']['field_allergies']['id'] = 'field_allergies';
  $handler->display->display_options['fields']['field_allergies']['table'] = 'field_data_field_allergies';
  $handler->display->display_options['fields']['field_allergies']['field'] = 'field_allergies';
  $handler->display->display_options['fields']['field_allergies']['label'] = 'Allergies';
  $handler->display->display_options['fields']['field_allergies']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_allergies']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_allergies']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_allergies']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_allergies']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_allergies']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_allergies']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_allergies']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_allergies']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_allergies']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_allergies']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_allergies']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_allergies']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_allergies']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_allergies']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_allergies']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_allergies']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_allergies']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_allergies']['field_api_classes'] = 0;
  /* Field: Registration: Special Request */
  $handler->display->display_options['fields']['field_special_request']['id'] = 'field_special_request';
  $handler->display->display_options['fields']['field_special_request']['table'] = 'field_data_field_special_request';
  $handler->display->display_options['fields']['field_special_request']['field'] = 'field_special_request';
  $handler->display->display_options['fields']['field_special_request']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_special_request']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_special_request']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_special_request']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_special_request']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_special_request']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_special_request']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_special_request']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_special_request']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_special_request']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_special_request']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_special_request']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_special_request']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_special_request']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_special_request']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_special_request']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_special_request']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_special_request']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_special_request']['field_api_classes'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Registration: Food Allergies (field_allergies) */
  $handler->display->display_options['filters']['field_allergies_value']['id'] = 'field_allergies_value';
  $handler->display->display_options['filters']['field_allergies_value']['table'] = 'field_data_field_allergies';
  $handler->display->display_options['filters']['field_allergies_value']['field'] = 'field_allergies_value';
  $handler->display->display_options['filters']['field_allergies_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_allergies_value']['group'] = 1;
  /* Filter criterion: Registration: Special Request (field_special_request) */
  $handler->display->display_options['filters']['field_special_request_value']['id'] = 'field_special_request_value';
  $handler->display->display_options['filters']['field_special_request_value']['table'] = 'field_data_field_special_request';
  $handler->display->display_options['filters']['field_special_request_value']['field'] = 'field_special_request_value';
  $handler->display->display_options['filters']['field_special_request_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_special_request_value']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/registration/requests';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Requests';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Registration';
  $handler->display->display_options['tab_options']['description'] = 'Registration for 2012 and newer';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['registrations'] = $view;

  return $export;
}
