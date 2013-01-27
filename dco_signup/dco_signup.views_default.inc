<?php
/**
 * @file
 * dco_signup.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dco_signup_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'attendee_meals';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'users';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => 7,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_calc';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'value',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'mail' => 'mail',
    'value' => 'value',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
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
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_calc' => 0,
      'calc' => array(),
    ),
    'value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_calc' => 0,
      'calc' => array(),
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['detailed_values'] = '0';
  $handler->display->display_options['style_options']['precision'] = '0';
  /* Relationship: Signup: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'signup_log';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'User name';
  $handler->display->display_options['fields']['name']['alter']['text'] = 'x';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  /* Filter criterion: Signup: Signup ID */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'signup_log';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['sid']['group'] = '0';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = FALSE;

  /* Display: Omnivore */
  $handler = $view->new_display('block', 'Omnivore', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Omnivore';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'profile_values_profile_meal';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['operator'] = 'in';
  $handler->display->display_options['filters']['value']['value'] = array(
    'Omnivore' => 'Omnivore',
  );
  $handler->display->display_options['filters']['value']['group'] = '0';
  $handler->display->display_options['filters']['value']['expose']['operator'] = FALSE;
  /* Filter criterion: Signup: Signup ID */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'signup_log';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['sid']['group'] = '0';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = FALSE;

  /* Display: Vegetarian */
  $handler = $view->new_display('block', 'Vegetarian', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Vegetarian';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Signup: Signup ID */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'signup_log';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['sid']['group'] = '0';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'profile_values_profile_meal';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['operator'] = 'in';
  $handler->display->display_options['filters']['value']['value'] = array(
    'Vegetarian' => 'Vegetarian',
  );
  $handler->display->display_options['filters']['value']['group'] = '0';
  $handler->display->display_options['filters']['value']['expose']['operator'] = FALSE;

  /* Display: Vegan */
  $handler = $view->new_display('block', 'Vegan', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Vegan';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Signup: Signup ID */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'signup_log';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['sid']['group'] = '0';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'profile_values_profile_meal';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['operator'] = 'in';
  $handler->display->display_options['filters']['value']['value'] = array(
    'Vegan' => 'Vegan',
  );
  $handler->display->display_options['filters']['value']['group'] = '0';
  $handler->display->display_options['filters']['value']['expose']['operator'] = FALSE;

  /* Display: Allergies */
  $handler = $view->new_display('block', 'Allergies', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dietary Restrictions';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'value_2' => 'value_2',
    'value_1' => 'value_1',
    'name' => 'name',
    'value' => 'value',
  );
  $handler->display->display_options['style_options']['default'] = 'value_2';
  $handler->display->display_options['style_options']['info'] = array(
    'value_2' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'value_1' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'value' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'profile_values_profile_last';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['label'] = 'Last name';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_values_profile_first';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'First name';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'User name';
  $handler->display->display_options['fields']['name']['alter']['text'] = 'x';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_values_profile_food';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'Allergies';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Signup: Signup ID */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'signup_log';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['sid']['group'] = '0';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'profile_values_profile_food';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['operator'] = 'contains';
  $handler->display->display_options['filters']['value']['value'] = ' ';
  $handler->display->display_options['filters']['value']['group'] = '0';
  $handler->display->display_options['filters']['value']['expose']['operator'] = FALSE;

  /* Display: XX-Large */
  $handler = $view->new_display('block', 'XX-Large', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'XX-Large';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'profile_values_profile_t_shirt';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['operator'] = 'in';
  $handler->display->display_options['filters']['value']['value'] = array(
    'XXL' => 'XXL',
  );
  $handler->display->display_options['filters']['value']['group'] = '0';
  $handler->display->display_options['filters']['value']['expose']['operator'] = FALSE;

  /* Display: Unspecified */
  $handler = $view->new_display('block', 'Unspecified', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Unspecified';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Signup: Signup ID */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'signup_log';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['sid']['group'] = '0';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'profile_values_profile_meal';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['operator'] = 'not in';
  $handler->display->display_options['filters']['value']['value'] = array(
    'Omnivore' => 'Omnivore',
    'Vegetarian' => 'Vegetarian',
    'Vegan' => 'Vegan',
  );
  $handler->display->display_options['filters']['value']['group'] = '0';
  $handler->display->display_options['filters']['value']['expose']['operator'] = FALSE;

  /* Display: Email Unspecified */
  $handler = $view->new_display('page', 'Email Unspecified', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Email Unspecified Meal Orders';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'value_2' => 'value_2',
    'value_1' => 'value_1',
    'name' => 'name',
    'mail' => 'mail',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'value_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_1' => array(
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'User name';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'x';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Signup: Signup ID */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'signup_log';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['sid']['group'] = '0';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
    1 => '1',
  );
  $handler->display->display_options['filters']['uid']['group'] = '0';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'reports/meal-orders/email';

  /* Display: T-Shirts */
  $handler = $view->new_display('page', 'T-Shirts', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'T-Shirt Orders';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'value',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['group_type'] = 'count';
  $handler->display->display_options['fields']['name']['label'] = 'Total';
  $handler->display->display_options['fields']['name']['alter']['text'] = 'x';
  $handler->display->display_options['fields']['name']['element_label_type'] = 'strong';
  /* Field: Profile: Personal information: T-Shirt Size */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_value_profile_t_shirt';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['value']['empty'] = 'Unspecified';
  $handler->display->display_options['path'] = 'reports/shirt-orders';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Shirt Orders';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Meals */
  $handler = $view->new_display('page', 'Meals', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Meal Orders';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'value_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['group_type'] = 'count';
  $handler->display->display_options['fields']['name']['label'] = 'Total';
  $handler->display->display_options['fields']['name']['alter']['text'] = 'x';
  $handler->display->display_options['fields']['name']['element_label_type'] = 'strong';
  /* Field: Profile: Personal information: Meal Preference */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_value_profile_meal';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = '';
  $handler->display->display_options['fields']['value_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_1']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['value_1']['empty'] = 'Unspecified';
  $handler->display->display_options['path'] = 'reports/meal-orders';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Meal Orders';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['attendee_meals'] = $view;

  $view = new view();
  $view->name = 'attendee_report';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'users';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Email Unregistered';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => 7,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_calc';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'value_2' => 'value_2',
    'value_1' => 'value_1',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = 'value_2';
  $handler->display->display_options['style_options']['info'] = array(
    'value_2' => array(
      'sortable' => 1,
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'value_1' => array(
      'sortable' => 0,
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'name' => array(
      'sortable' => 0,
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 1,
      'calc' => array(
        'COUNT' => 'COUNT',
      ),
    ),
  );
  $handler->display->display_options['style_options']['detailed_values'] = '1';
  /* Relationship: Signup: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'signup_log';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  /* Field: Signup: Signup ID */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'signup_log';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  /* Filter criterion: Signup: Signup ID */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'signup_log';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['sid']['group'] = '0';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
    1 => '1',
  );
  $handler->display->display_options['filters']['uid']['group'] = '0';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = FALSE;

  /* Display: Total Attending */
  $handler = $view->new_display('block', 'Total Attending', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Registered';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Signup: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'signup_log';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['group_type'] = 'count';
  $handler->display->display_options['fields']['name']['label'] = 'Total';
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'h2';

  /* Display: Medium */
  $handler = $view->new_display('block', 'Medium', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Medium';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Large */
  $handler = $view->new_display('block', 'Large', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Large';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'profile_values_profile_t_shirt';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['operator'] = 'in';
  $handler->display->display_options['filters']['value']['value'] = array(
    'Large' => 'Large',
  );
  $handler->display->display_options['filters']['value']['group'] = '0';
  $handler->display->display_options['filters']['value']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_4');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_calc';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'value_1' => 'value_1',
    'value_2' => 'value_2',
  );
  $handler->display->display_options['style_options']['default'] = 'value_2';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 1,
      'calc' => array(
        'COUNT' => 'COUNT',
      ),
    ),
    'value_1' => array(
      'sortable' => 1,
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'value_2' => array(
      'sortable' => 1,
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
  );
  $handler->display->display_options['style_options']['detailed_values'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_values_profile_first';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'First name';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'profile_values_profile_last';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['label'] = 'Last name';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'profile_values_profile_t_shirt';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['operator'] = 'in';
  $handler->display->display_options['filters']['value']['value'] = array(
    'Medium' => 'Medium',
  );
  $handler->display->display_options['filters']['value']['group'] = '0';
  $handler->display->display_options['filters']['value']['expose']['operator'] = FALSE;

  /* Display: Not Attending */
  $handler = $view->new_display('block', 'Not Attending', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Unregistered';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_calc';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'value_2' => 'value_2',
    'value_1' => 'value_1',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = 'value_2';
  $handler->display->display_options['style_options']['info'] = array(
    'value_2' => array(
      'sortable' => 1,
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'value_1' => array(
      'sortable' => 0,
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'name' => array(
      'sortable' => 0,
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 1,
      'calc' => array(
        'COUNT' => 'COUNT',
      ),
    ),
  );
  $handler->display->display_options['style_options']['detailed_values'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Signup: Signup ID */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'signup_log';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['operator'] = 'empty';
  $handler->display->display_options['filters']['sid']['group'] = '0';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
    1 => '1',
  );
  $handler->display->display_options['filters']['uid']['group'] = '0';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = FALSE;

  /* Display: Email Unregistered */
  $handler = $view->new_display('page', 'Email Unregistered', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Email Unregistered Users';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'value_2' => 'value_2',
    'value_1' => 'value_1',
    'name' => 'name',
    'mail' => 'mail',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'value_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_1' => array(
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Signup: Signup ID */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'signup_log';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['operator'] = 'empty';
  $handler->display->display_options['filters']['sid']['group'] = '0';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
    1 => '1',
  );
  $handler->display->display_options['filters']['uid']['group'] = '0';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'reports/attendee-registration/email-unregistered';

  /* Display: Email All Users */
  $handler = $view->new_display('page', 'Email All Users', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '2011 Signup Users';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'value_2' => 'value_2',
    'value_1' => 'value_1',
    'name' => 'name',
    'mail' => 'mail',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'value_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_1' => array(
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
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
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::mimemail_send_email_action' => array(
      'selected' => 0,
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
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Signup: Signup ID */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'signup_log';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['sid']['group'] = '0';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
    1 => '1',
  );
  $handler->display->display_options['filters']['uid']['group'] = '0';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'admin/registration/2011-users';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = '2011 Users';
  $handler->display->display_options['menu']['weight'] = '25';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Late Registrants */
  $handler = $view->new_display('block', 'Late Registrants', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Late Registration';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_calc';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'value_2' => 'value_2',
    'value_1' => 'value_1',
    'name' => 'name',
    'signup_time' => 'signup_time',
  );
  $handler->display->display_options['style_options']['default'] = 'signup_time';
  $handler->display->display_options['style_options']['info'] = array(
    'value_2' => array(
      'sortable' => 0,
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'value_1' => array(
      'sortable' => 0,
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
    'name' => array(
      'sortable' => 0,
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 1,
      'calc' => array(
        'COUNT' => 'COUNT',
      ),
    ),
    'signup_time' => array(
      'sortable' => 1,
      'separator' => '',
      'justification' => 'views_calc_justify_none',
      'has_calc' => 0,
      'calc' => array(),
    ),
  );
  $handler->display->display_options['style_options']['order'] = 'desc';
  $handler->display->display_options['style_options']['detailed_values'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'profile_values_profile_last';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['label'] = 'Last name';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_values_profile_first';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'First name';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'profile_values_profile_t_shirt';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['relationship'] = 'uid';
  $handler->display->display_options['fields']['value_3']['label'] = 'Shirt';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_values_profile_meal';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'uid';
  $handler->display->display_options['fields']['value']['label'] = 'Meal';
  /* Field: Signup: User: Signup Time */
  $handler->display->display_options['fields']['signup_time']['id'] = 'signup_time';
  $handler->display->display_options['fields']['signup_time']['table'] = 'signup_log';
  $handler->display->display_options['fields']['signup_time']['field'] = 'signup_time';
  $handler->display->display_options['fields']['signup_time']['date_format'] = 'custom';
  $handler->display->display_options['fields']['signup_time']['custom_date_format'] = 'm-d-y g:i a';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Signup: User: Signup Time */
  $handler->display->display_options['sorts']['signup_time']['id'] = 'signup_time';
  $handler->display->display_options['sorts']['signup_time']['table'] = 'signup_log';
  $handler->display->display_options['sorts']['signup_time']['field'] = 'signup_time';
  $handler->display->display_options['sorts']['signup_time']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['signup_time']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Signup: Signup ID */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'signup_log';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['sid']['group'] = '0';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
    1 => '1',
  );
  $handler->display->display_options['filters']['uid']['group'] = '0';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = FALSE;
  /* Filter criterion: Signup: User: Signup Time */
  $handler->display->display_options['filters']['signup_time']['id'] = 'signup_time';
  $handler->display->display_options['filters']['signup_time']['table'] = 'signup_log';
  $handler->display->display_options['filters']['signup_time']['field'] = 'signup_time';
  $handler->display->display_options['filters']['signup_time']['operator'] = '>';
  $handler->display->display_options['filters']['signup_time']['value']['value'] = '2011-11-16';
  $handler->display->display_options['filters']['signup_time']['group'] = '0';
  $handler->display->display_options['filters']['signup_time']['expose']['operator'] = FALSE;

  /* Display: Registrants */
  $handler = $view->new_display('block', 'Registrants', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Registrants';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'value_2' => 'value_2',
    'value_1' => 'value_1',
    'mail' => 'mail',
    'name' => 'name',
    'value_5' => 'value_5',
    'value_3' => 'value_3',
  );
  $handler->display->display_options['style_options']['default'] = 'value_2';
  $handler->display->display_options['style_options']['info'] = array(
    'value_2' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'value_1' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'mail' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'value_5' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'value_3' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'profile_values_profile_last';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['label'] = 'Last name';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_values_profile_first';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'First name';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['value_5']['id'] = 'value_5';
  $handler->display->display_options['fields']['value_5']['table'] = 'profile_values_profile_t_shirt';
  $handler->display->display_options['fields']['value_5']['field'] = 'value';
  $handler->display->display_options['fields']['value_5']['relationship'] = 'uid';
  $handler->display->display_options['fields']['value_5']['label'] = 'Shirt';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'profile_values_profile_meal';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['relationship'] = 'uid';
  $handler->display->display_options['fields']['value_3']['label'] = 'Meal';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Signup: Signup ID */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'signup_log';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['sid']['group'] = '0';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
    1 => '1',
  );
  $handler->display->display_options['filters']['uid']['group'] = '0';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = FALSE;
  /* Filter criterion: Signup: User: Signup Time */
  $handler->display->display_options['filters']['signup_time']['id'] = 'signup_time';
  $handler->display->display_options['filters']['signup_time']['table'] = 'signup_log';
  $handler->display->display_options['filters']['signup_time']['field'] = 'signup_time';
  $handler->display->display_options['filters']['signup_time']['operator'] = '<=';
  $handler->display->display_options['filters']['signup_time']['value']['value'] = '2011-11-16';
  $handler->display->display_options['filters']['signup_time']['group'] = '0';
  $handler->display->display_options['filters']['signup_time']['expose']['operator'] = FALSE;
  $export['attendee_report'] = $view;

  $view = new view();
  $view->name = 'attendees';
  $view->description = 'View of users that have signed up and are attendees';
  $view->tag = '';
  $view->base_table = 'users';
  $view->human_name = 'attendees';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = '2011 Attendees';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'No one has signed up for this event. Attendees will appear as they sign up.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Relationship: Signup: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'signup_log';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Profile: Personal information: First name */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'profile_value_profile_first';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['label'] = 'First name';
  /* Field: Profile: Personal information: Last name */
  $handler->display->display_options['fields']['value_5']['id'] = 'value_5';
  $handler->display->display_options['fields']['value_5']['table'] = 'profile_value_profile_last';
  $handler->display->display_options['fields']['value_5']['field'] = 'value';
  $handler->display->display_options['fields']['value_5']['label'] = 'Name';
  $handler->display->display_options['fields']['value_5']['alter']['text'] = '[value_4] [value_5]';
  $handler->display->display_options['fields']['value_5']['alter']['path'] = 'users/[name]';
  /* Filter criterion: Profile: Personal information: First name */
  $handler->display->display_options['filters']['value_4']['id'] = 'value_4';
  $handler->display->display_options['filters']['value_4']['table'] = 'profile_value_profile_first';
  $handler->display->display_options['filters']['value_4']['field'] = 'value';
  $handler->display->display_options['filters']['value_4']['group'] = '0';
  $handler->display->display_options['filters']['value_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value_4']['expose']['operator_id'] = 'value_4_op';
  $handler->display->display_options['filters']['value_4']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['value_4']['expose']['operator'] = 'value_4_op';
  $handler->display->display_options['filters']['value_4']['expose']['identifier'] = 'value_4';
  /* Filter criterion: Profile: Personal information: Last name */
  $handler->display->display_options['filters']['value_5']['id'] = 'value_5';
  $handler->display->display_options['filters']['value_5']['table'] = 'profile_value_profile_last';
  $handler->display->display_options['filters']['value_5']['field'] = 'value';
  $handler->display->display_options['filters']['value_5']['group'] = '0';
  $handler->display->display_options['filters']['value_5']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value_5']['expose']['operator_id'] = 'value_5_op';
  $handler->display->display_options['filters']['value_5']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['value_5']['expose']['operator'] = 'value_5_op';
  $handler->display->display_options['filters']['value_5']['expose']['identifier'] = 'value_5';
  /* Filter criterion: Profile: Personal information: Job title */
  $handler->display->display_options['filters']['value_1']['id'] = 'value_1';
  $handler->display->display_options['filters']['value_1']['table'] = 'profile_value_profile_job_title';
  $handler->display->display_options['filters']['value_1']['field'] = 'value';
  $handler->display->display_options['filters']['value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['value_1']['group'] = '0';
  $handler->display->display_options['filters']['value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value_1']['expose']['operator_id'] = 'value_1_op';
  $handler->display->display_options['filters']['value_1']['expose']['label'] = 'Job title';
  $handler->display->display_options['filters']['value_1']['expose']['operator'] = 'value_1_op';
  $handler->display->display_options['filters']['value_1']['expose']['identifier'] = 'job_title';
  /* Filter criterion: Profile: Personal information: Organization */
  $handler->display->display_options['filters']['value_3']['id'] = 'value_3';
  $handler->display->display_options['filters']['value_3']['table'] = 'profile_value_profile_org';
  $handler->display->display_options['filters']['value_3']['field'] = 'value';
  $handler->display->display_options['filters']['value_3']['group'] = '0';
  $handler->display->display_options['filters']['value_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value_3']['expose']['operator_id'] = 'value_3_op';
  $handler->display->display_options['filters']['value_3']['expose']['label'] = 'Organization';
  $handler->display->display_options['filters']['value_3']['expose']['operator'] = 'value_3_op';
  $handler->display->display_options['filters']['value_3']['expose']['identifier'] = 'organization';
  /* Filter criterion: Profile: Personal information: Interests */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'profile_value_profile_interests';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['group'] = '0';
  $handler->display->display_options['filters']['value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value']['expose']['operator_id'] = 'value_op';
  $handler->display->display_options['filters']['value']['expose']['label'] = 'Interests';
  $handler->display->display_options['filters']['value']['expose']['operator'] = 'value_op';
  $handler->display->display_options['filters']['value']['expose']['identifier'] = 'interests';
  /* Filter criterion: Signup: Signup ID */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'signup_log';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['sid']['group'] = '0';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = FALSE;

  /* Display: Attendees */
  $handler = $view->new_display('page', 'Attendees', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '2011 Attendees';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'DrupalCamp Ohio 2011 was a complete success thanks to all <strong>170 attendees who came</strong>!

Thank you all for making the first DrupalCamp in Ohio a success!';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'text';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'No matching users have signed up for the upcoming event.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Profile: Personal information: First name */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_value_profile_first';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['empty'] = '[name]';
  /* Field: Profile: Personal information: Last name */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_value_profile_last';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = '';
  $handler->display->display_options['fields']['value_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_1']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['text'] = '<div>[picture]</div>
<div>[value] [value_1]</div>';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'user_med';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Personal information: First name */
  $handler->display->display_options['filters']['value_4']['id'] = 'value_4';
  $handler->display->display_options['filters']['value_4']['table'] = 'profile_value_profile_first';
  $handler->display->display_options['filters']['value_4']['field'] = 'value';
  $handler->display->display_options['filters']['value_4']['group'] = '0';
  $handler->display->display_options['filters']['value_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value_4']['expose']['operator_id'] = 'value_4_op';
  $handler->display->display_options['filters']['value_4']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['value_4']['expose']['operator'] = 'value_4_op';
  $handler->display->display_options['filters']['value_4']['expose']['identifier'] = 'value_4';
  /* Filter criterion: Profile: Personal information: Last name */
  $handler->display->display_options['filters']['value_5']['id'] = 'value_5';
  $handler->display->display_options['filters']['value_5']['table'] = 'profile_value_profile_last';
  $handler->display->display_options['filters']['value_5']['field'] = 'value';
  $handler->display->display_options['filters']['value_5']['group'] = '0';
  $handler->display->display_options['filters']['value_5']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value_5']['expose']['operator_id'] = 'value_5_op';
  $handler->display->display_options['filters']['value_5']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['value_5']['expose']['operator'] = 'value_5_op';
  $handler->display->display_options['filters']['value_5']['expose']['identifier'] = 'value_5';
  /* Filter criterion: Profile: Personal information: Job title */
  $handler->display->display_options['filters']['value_1']['id'] = 'value_1';
  $handler->display->display_options['filters']['value_1']['table'] = 'profile_value_profile_job_title';
  $handler->display->display_options['filters']['value_1']['field'] = 'value';
  $handler->display->display_options['filters']['value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['value_1']['group'] = '0';
  $handler->display->display_options['filters']['value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value_1']['expose']['operator_id'] = 'value_1_op';
  $handler->display->display_options['filters']['value_1']['expose']['label'] = 'Job title';
  $handler->display->display_options['filters']['value_1']['expose']['operator'] = 'value_1_op';
  $handler->display->display_options['filters']['value_1']['expose']['identifier'] = 'job_title';
  /* Filter criterion: Profile: Personal information: Organization */
  $handler->display->display_options['filters']['value_3']['id'] = 'value_3';
  $handler->display->display_options['filters']['value_3']['table'] = 'profile_value_profile_org';
  $handler->display->display_options['filters']['value_3']['field'] = 'value';
  $handler->display->display_options['filters']['value_3']['group'] = '0';
  $handler->display->display_options['filters']['value_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value_3']['expose']['operator_id'] = 'value_3_op';
  $handler->display->display_options['filters']['value_3']['expose']['label'] = 'Organization';
  $handler->display->display_options['filters']['value_3']['expose']['operator'] = 'value_3_op';
  $handler->display->display_options['filters']['value_3']['expose']['identifier'] = 'organization';
  /* Filter criterion: Profile: Personal information: Interests */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'profile_value_profile_interests';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['group'] = '0';
  $handler->display->display_options['filters']['value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value']['expose']['operator_id'] = 'value_op';
  $handler->display->display_options['filters']['value']['expose']['label'] = 'Interests';
  $handler->display->display_options['filters']['value']['expose']['operator'] = 'value_op';
  $handler->display->display_options['filters']['value']['expose']['identifier'] = 'interests';
  /* Filter criterion: Signup: Signup ID */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'signup_log';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['sid']['group'] = '0';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'archive/21/attendees';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '2011 Attendees';
  $handler->display->display_options['menu']['description'] = 'Connect with attendees';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '2011 Attendees';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'text';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'There are no users signed up for the upcoming event who have added a profile picture and surname.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['text'] = '<div class=\'polaroid-frame\'><div class=\'polaroid-shadow\'>[picture]</div></div>';
  $handler->display->display_options['fields']['picture']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'user_thumb';
  /* Field: Profile: Personal information: First name */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_value_profile_first';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  /* Field: Profile: Personal information: Last name */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_value_profile_last';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = '';
  $handler->display->display_options['fields']['value_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['value_1']['alter']['text'] = '[value] [value_1]';
  /* Field: Profile: Personal information: Organization */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'profile_value_profile_org';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['label'] = '';
  $handler->display->display_options['fields']['value_2']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Personal information: Last name */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'profile_value_profile_last';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['value']['group'] = '0';
  $handler->display->display_options['filters']['value']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Picture */
  $handler->display->display_options['filters']['picture']['id'] = 'picture';
  $handler->display->display_options['filters']['picture']['table'] = 'users';
  $handler->display->display_options['filters']['picture']['field'] = 'picture';
  $handler->display->display_options['filters']['picture']['value'] = '1';
  $handler->display->display_options['filters']['picture']['group'] = '0';
  $handler->display->display_options['filters']['picture']['expose']['operator'] = FALSE;
  /* Filter criterion: Signup: Signup ID */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'signup_log';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['sid']['group'] = '0';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = FALSE;
  $handler->display->display_options['block_description'] = 'Attendee block';

  /* Display: Volunteer Page */
  $handler = $view->new_display('page', 'Volunteer Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'DrupalCamp Ohio Staff';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'picture' => 'picture',
    'value_4' => 'value_4',
    'value_5' => 'value_5',
    'value_1' => 'value_1',
    'value_3' => 'value_3',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_5' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'area';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['content'] = 'If you would like to pitch in, <a href="/contact">let us know</a>.';
  $handler->display->display_options['header']['text']['format'] = '2';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'text';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'There are no users with role "camp organizer" signed up for the upcoming event.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Signup: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'signup_log';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['text'] = '<div class=\'polaroid-frame\'><div class=\'polaroid-shadow\'>[picture]</div></div>';
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'user_med';
  /* Field: Profile: Personal information: First name */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'profile_value_profile_first';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['label'] = 'First name';
  $handler->display->display_options['fields']['value_4']['exclude'] = TRUE;
  /* Field: Profile: Personal information: Last name */
  $handler->display->display_options['fields']['value_5']['id'] = 'value_5';
  $handler->display->display_options['fields']['value_5']['table'] = 'profile_value_profile_last';
  $handler->display->display_options['fields']['value_5']['field'] = 'value';
  $handler->display->display_options['fields']['value_5']['label'] = 'Name';
  $handler->display->display_options['fields']['value_5']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['value_5']['alter']['text'] = '[value_4] [value_5]';
  $handler->display->display_options['fields']['value_5']['alter']['path'] = 'users/[name]';
  $handler->display->display_options['fields']['value_5']['alter']['strip_tags'] = TRUE;
  /* Field: Profile: Personal information: Job title */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_value_profile_job_title';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'Job title';
  /* Field: Profile: Personal information: Organization */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'profile_value_profile_org';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['label'] = 'Organization';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Personal information: First name */
  $handler->display->display_options['filters']['value_4']['id'] = 'value_4';
  $handler->display->display_options['filters']['value_4']['table'] = 'profile_value_profile_first';
  $handler->display->display_options['filters']['value_4']['field'] = 'value';
  $handler->display->display_options['filters']['value_4']['operator'] = 'contains';
  $handler->display->display_options['filters']['value_4']['group'] = '0';
  $handler->display->display_options['filters']['value_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value_4']['expose']['operator_id'] = 'value_4_op';
  $handler->display->display_options['filters']['value_4']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['value_4']['expose']['operator'] = 'value_4_op';
  $handler->display->display_options['filters']['value_4']['expose']['identifier'] = 'value_4';
  /* Filter criterion: Profile: Personal information: Last name */
  $handler->display->display_options['filters']['value_5']['id'] = 'value_5';
  $handler->display->display_options['filters']['value_5']['table'] = 'profile_value_profile_last';
  $handler->display->display_options['filters']['value_5']['field'] = 'value';
  $handler->display->display_options['filters']['value_5']['operator'] = 'contains';
  $handler->display->display_options['filters']['value_5']['group'] = '0';
  $handler->display->display_options['filters']['value_5']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value_5']['expose']['operator_id'] = 'value_5_op';
  $handler->display->display_options['filters']['value_5']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['value_5']['expose']['operator'] = 'value_5_op';
  $handler->display->display_options['filters']['value_5']['expose']['identifier'] = 'value_5';
  /* Filter criterion: Profile: Personal information: Job title */
  $handler->display->display_options['filters']['value_1']['id'] = 'value_1';
  $handler->display->display_options['filters']['value_1']['table'] = 'profile_value_profile_job_title';
  $handler->display->display_options['filters']['value_1']['field'] = 'value';
  $handler->display->display_options['filters']['value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['value_1']['group'] = '0';
  $handler->display->display_options['filters']['value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value_1']['expose']['operator_id'] = 'value_1_op';
  $handler->display->display_options['filters']['value_1']['expose']['label'] = 'Job title';
  $handler->display->display_options['filters']['value_1']['expose']['operator'] = 'value_1_op';
  $handler->display->display_options['filters']['value_1']['expose']['identifier'] = 'job_title';
  /* Filter criterion: Profile: Personal information: Organization */
  $handler->display->display_options['filters']['value_3']['id'] = 'value_3';
  $handler->display->display_options['filters']['value_3']['table'] = 'profile_value_profile_org';
  $handler->display->display_options['filters']['value_3']['field'] = 'value';
  $handler->display->display_options['filters']['value_3']['group'] = '0';
  $handler->display->display_options['filters']['value_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value_3']['expose']['operator_id'] = 'value_3_op';
  $handler->display->display_options['filters']['value_3']['expose']['label'] = 'Organization';
  $handler->display->display_options['filters']['value_3']['expose']['operator'] = 'value_3_op';
  $handler->display->display_options['filters']['value_3']['expose']['identifier'] = 'organization';
  /* Filter criterion: Profile: Personal information: Interests */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'profile_value_profile_interests';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['group'] = '0';
  $handler->display->display_options['filters']['value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value']['expose']['operator_id'] = 'value_op';
  $handler->display->display_options['filters']['value']['expose']['label'] = 'Interests';
  $handler->display->display_options['filters']['value']['expose']['operator'] = 'value_op';
  $handler->display->display_options['filters']['value']['expose']['identifier'] = 'interests';
  /* Filter criterion: Signup: Signup ID */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'signup_log';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['sid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['sid']['group'] = '0';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['rid']['group'] = '0';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'about/staff';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Staff';
  $handler->display->display_options['menu']['description'] = 'Connect with volunteers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'primary-links';

  /* Display: Individual Sponsors */
  $handler = $view->new_display('block', 'Individual Sponsors', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Individual Sponsors';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Individual';
  $handler->display->display_options['header']['area']['content'] = '<h3>Individual</h3>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'text';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Registration */
  $handler->display->display_options['relationships']['registration']['id'] = 'registration';
  $handler->display->display_options['relationships']['registration']['table'] = 'users';
  $handler->display->display_options['relationships']['registration']['field'] = 'registration';
  $handler->display->display_options['relationships']['registration']['required'] = TRUE;
  /* Relationship: Registration: Commerce Order ID */
  $handler->display->display_options['relationships']['order_id']['id'] = 'order_id';
  $handler->display->display_options['relationships']['order_id']['table'] = 'registration';
  $handler->display->display_options['relationships']['order_id']['field'] = 'order_id';
  $handler->display->display_options['relationships']['order_id']['relationship'] = 'registration';
  $handler->display->display_options['relationships']['order_id']['required'] = TRUE;
  /* Relationship: Commerce Order: Referenced line item */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['relationship'] = 'order_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['required'] = TRUE;
  /* Relationship: Commerce Line item: Referenced product */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Personal information: First name */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'profile_value_profile_first';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['label'] = 'First name';
  $handler->display->display_options['fields']['value_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_4']['link_to_user'] = FALSE;
  /* Field: Profile: Personal information: Last name */
  $handler->display->display_options['fields']['value_5']['id'] = 'value_5';
  $handler->display->display_options['fields']['value_5']['table'] = 'profile_value_profile_last';
  $handler->display->display_options['fields']['value_5']['field'] = 'value';
  $handler->display->display_options['fields']['value_5']['label'] = 'Name';
  $handler->display->display_options['fields']['value_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_5']['alter']['text'] = '[value_4] [value_5]';
  $handler->display->display_options['fields']['value_5']['alter']['path'] = 'users/[name]';
  $handler->display->display_options['fields']['value_5']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[value_4] [value_5]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'users/[name]';
  $handler->display->display_options['fields']['name']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Product: Product ID */
  $handler->display->display_options['filters']['product_id']['id'] = 'product_id';
  $handler->display->display_options['filters']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['product_id']['field'] = 'product_id';
  $handler->display->display_options['filters']['product_id']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['filters']['product_id']['value']['value'] = '5';
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'order_id';
  $handler->display->display_options['filters']['status']['value'] = array(
    'completed' => 'completed',
    'pending' => 'pending',
    'processing' => 'processing',
  );
  $export['attendees'] = $view;

  $view = new view();
  $view->name = 'special_requests';
  $view->description = 'Special Requests';
  $view->tag = '';
  $view->base_table = 'users';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => 7,
    3 => 3,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'value' => 'value',
    'mail' => 'mail',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'value' => array(
      'separator' => '',
    ),
    'mail' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  );
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Field: Profile: Personal information: Special Requests */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_value_profile_special_requests';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'Special Requests';
  /* Filter criterion: Signup: Signup ID */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'signup_log';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['operator'] = '>';
  $handler->display->display_options['filters']['sid']['value']['value'] = '0';
  $handler->display->display_options['filters']['sid']['group'] = '0';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = FALSE;
  /* Filter criterion: Profile: Personal information: Special Requests */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'profile_value_profile_special_requests';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['operator'] = '!=';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'special-requests';
  $handler->display->display_options['menu']['title'] = 'Special Requests';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'primary-links';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Special Requests';
  $export['special_requests'] = $view;

  return $export;
}
