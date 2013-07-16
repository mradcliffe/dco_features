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

  $view = new view();
  $view->name = 'registration_paymetns';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_payment_transaction';
  $view->human_name = 'Registration Payments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Registration Payments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Relationship: Commerce Payment Transaction: Order ID */
  $handler->display->display_options['relationships']['order_id']['id'] = 'order_id';
  $handler->display->display_options['relationships']['order_id']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['relationships']['order_id']['field'] = 'order_id';
  /* Relationship: Commerce Order: Referenced line item */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['relationship'] = 'order_id';
  /* Relationship: Commerce Line item: Referenced product */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Field: Commerce Line Item: Label */
  $handler->display->display_options['fields']['line_item_label']['id'] = 'line_item_label';
  $handler->display->display_options['fields']['line_item_label']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_label']['field'] = 'line_item_label';
  $handler->display->display_options['fields']['line_item_label']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['line_item_label']['label'] = 'Type';
  /* Field: COUNT(Commerce Payment Transaction: Transaction ID) */
  $handler->display->display_options['fields']['transaction_id']['id'] = 'transaction_id';
  $handler->display->display_options['fields']['transaction_id']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['transaction_id']['field'] = 'transaction_id';
  $handler->display->display_options['fields']['transaction_id']['group_type'] = 'count';
  $handler->display->display_options['fields']['transaction_id']['label'] = 'Count';
  /* Field: SUM(Commerce Payment Transaction: Amount) */
  $handler->display->display_options['fields']['amount']['id'] = 'amount';
  $handler->display->display_options['fields']['amount']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['amount']['field'] = 'amount';
  $handler->display->display_options['fields']['amount']['group_type'] = 'sum';
  $handler->display->display_options['fields']['amount']['label'] = 'Total';
  /* Filter criterion: Commerce Payment Transaction: Payment method */
  $handler->display->display_options['filters']['payment_method']['id'] = 'payment_method';
  $handler->display->display_options['filters']['payment_method']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['filters']['payment_method']['field'] = 'payment_method';
  $handler->display->display_options['filters']['payment_method']['value'] = array(
    'paypal_wps' => 'paypal_wps',
  );
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'completed' => 'completed',
    'pending' => 'pending',
    'processing' => 'processing',
  );
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku']['id'] = 'sku';
  $handler->display->display_options['filters']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku']['field'] = 'sku';
  $handler->display->display_options['filters']['sku']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['filters']['sku']['operator'] = 'starts';
  $handler->display->display_options['filters']['sku']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sku']['expose']['operator_id'] = 'sku_op';
  $handler->display->display_options['filters']['sku']['expose']['label'] = 'SKU begins with';
  $handler->display->display_options['filters']['sku']['expose']['operator'] = 'sku_op';
  $handler->display->display_options['filters']['sku']['expose']['identifier'] = 'sku';
  $handler->display->display_options['filters']['sku']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Product type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Commerce Order: Created date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['relationship'] = 'order_id';
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Created date';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['created']['group_info']['label'] = 'Order Year';
  $handler->display->display_options['filters']['created']['group_info']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['group_info']['group_items'] = array(
    1 => array(
      'title' => '2012',
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '',
        'min' => '2012-01-01',
        'max' => '2012-12-31',
      ),
    ),
    2 => array(
      'title' => '2013',
      'operator' => 'between',
      'value' => array(
        'type' => 'date',
        'value' => '',
        'min' => '2013-01-01',
        'max' => '2013-12-31',
      ),
    ),
  );

  /* Display: Summary */
  $handler = $view->new_display('page', 'Summary', 'page');
  $handler->display->display_options['path'] = 'admin/registration/payments';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Paypal Payments';
  $handler->display->display_options['menu']['description'] = 'Payments';
  $handler->display->display_options['menu']['weight'] = '20';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Summary Export */
  $handler = $view->new_display('views_data_export', 'Summary Export', 'views_data_export_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer commerce_order entities';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'dco-transactions-%timestamp-full.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Order: Order number */
  $handler->display->display_options['fields']['order_number']['id'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_number']['field'] = 'order_number';
  /* Field: Commerce Payment Transaction: Remote ID */
  $handler->display->display_options['fields']['remote_id']['id'] = 'remote_id';
  $handler->display->display_options['fields']['remote_id']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['remote_id']['field'] = 'remote_id';
  $handler->display->display_options['fields']['remote_id']['label'] = 'Transaction ID';
  /* Field: Commerce Payment Transaction: Remote status */
  $handler->display->display_options['fields']['remote_status']['id'] = 'remote_status';
  $handler->display->display_options['fields']['remote_status']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['remote_status']['field'] = 'remote_status';
  $handler->display->display_options['fields']['remote_status']['label'] = 'Transaction Status';
  /* Field: Commerce Order: Order Balance */
  $handler->display->display_options['fields']['balance']['id'] = 'balance';
  $handler->display->display_options['fields']['balance']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['balance']['field'] = 'balance';
  $handler->display->display_options['fields']['balance']['display_format'] = 'raw';
  /* Field: Commerce Payment Transaction: Amount */
  $handler->display->display_options['fields']['amount_1']['id'] = 'amount_1';
  $handler->display->display_options['fields']['amount_1']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['amount_1']['field'] = 'amount';
  $handler->display->display_options['fields']['amount_1']['display_format'] = 'raw';
  /* Field: Commerce Payment Transaction: Changed date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'm/d/Y h:i:s';
  $handler->display->display_options['path'] = 'administer/registration/payments/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Detailed */
  $handler = $view->new_display('page', 'Detailed', 'page_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['path'] = 'admin/registration/payments/detail';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Paypal Payments (detail)';
  $handler->display->display_options['menu']['description'] = 'Payments';
  $handler->display->display_options['menu']['weight'] = '20';
  $handler->display->display_options['menu']['context'] = 0;
  $export['registration_paymetns'] = $view;

  $view = new view();
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
  $handler->display->display_options['use_more_always'] = FALSE;
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
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<h3>Total Registrations: @total</h3>';
  /* Relationship: Registration: Author entity author_uid */
  $handler->display->display_options['relationships']['author']['id'] = 'author';
  $handler->display->display_options['relationships']['author']['table'] = 'registration';
  $handler->display->display_options['relationships']['author']['field'] = 'author';
  $handler->display->display_options['relationships']['author']['label'] = 'Buyer';
  $handler->display->display_options['relationships']['author']['required'] = TRUE;
  /* Relationship: Registration: User */
  $handler->display->display_options['relationships']['user_uid']['id'] = 'user_uid';
  $handler->display->display_options['relationships']['user_uid']['table'] = 'registration';
  $handler->display->display_options['relationships']['user_uid']['field'] = 'user_uid';
  /* Relationship: Registration: Registration to Commerce Product */
  $handler->display->display_options['relationships']['registration_related_commerce_product']['id'] = 'registration_related_commerce_product';
  $handler->display->display_options['relationships']['registration_related_commerce_product']['table'] = 'registration';
  $handler->display->display_options['relationships']['registration_related_commerce_product']['field'] = 'registration_related_commerce_product';
  $handler->display->display_options['relationships']['registration_related_commerce_product']['label'] = 'Registration product';
  $handler->display->display_options['relationships']['registration_related_commerce_product']['required'] = TRUE;
  /* Field: Global: Send e-mail */
  $handler->display->display_options['fields']['views_send']['id'] = 'views_send';
  $handler->display->display_options['fields']['views_send']['table'] = 'views';
  $handler->display->display_options['fields']['views_send']['field'] = 'views_send';
  $handler->display->display_options['fields']['views_send']['label'] = 'Send E-mail';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['name']['label'] = 'User name';
  /* Field: Registration: Full Name */
  $handler->display->display_options['fields']['field_fullname']['id'] = 'field_fullname';
  $handler->display->display_options['fields']['field_fullname']['table'] = 'field_data_field_fullname';
  $handler->display->display_options['fields']['field_fullname']['field'] = 'field_fullname';
  /* Field: Registration: Drupal user name */
  $handler->display->display_options['fields']['field_do_username']['id'] = 'field_do_username';
  $handler->display->display_options['fields']['field_do_username']['table'] = 'field_data_field_do_username';
  $handler->display->display_options['fields']['field_do_username']['field'] = 'field_do_username';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user_uid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'author';
  $handler->display->display_options['fields']['name_1']['label'] = 'Purchased by';
  /* Field: Registration: Meal Preference */
  $handler->display->display_options['fields']['field_meal_preference']['id'] = 'field_meal_preference';
  $handler->display->display_options['fields']['field_meal_preference']['table'] = 'field_data_field_meal_preference';
  $handler->display->display_options['fields']['field_meal_preference']['field'] = 'field_meal_preference';
  /* Field: Registration: T-Shirt Size */
  $handler->display->display_options['fields']['field_tshirt_size']['id'] = 'field_tshirt_size';
  $handler->display->display_options['fields']['field_tshirt_size']['table'] = 'field_data_field_tshirt_size';
  $handler->display->display_options['fields']['field_tshirt_size']['field'] = 'field_tshirt_size';
  /* Field: Registration: Food Allergies */
  $handler->display->display_options['fields']['field_allergies']['id'] = 'field_allergies';
  $handler->display->display_options['fields']['field_allergies']['table'] = 'field_data_field_allergies';
  $handler->display->display_options['fields']['field_allergies']['field'] = 'field_allergies';
  $handler->display->display_options['fields']['field_allergies']['label'] = 'Allergies';
  /* Field: Registration: Special Request */
  $handler->display->display_options['fields']['field_special_request']['id'] = 'field_special_request';
  $handler->display->display_options['fields']['field_special_request']['table'] = 'field_data_field_special_request';
  $handler->display->display_options['fields']['field_special_request']['field'] = 'field_special_request';
  /* Field: Registration: View link */
  $handler->display->display_options['fields']['view_registration']['id'] = 'view_registration';
  $handler->display->display_options['fields']['view_registration']['table'] = 'registration';
  $handler->display->display_options['fields']['view_registration']['field'] = 'view_registration';
  $handler->display->display_options['fields']['view_registration']['label'] = '';
  $handler->display->display_options['fields']['view_registration']['element_label_colon'] = FALSE;
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Registration: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'registration';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created on';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
  $handler->display->display_options['filters']['field_meal_preference_value']['expose']['multiple'] = TRUE;
  /* Filter criterion: Registration: T-Shirt Size (field_tshirt_size) */
  $handler->display->display_options['filters']['field_tshirt_size_value']['id'] = 'field_tshirt_size_value';
  $handler->display->display_options['filters']['field_tshirt_size_value']['table'] = 'field_data_field_tshirt_size';
  $handler->display->display_options['filters']['field_tshirt_size_value']['field'] = 'field_tshirt_size_value';
  $handler->display->display_options['filters']['field_tshirt_size_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tshirt_size_value']['expose']['operator_id'] = 'field_tshirt_size_value_op';
  $handler->display->display_options['filters']['field_tshirt_size_value']['expose']['label'] = 'T-Shirt Size';
  $handler->display->display_options['filters']['field_tshirt_size_value']['expose']['operator'] = 'field_tshirt_size_value_op';
  $handler->display->display_options['filters']['field_tshirt_size_value']['expose']['identifier'] = 'field_tshirt_size_value';
  $handler->display->display_options['filters']['field_tshirt_size_value']['expose']['multiple'] = TRUE;
  /* Filter criterion: Registration: Registration type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'registration';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'paid_registration' => 'paid_registration',
  );
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku']['id'] = 'sku';
  $handler->display->display_options['filters']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku']['field'] = 'sku';
  $handler->display->display_options['filters']['sku']['relationship'] = 'registration_related_commerce_product';
  $handler->display->display_options['filters']['sku']['value'] = 'dco-2013';
  $handler->display->display_options['filters']['sku']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sku']['expose']['operator_id'] = 'sku_op';
  $handler->display->display_options['filters']['sku']['expose']['label'] = 'Product SKU';
  $handler->display->display_options['filters']['sku']['expose']['description'] = 'e.g.: dco-YYYY';
  $handler->display->display_options['filters']['sku']['expose']['operator'] = 'sku_op';
  $handler->display->display_options['filters']['sku']['expose']['identifier'] = 'sku';
  $handler->display->display_options['filters']['sku']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
    8 => 0,
    9 => 0,
  );

  /* Display: Overview */
  $handler = $view->new_display('page', 'Overview', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['path'] = 'admin/registration/overview';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Overview';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Organizers';
  $handler->display->display_options['tab_options']['description'] = 'Registration for 2012 and newer';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: Meal */
  $handler = $view->new_display('page', 'Meal', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Meal Preferences';
  $handler->display->display_options['display_description'] = 'Meal Preferences';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_calc';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_meal_preference' => 'field_meal_preference',
    'user_uid' => 'user_uid',
  );
  $handler->display->display_options['style_options']['default'] = 'field_meal_preference';
  $handler->display->display_options['style_options']['info'] = array(
    'field_meal_preference' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_calc' => 0,
      'calc' => array(
        'COUNT' => 'COUNT',
      ),
    ),
    'user_uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_calc' => 1,
      'calc' => array(
        'COUNT' => 'COUNT',
      ),
    ),
  );
  $handler->display->display_options['style_options']['detailed_values'] = '0';
  $handler->display->display_options['style_options']['precision'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Registration: Registration to Commerce Product */
  $handler->display->display_options['relationships']['registration_related_commerce_product']['id'] = 'registration_related_commerce_product';
  $handler->display->display_options['relationships']['registration_related_commerce_product']['table'] = 'registration';
  $handler->display->display_options['relationships']['registration_related_commerce_product']['field'] = 'registration_related_commerce_product';
  $handler->display->display_options['relationships']['registration_related_commerce_product']['label'] = 'Registration product';
  $handler->display->display_options['relationships']['registration_related_commerce_product']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Registration: Meal Preference */
  $handler->display->display_options['fields']['field_meal_preference']['id'] = 'field_meal_preference';
  $handler->display->display_options['fields']['field_meal_preference']['table'] = 'field_data_field_meal_preference';
  $handler->display->display_options['fields']['field_meal_preference']['field'] = 'field_meal_preference';
  $handler->display->display_options['fields']['field_meal_preference']['label'] = 'Meal preference';
  $handler->display->display_options['fields']['field_meal_preference']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_meal_preference']['element_label_colon'] = FALSE;
  /* Field: Registration: User */
  $handler->display->display_options['fields']['user_uid']['id'] = 'user_uid';
  $handler->display->display_options['fields']['user_uid']['table'] = 'registration';
  $handler->display->display_options['fields']['user_uid']['field'] = 'user_uid';
  $handler->display->display_options['fields']['user_uid']['group_type'] = 'count';
  $handler->display->display_options['fields']['user_uid']['label'] = 'Count';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Registration: Registration type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'registration';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'paid_registration' => 'paid_registration',
  );
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku']['id'] = 'sku';
  $handler->display->display_options['filters']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku']['field'] = 'sku';
  $handler->display->display_options['filters']['sku']['relationship'] = 'registration_related_commerce_product';
  $handler->display->display_options['filters']['sku']['value'] = 'dco-2013';
  $handler->display->display_options['filters']['sku']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sku']['expose']['operator_id'] = 'sku_op';
  $handler->display->display_options['filters']['sku']['expose']['label'] = 'SKU';
  $handler->display->display_options['filters']['sku']['expose']['description'] = 'e.g.: dco-YYYY';
  $handler->display->display_options['filters']['sku']['expose']['operator'] = 'sku_op';
  $handler->display->display_options['filters']['sku']['expose']['identifier'] = 'sku';
  $handler->display->display_options['filters']['sku']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
    8 => 0,
    9 => 0,
  );
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
  $handler->display->display_options['style_plugin'] = 'views_calc';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_tshirt_size' => 'field_tshirt_size',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = 'field_tshirt_size';
  $handler->display->display_options['style_options']['info'] = array(
    'field_tshirt_size' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_calc' => 0,
      'calc' => array(),
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_calc' => 1,
      'calc' => array(
        'COUNT' => 'COUNT',
      ),
    ),
  );
  $handler->display->display_options['style_options']['detailed_values'] = '0';
  $handler->display->display_options['style_options']['precision'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Registration: User */
  $handler->display->display_options['relationships']['user_uid']['id'] = 'user_uid';
  $handler->display->display_options['relationships']['user_uid']['table'] = 'registration';
  $handler->display->display_options['relationships']['user_uid']['field'] = 'user_uid';
  $handler->display->display_options['relationships']['user_uid']['required'] = TRUE;
  /* Relationship: Registration: Registration to Commerce Product */
  $handler->display->display_options['relationships']['registration_related_commerce_product']['id'] = 'registration_related_commerce_product';
  $handler->display->display_options['relationships']['registration_related_commerce_product']['table'] = 'registration';
  $handler->display->display_options['relationships']['registration_related_commerce_product']['field'] = 'registration_related_commerce_product';
  $handler->display->display_options['relationships']['registration_related_commerce_product']['label'] = 'Registration product';
  $handler->display->display_options['relationships']['registration_related_commerce_product']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Registration: T-Shirt Size */
  $handler->display->display_options['fields']['field_tshirt_size']['id'] = 'field_tshirt_size';
  $handler->display->display_options['fields']['field_tshirt_size']['table'] = 'field_data_field_tshirt_size';
  $handler->display->display_options['fields']['field_tshirt_size']['field'] = 'field_tshirt_size';
  $handler->display->display_options['fields']['field_tshirt_size']['element_type'] = 'h2';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['name']['group_type'] = 'count';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Registration: Registration type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'registration';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'paid_registration' => 'paid_registration',
  );
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku']['id'] = 'sku';
  $handler->display->display_options['filters']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku']['field'] = 'sku';
  $handler->display->display_options['filters']['sku']['relationship'] = 'registration_related_commerce_product';
  $handler->display->display_options['filters']['sku']['value'] = 'dco-2013';
  $handler->display->display_options['filters']['sku']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sku']['expose']['operator_id'] = 'sku_op';
  $handler->display->display_options['filters']['sku']['expose']['label'] = 'SKU';
  $handler->display->display_options['filters']['sku']['expose']['description'] = 'e.g.: dco-YYYY';
  $handler->display->display_options['filters']['sku']['expose']['operator'] = 'sku_op';
  $handler->display->display_options['filters']['sku']['expose']['identifier'] = 'sku';
  $handler->display->display_options['filters']['sku']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
    8 => 0,
    9 => 0,
  );
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
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::system_block_ip_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::user_block_user_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::flag_user_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
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
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::mimemail_send_email_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['name']['label'] = 'User name';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user_uid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'author';
  $handler->display->display_options['fields']['name_1']['label'] = 'Purchased by';
  /* Field: Registration: Food Allergies */
  $handler->display->display_options['fields']['field_allergies']['id'] = 'field_allergies';
  $handler->display->display_options['fields']['field_allergies']['table'] = 'field_data_field_allergies';
  $handler->display->display_options['fields']['field_allergies']['field'] = 'field_allergies';
  $handler->display->display_options['fields']['field_allergies']['label'] = 'Allergies';
  /* Field: Registration: Special Request */
  $handler->display->display_options['fields']['field_special_request']['id'] = 'field_special_request';
  $handler->display->display_options['fields']['field_special_request']['table'] = 'field_data_field_special_request';
  $handler->display->display_options['fields']['field_special_request']['field'] = 'field_special_request';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'AND',
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
  /* Filter criterion: Registration: Registration type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'registration';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'paid_registration' => 'paid_registration',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku_1']['id'] = 'sku_1';
  $handler->display->display_options['filters']['sku_1']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku_1']['field'] = 'sku';
  $handler->display->display_options['filters']['sku_1']['relationship'] = 'registration_related_commerce_product';
  $handler->display->display_options['filters']['sku_1']['value'] = 'dco-2013';
  $handler->display->display_options['filters']['sku_1']['group'] = 2;
  $handler->display->display_options['filters']['sku_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sku_1']['expose']['operator_id'] = 'sku_1_op';
  $handler->display->display_options['filters']['sku_1']['expose']['label'] = 'SKU';
  $handler->display->display_options['filters']['sku_1']['expose']['description'] = 'e.g.: dco-YYYY';
  $handler->display->display_options['filters']['sku_1']['expose']['operator'] = 'sku_1_op';
  $handler->display->display_options['filters']['sku_1']['expose']['identifier'] = 'sku_1';
  $handler->display->display_options['filters']['sku_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['path'] = 'admin/registration/requests';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Requests';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Registration';
  $handler->display->display_options['tab_options']['description'] = 'Registration for 2012 and newer';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Total Registrations */
  $handler = $view->new_display('block', 'Total Registrations', 'block_1');
  $handler->display->display_options['display_description'] = 'A quick tally of registrations';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<h3><a href="http://drupalcampohio.org/registration" title="Register">Register</a>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['group_type'] = 'count';
  $handler->display->display_options['fields']['registration_id']['label'] = '';
  $handler->display->display_options['fields']['registration_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['registration_id']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[registration_id] registered and counting!';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'span';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'total-registrations';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Registration: Registration type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'registration';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'paid_registration' => 'paid_registration',
  );
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku']['id'] = 'sku';
  $handler->display->display_options['filters']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku']['field'] = 'sku';
  $handler->display->display_options['filters']['sku']['relationship'] = 'registration_related_commerce_product';
  $handler->display->display_options['filters']['sku']['value'] = 'dco-2013';
  $handler->display->display_options['filters']['sku']['expose']['operator_id'] = 'sku_op';
  $handler->display->display_options['filters']['sku']['expose']['label'] = 'SKU';
  $handler->display->display_options['filters']['sku']['expose']['description'] = 'e.g.: dco-YYYY';
  $handler->display->display_options['filters']['sku']['expose']['operator'] = 'sku_op';
  $handler->display->display_options['filters']['sku']['expose']['identifier'] = 'sku';
  $handler->display->display_options['filters']['sku']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
    8 => 0,
    9 => 0,
  );

  /* Display: Training */
  $handler = $view->new_display('page', 'Training', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Training & Lunch Registrations';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'name' => 'name',
    'mail' => 'mail',
    'registration_id' => 'registration_id',
    'edit_node' => 'edit_node',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'registration_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Registration: User */
  $handler->display->display_options['relationships']['user_uid']['id'] = 'user_uid';
  $handler->display->display_options['relationships']['user_uid']['table'] = 'registration';
  $handler->display->display_options['relationships']['user_uid']['field'] = 'user_uid';
  /* Relationship: Registration: Registration to Commerce Product */
  $handler->display->display_options['relationships']['registration_related_commerce_product']['id'] = 'registration_related_commerce_product';
  $handler->display->display_options['relationships']['registration_related_commerce_product']['table'] = 'registration';
  $handler->display->display_options['relationships']['registration_related_commerce_product']['field'] = 'registration_related_commerce_product';
  $handler->display->display_options['relationships']['registration_related_commerce_product']['label'] = 'Registration product';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['name']['label'] = 'User name';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user_uid';
  /* Field: Registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['label'] = 'Registration';
  $handler->display->display_options['fields']['registration_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['registration_id']['alter']['text'] = 'View registration';
  $handler->display->display_options['fields']['registration_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['registration_id']['alter']['path'] = 'registration/[registration_id]';
  $handler->display->display_options['fields']['registration_id']['separator'] = '';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Modify account';
  /* Field: Registration: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'registration';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created on';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Registration: Registration type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'registration';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'free_registration' => 'free_registration',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku']['id'] = 'sku';
  $handler->display->display_options['filters']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku']['field'] = 'sku';
  $handler->display->display_options['filters']['sku']['relationship'] = 'registration_related_commerce_product';
  $handler->display->display_options['filters']['sku']['value'] = 'dco-2013';
  $handler->display->display_options['filters']['sku']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sku']['expose']['operator_id'] = 'sku_op';
  $handler->display->display_options['filters']['sku']['expose']['label'] = 'SKU';
  $handler->display->display_options['filters']['sku']['expose']['description'] = 'e.g.: dco-YYYY';
  $handler->display->display_options['filters']['sku']['expose']['operator'] = 'sku_op';
  $handler->display->display_options['filters']['sku']['expose']['identifier'] = 'sku';
  $handler->display->display_options['filters']['sku']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['path'] = 'admin/registration/other';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Training';
  $handler->display->display_options['menu']['description'] = 'Training & Other Registration';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'attendees-%timestamp-full.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Registration: Author entity author_uid */
  $handler->display->display_options['relationships']['author']['id'] = 'author';
  $handler->display->display_options['relationships']['author']['table'] = 'registration';
  $handler->display->display_options['relationships']['author']['field'] = 'author';
  $handler->display->display_options['relationships']['author']['label'] = 'Buyer';
  $handler->display->display_options['relationships']['author']['required'] = TRUE;
  /* Relationship: Registration: User */
  $handler->display->display_options['relationships']['user_uid']['id'] = 'user_uid';
  $handler->display->display_options['relationships']['user_uid']['table'] = 'registration';
  $handler->display->display_options['relationships']['user_uid']['field'] = 'user_uid';
  /* Relationship: Registration: Registration to Node */
  $handler->display->display_options['relationships']['registration_related_node']['id'] = 'registration_related_node';
  $handler->display->display_options['relationships']['registration_related_node']['table'] = 'registration';
  $handler->display->display_options['relationships']['registration_related_node']['field'] = 'registration_related_node';
  /* Relationship: Registration: Commerce Order ID */
  $handler->display->display_options['relationships']['order_id']['id'] = 'order_id';
  $handler->display->display_options['relationships']['order_id']['table'] = 'registration';
  $handler->display->display_options['relationships']['order_id']['field'] = 'order_id';
  /* Relationship: Commerce Order: Referenced line item */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['relationship'] = 'order_id';
  /* Relationship: Commerce Line item: Referenced product */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Personal information: Last name */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'profile_value_profile_last';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['value_2']['label'] = 'Last name';
  $handler->display->display_options['fields']['value_2']['link_to_user'] = FALSE;
  /* Field: Profile: Personal information: First name */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_value_profile_first';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['value']['label'] = 'First name';
  $handler->display->display_options['fields']['value']['link_to_user'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user_uid';
  /* Field: Registration: T-Shirt Size */
  $handler->display->display_options['fields']['field_tshirt_size']['id'] = 'field_tshirt_size';
  $handler->display->display_options['fields']['field_tshirt_size']['table'] = 'field_data_field_tshirt_size';
  $handler->display->display_options['fields']['field_tshirt_size']['field'] = 'field_tshirt_size';
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['title']['label'] = 'Registration type';
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['name']['label'] = 'User name';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Profile: Personal information: Organization */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'profile_value_profile_org';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['value_3']['label'] = 'Organization';
  $handler->display->display_options['fields']['value_3']['link_to_user'] = FALSE;
  /* Field: Profile: Personal information: Job title */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_value_profile_job_title';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['value_1']['label'] = 'Job title';
  $handler->display->display_options['fields']['value_1']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Registration: Registration type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'registration';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'paid_registration' => 'paid_registration',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku']['id'] = 'sku';
  $handler->display->display_options['filters']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku']['field'] = 'sku';
  $handler->display->display_options['filters']['sku']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['filters']['sku']['value'] = 'dco-2013';
  $handler->display->display_options['filters']['sku']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sku']['expose']['operator_id'] = 'sku_op';
  $handler->display->display_options['filters']['sku']['expose']['label'] = 'SKU';
  $handler->display->display_options['filters']['sku']['expose']['description'] = 'e.g.: dco-YYYY';
  $handler->display->display_options['filters']['sku']['expose']['operator'] = 'sku_op';
  $handler->display->display_options['filters']['sku']['expose']['identifier'] = 'sku';
  $handler->display->display_options['filters']['sku']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['path'] = 'admin/registration/attendee-export';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page_5' => 0,
    'block_1' => 0,
    'page_4' => 0,
  );

  /* Display: Basic Overview */
  $handler = $view->new_display('page', 'Basic Overview', 'page_6');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user_uid';
  /* Field: Profile: Personal information: Last name */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_value_profile_last';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['value_1']['label'] = 'Last name';
  $handler->display->display_options['fields']['value_1']['empty'] = 'N/A';
  /* Field: Profile: Personal information: First name */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_value_profile_first';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'user_uid';
  $handler->display->display_options['fields']['value']['label'] = 'First name';
  $handler->display->display_options['fields']['value']['empty'] = 'N/A';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Profile: Personal information: Last name */
  $handler->display->display_options['sorts']['value']['id'] = 'value';
  $handler->display->display_options['sorts']['value']['table'] = 'profile_value_profile_last';
  $handler->display->display_options['sorts']['value']['field'] = 'value';
  $handler->display->display_options['sorts']['value']['relationship'] = 'user_uid';
  /* Sort criterion: User: E-mail */
  $handler->display->display_options['sorts']['mail']['id'] = 'mail';
  $handler->display->display_options['sorts']['mail']['table'] = 'users';
  $handler->display->display_options['sorts']['mail']['field'] = 'mail';
  $handler->display->display_options['sorts']['mail']['relationship'] = 'user_uid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Registration: Registration type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'registration';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'paid_registration' => 'paid_registration',
  );
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku']['id'] = 'sku';
  $handler->display->display_options['filters']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku']['field'] = 'sku';
  $handler->display->display_options['filters']['sku']['relationship'] = 'registration_related_commerce_product';
  $handler->display->display_options['filters']['sku']['value'] = 'dco-2013';
  $handler->display->display_options['filters']['sku']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sku']['expose']['operator_id'] = 'sku_op';
  $handler->display->display_options['filters']['sku']['expose']['label'] = 'SKU';
  $handler->display->display_options['filters']['sku']['expose']['description'] = 'e.g. dco-YYYY';
  $handler->display->display_options['filters']['sku']['expose']['operator'] = 'sku_op';
  $handler->display->display_options['filters']['sku']['expose']['identifier'] = 'sku';
  $handler->display->display_options['filters']['sku']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['path'] = 'admin/registration/basic';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Overview (Basic)';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Organizers';
  $handler->display->display_options['tab_options']['description'] = 'Registration for 2012 and newer';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';
  $export['registrations'] = $view;

  return $export;
}
