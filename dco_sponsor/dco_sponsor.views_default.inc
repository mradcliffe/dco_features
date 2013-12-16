<?php
/**
 * @file
 * dco_sponsor.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dco_sponsor_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Sponsors';
  $view->description = 'Sponsors';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Silver Sponsor';
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'sponsor_logo',
    'image_link' => 'content',
  );
  /* Field: Content: Sponsorship Level */
  $handler->display->display_options['fields']['field_sponsorship_level']['id'] = 'field_sponsorship_level';
  $handler->display->display_options['fields']['field_sponsorship_level']['table'] = 'field_data_field_sponsorship_level';
  $handler->display->display_options['fields']['field_sponsorship_level']['field'] = 'field_sponsorship_level';
  $handler->display->display_options['fields']['field_sponsorship_level']['label'] = '';
  $handler->display->display_options['fields']['field_sponsorship_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sponsorship_level']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Event (field_event) */
  $handler->display->display_options['filters']['field_event_nid']['id'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['table'] = 'field_data_field_event';
  $handler->display->display_options['filters']['field_event_nid']['field'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['value'] = array(
    226 => '226',
  );

  /* Display: Sponsor Page */
  $handler = $view->new_display('page', 'Sponsor Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sponsors';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'sponsors-page';
  $handler->display->display_options['display_description'] = 'Sponsors grouped by level';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_sponsorship_level',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h3>We are currently seeking sponsorship for DrupalCamp Ohio 2013!</h3>
Please refer to our <a href="/sponsors/benefits">Sponsor Benefits</a> page to become a sponsor today. If you have any questions please do not hesitate to <a href="/contact">contact us</a>.
';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['label'] = 'Individual Sponsors';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'attendees:block_2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'sponsor_logo',
    'image_link' => 'content',
  );
  /* Field: Content: Sponsorship Level */
  $handler->display->display_options['fields']['field_sponsorship_level']['id'] = 'field_sponsorship_level';
  $handler->display->display_options['fields']['field_sponsorship_level']['table'] = 'field_data_field_sponsorship_level';
  $handler->display->display_options['fields']['field_sponsorship_level']['field'] = 'field_sponsorship_level';
  $handler->display->display_options['fields']['field_sponsorship_level']['label'] = '';
  $handler->display->display_options['fields']['field_sponsorship_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sponsorship_level']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sponsorship Level (field_sponsorship_level) */
  $handler->display->display_options['sorts']['field_sponsorship_level_value']['id'] = 'field_sponsorship_level_value';
  $handler->display->display_options['sorts']['field_sponsorship_level_value']['table'] = 'field_data_field_sponsorship_level';
  $handler->display->display_options['sorts']['field_sponsorship_level_value']['field'] = 'field_sponsorship_level_value';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['path'] = 'sponsors';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sponsors';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Random */
  $handler = $view->new_display('block', 'Random', 'block_1');
  $handler->display->display_options['display_description'] = 'A random platinum sponsor';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all of our sponsors';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Event (field_event) */
  $handler->display->display_options['filters']['field_event_nid']['id'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['table'] = 'field_data_field_event';
  $handler->display->display_options['filters']['field_event_nid']['field'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['value'] = array(
    226 => '226',
  );
  /* Filter criterion: Content: Sponsorship Level (field_sponsorship_level) */
  $handler->display->display_options['filters']['field_sponsorship_level_value']['id'] = 'field_sponsorship_level_value';
  $handler->display->display_options['filters']['field_sponsorship_level_value']['table'] = 'field_data_field_sponsorship_level';
  $handler->display->display_options['filters']['field_sponsorship_level_value']['field'] = 'field_sponsorship_level_value';
  $handler->display->display_options['filters']['field_sponsorship_level_value']['value'] = array(
    0 => '0',
    1 => '1',
    2 => '2',
    4 => '4',
  );
  $handler->display->display_options['block_description'] = 'Random Sponsor';

  /* Display: Platinum */
  $handler = $view->new_display('block', 'Platinum', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Platinum Sponsor';
  $handler->display->display_options['display_description'] = 'Ordered Platinum Sponsors';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'sponsor_logo_platinum',
    'image_link' => 'content',
  );
  /* Field: Content: Sponsorship Level */
  $handler->display->display_options['fields']['field_sponsorship_level']['id'] = 'field_sponsorship_level';
  $handler->display->display_options['fields']['field_sponsorship_level']['table'] = 'field_data_field_sponsorship_level';
  $handler->display->display_options['fields']['field_sponsorship_level']['field'] = 'field_sponsorship_level';
  $handler->display->display_options['fields']['field_sponsorship_level']['label'] = '';
  $handler->display->display_options['fields']['field_sponsorship_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sponsorship_level']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Event (field_event) */
  $handler->display->display_options['filters']['field_event_nid']['id'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['table'] = 'field_data_field_event';
  $handler->display->display_options['filters']['field_event_nid']['field'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['value'] = array(
    226 => '226',
  );
  /* Filter criterion: Content: Sponsorship Level (field_sponsorship_level) */
  $handler->display->display_options['filters']['field_sponsorship_level_value']['id'] = 'field_sponsorship_level_value';
  $handler->display->display_options['filters']['field_sponsorship_level_value']['table'] = 'field_data_field_sponsorship_level';
  $handler->display->display_options['filters']['field_sponsorship_level_value']['field'] = 'field_sponsorship_level_value';
  $handler->display->display_options['filters']['field_sponsorship_level_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['block_description'] = 'Platinum Sponsors';

  /* Display: Gold */
  $handler = $view->new_display('block', 'Gold', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gold Sponsor';
  $handler->display->display_options['display_description'] = 'Ordered Gold Sponsors';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'sponsor_logo_gold',
    'image_link' => 'content',
  );
  /* Field: Content: Sponsorship Level */
  $handler->display->display_options['fields']['field_sponsorship_level']['id'] = 'field_sponsorship_level';
  $handler->display->display_options['fields']['field_sponsorship_level']['table'] = 'field_data_field_sponsorship_level';
  $handler->display->display_options['fields']['field_sponsorship_level']['field'] = 'field_sponsorship_level';
  $handler->display->display_options['fields']['field_sponsorship_level']['label'] = '';
  $handler->display->display_options['fields']['field_sponsorship_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sponsorship_level']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Event (field_event) */
  $handler->display->display_options['filters']['field_event_nid']['id'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['table'] = 'field_data_field_event';
  $handler->display->display_options['filters']['field_event_nid']['field'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['value'] = array(
    226 => '226',
  );
  /* Filter criterion: Content: Sponsorship Level (field_sponsorship_level) */
  $handler->display->display_options['filters']['field_sponsorship_level_value']['id'] = 'field_sponsorship_level_value';
  $handler->display->display_options['filters']['field_sponsorship_level_value']['table'] = 'field_data_field_sponsorship_level';
  $handler->display->display_options['filters']['field_sponsorship_level_value']['field'] = 'field_sponsorship_level_value';
  $handler->display->display_options['filters']['field_sponsorship_level_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'Gold Sponsors';

  /* Display: Silver */
  $handler = $view->new_display('block', 'Silver', 'block_4');
  $handler->display->display_options['display_description'] = 'Ordered Silver Sponsors';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Event (field_event) */
  $handler->display->display_options['filters']['field_event_nid']['id'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['table'] = 'field_data_field_event';
  $handler->display->display_options['filters']['field_event_nid']['field'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['value'] = array(
    226 => '226',
  );
  /* Filter criterion: Content: Sponsorship Level (field_sponsorship_level) */
  $handler->display->display_options['filters']['field_sponsorship_level_value']['id'] = 'field_sponsorship_level_value';
  $handler->display->display_options['filters']['field_sponsorship_level_value']['table'] = 'field_data_field_sponsorship_level';
  $handler->display->display_options['filters']['field_sponsorship_level_value']['field'] = 'field_sponsorship_level_value';
  $handler->display->display_options['filters']['field_sponsorship_level_value']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['block_description'] = 'Silver Sponsors';

  /* Display: Bronze */
  $handler = $view->new_display('block', 'Bronze', 'block_5');
  $handler->display->display_options['display_description'] = 'Ordered Bronze Sponsors';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Event (field_event) */
  $handler->display->display_options['filters']['field_event_nid']['id'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['table'] = 'field_data_field_event';
  $handler->display->display_options['filters']['field_event_nid']['field'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['value'] = array(
    226 => '226',
  );
  /* Filter criterion: Content: Sponsorship Level (field_sponsorship_level) */
  $handler->display->display_options['filters']['field_sponsorship_level_value']['id'] = 'field_sponsorship_level_value';
  $handler->display->display_options['filters']['field_sponsorship_level_value']['table'] = 'field_data_field_sponsorship_level';
  $handler->display->display_options['filters']['field_sponsorship_level_value']['field'] = 'field_sponsorship_level_value';
  $handler->display->display_options['filters']['field_sponsorship_level_value']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['block_description'] = 'Bronze Sponsors';

  /* Display: University */
  $handler = $view->new_display('block', 'University', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Host Sponsor';
  $handler->display->display_options['display_description'] = 'Ordered University Sponsors';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Event (field_event) */
  $handler->display->display_options['filters']['field_event_nid']['id'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['table'] = 'field_data_field_event';
  $handler->display->display_options['filters']['field_event_nid']['field'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['value'] = array(
    226 => '226',
  );
  /* Filter criterion: Content: Sponsorship Level (field_sponsorship_level) */
  $handler->display->display_options['filters']['field_sponsorship_level_value']['id'] = 'field_sponsorship_level_value';
  $handler->display->display_options['filters']['field_sponsorship_level_value']['table'] = 'field_data_field_sponsorship_level';
  $handler->display->display_options['filters']['field_sponsorship_level_value']['field'] = 'field_sponsorship_level_value';
  $handler->display->display_options['filters']['field_sponsorship_level_value']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['block_description'] = 'University Sponsors';
  $export['Sponsors'] = $view;

  $view = new view();
  $view->name = 'sponsorship_benefits';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sponsorship Benefits';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sponsor Benefits';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Referenced product */
  $handler->display->display_options['relationships']['field_product_reference_product_id']['id'] = 'field_product_reference_product_id';
  $handler->display->display_options['relationships']['field_product_reference_product_id']['table'] = 'field_data_field_product_reference';
  $handler->display->display_options['relationships']['field_product_reference_product_id']['field'] = 'field_product_reference_product_id';
  $handler->display->display_options['relationships']['field_product_reference_product_id']['required'] = TRUE;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['element_type'] = 'h3';
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['type'] = 'commerce_price_formatted_amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Commerce Product: Price (commerce_price:amount) */
  $handler->display->display_options['sorts']['commerce_price_amount']['id'] = 'commerce_price_amount';
  $handler->display->display_options['sorts']['commerce_price_amount']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['sorts']['commerce_price_amount']['field'] = 'commerce_price_amount';
  $handler->display->display_options['sorts']['commerce_price_amount']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['sorts']['commerce_price_amount']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku']['id'] = 'sku';
  $handler->display->display_options['filters']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku']['field'] = 'sku';
  $handler->display->display_options['filters']['sku']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['sku']['operator'] = 'ends';
  $handler->display->display_options['filters']['sku']['value'] = 'sponsorship';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'sponsors/benefits';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sponsor Benefits';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['sponsorship_benefits'] = $view;

  return $export;
}
