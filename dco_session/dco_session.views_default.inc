<?php
/**
 * @file
 * dco_session.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dco_session_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'cod_schedule';
  $view->description = 'Session Schedule';
  $view->tag = 'cod session';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Session Schedule';
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'matrix';
  $handler->display->display_options['style_options']['xconfig'] = array(
    'field' => 'title_1',
    'sort' => 'asc',
  );
  $handler->display->display_options['style_options']['yconfig'] = array(
    'field' => 'title_2',
    'sort' => 'asc',
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'The schedule is empty. Please create one or more rooms and time slots, and assign a session or schedule item to them. For help with scheduling, please see the <a href="http://drupal.org/documentation/build/cod/">COD Documentation</a>.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Relationship: Content: Time slot (field_session_slot) */
  $handler->display->display_options['relationships']['field_session_slot_nid']['id'] = 'field_session_slot_nid';
  $handler->display->display_options['relationships']['field_session_slot_nid']['table'] = 'field_data_field_session_slot';
  $handler->display->display_options['relationships']['field_session_slot_nid']['field'] = 'field_session_slot_nid';
  $handler->display->display_options['relationships']['field_session_slot_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_session_slot_nid']['delta'] = '-1';
  /* Relationship: Content: Room (field_session_room) */
  $handler->display->display_options['relationships']['field_session_room_nid']['id'] = 'field_session_room_nid';
  $handler->display->display_options['relationships']['field_session_room_nid']['table'] = 'field_data_field_session_room';
  $handler->display->display_options['relationships']['field_session_room_nid']['field'] = 'field_session_room_nid';
  $handler->display->display_options['relationships']['field_session_room_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_session_room_nid']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[title]</strong>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_session_room_nid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_session_slot_nid';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_2']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
    'schedule_item' => 'schedule_item',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Schedule */
  $handler = $view->new_display('page', 'Schedule', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schedule_item' => 'schedule_item',
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Event (field_event) */
  $handler->display->display_options['filters']['field_event_nid']['id'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['table'] = 'field_data_field_event';
  $handler->display->display_options['filters']['field_event_nid']['field'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['value'] = array(
    111 => '111',
  );
  $handler->display->display_options['path'] = 'program/session-schedule';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Schedule';
  $handler->display->display_options['menu']['weight'] = '-15';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'Session schedule';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-conference-admin';

  /* Display: Your schedule */
  $handler = $view->new_display('page', 'Your schedule', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Your schedule';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_session_slot',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'picture' => 'picture',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'Your schedule is empty. You can add sessions to your personal schedule from the <a href="/program/session-schedule">main schedule.</a>';
  $handler->display->display_options['empty']['text']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Time slot (field_session_slot) */
  $handler->display->display_options['relationships']['field_session_slot_nid']['id'] = 'field_session_slot_nid';
  $handler->display->display_options['relationships']['field_session_slot_nid']['table'] = 'field_data_field_session_slot';
  $handler->display->display_options['relationships']['field_session_slot_nid']['field'] = 'field_session_slot_nid';
  $handler->display->display_options['relationships']['field_session_slot_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_session_slot_nid']['delta'] = '-1';
  /* Relationship: Content: Room (field_session_room) */
  $handler->display->display_options['relationships']['field_session_room_nid']['id'] = 'field_session_room_nid';
  $handler->display->display_options['relationships']['field_session_room_nid']['table'] = 'field_data_field_session_room';
  $handler->display->display_options['relationships']['field_session_room_nid']['field'] = 'field_session_room_nid';
  $handler->display->display_options['relationships']['field_session_room_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_session_room_nid']['delta'] = '-1';
  /* Relationship: Flags: User's flagged content */
  $handler->display->display_options['relationships']['flag_user_content_rel']['id'] = 'flag_user_content_rel';
  $handler->display->display_options['relationships']['flag_user_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_user_content_rel']['field'] = 'flag_user_content_rel';
  $handler->display->display_options['relationships']['flag_user_content_rel']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['flag_user_content_rel']['flag'] = 'session_schedule';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Time slot */
  $handler->display->display_options['fields']['field_session_slot']['id'] = 'field_session_slot';
  $handler->display->display_options['fields']['field_session_slot']['table'] = 'field_data_field_session_slot';
  $handler->display->display_options['fields']['field_session_slot']['field'] = 'field_session_slot';
  $handler->display->display_options['fields']['field_session_slot']['label'] = '';
  $handler->display->display_options['fields']['field_session_slot']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_slot']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_slot']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_slot']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_slot']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_slot']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_slot']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_slot']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_slot']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_slot']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_slot']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_session_slot']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_slot']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_slot']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_slot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_slot']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_slot']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_slot']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_slot']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_session_slot']['settings'] = array(
    'node_reference_view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_session_slot']['field_api_classes'] = 0;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['text'] = '[picture]<br />
[field_speakers_uid]';
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'user_thumb';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[title]</strong>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Room */
  $handler->display->display_options['fields']['field_session_room']['id'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['table'] = 'field_data_field_session_room';
  $handler->display->display_options['fields']['field_session_room']['field'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_session_room']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_session_room']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_session_room']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_session_room']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_session_room']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_session_room']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_session_room']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_session_room']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_session_room']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_session_room']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_session_room']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_session_room']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_session_room']['field_api_classes'] = 0;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['text'] = '<p />[ops]';
  $handler->display->display_options['fields']['ops']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['html'] = 0;
  $handler->display->display_options['fields']['ops']['hide_empty'] = 0;
  $handler->display->display_options['fields']['ops']['empty_zero'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
    'schedule_item' => 'schedule_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'program/session-schedule/your-schedule';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Your schedule';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['cod_schedule'] = $view;

  $view = new view;
  $view->name = 'session_votes';
  $view->description = 'Display session preferences.';
  $view->tag = 'dco';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Session Preferences';
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => 7,
    5 => 5,
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
    'title' => 'title',
    'field_speakers_uid' => 'field_speakers_uid',
    'field_experience_value' => 'field_experience_value',
    'count' => 'count',
    'edit_node' => 'edit_node',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = 'count';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_speakers_uid' => array(
      'separator' => '',
    ),
    'field_experience_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'count' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 1,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Relationship: Flags: session_vote counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'session_vote';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Session';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Votes';
  $handler->display->display_options['fields']['count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['count']['alter']['external'] = 0;
  $handler->display->display_options['fields']['count']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['count']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['count']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['count']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['count']['element_type'] = 'strong';
  $handler->display->display_options['fields']['count']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['count']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['count']['empty_zero'] = 0;
  $handler->display->display_options['fields']['count']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['count']['format_plural'] = 0;
  $handler->display->display_options['fields']['count']['suffix'] = ' ';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'edit';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Event (field_event) */
  $handler->display->display_options['filters']['field_event_nid']['id'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['table'] = 'field_data_field_event';
  $handler->display->display_options['filters']['field_event_nid']['field'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['value'] = array(
    111 => '111',
  );

  /* Display: Totals */
  $handler = $view->new_display('page', 'Totals', 'page_1');
  $handler->display->display_options['path'] = 'admin/registration/session-preferences';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Sessions';
  $handler->display->display_options['menu']['weight'] = '15';
  $handler->display->display_options['menu']['context'] = 0;
  $export['session_votes'] = $view;

  $view = new view;
  $view->name = 'sessions';
  $view->description = 'Submitted sessions (before voting)';
  $view->tag = 'cod session';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Sessions';
  $handler->display->display_options['css_class'] = 'view-grouped-list sessions-list';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'picture' => 'field_speakers_uid',
    'field_speakers_uid' => 'field_speakers_uid',
    'title' => 'title',
    'teaser' => 'title',
    'field_accepted_value' => 'title',
    'field_experience_value' => 'field_experience_value',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'picture' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'field_speakers_uid' => array(
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'teaser' => array(
      'separator' => '',
    ),
    'field_accepted_value' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'field_experience_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'No sessions have been submitted.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Relationship: Content: Speaker(s) (field_speakers) */
  $handler->display->display_options['relationships']['field_speakers_uid']['id'] = 'field_speakers_uid';
  $handler->display->display_options['relationships']['field_speakers_uid']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['relationships']['field_speakers_uid']['field'] = 'field_speakers_uid';
  $handler->display->display_options['relationships']['field_speakers_uid']['required'] = 1;
  $handler->display->display_options['relationships']['field_speakers_uid']['delta'] = '0';
  /* Field: Content: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_speakers']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_speakers']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_speakers']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_speakers']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_speakers']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_speakers']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_speakers']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_speakers']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_speakers']['field_api_classes'] = 0;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_speakers_uid';
  $handler->display->display_options['fields']['picture']['label'] = 'Speakers';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['text'] = '[picture]<br />
[field_speakers]';
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  $handler->display->display_options['fields']['picture']['image_style'] = 'user_thumb';
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'user_thumb';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Session';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_session_slot_nid';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = '0';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Filter by keywords:';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['required'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = '0';
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

  /* Display: Page: Accepted */
  $handler = $view->new_display('page', 'Page: Accepted', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Accepted sessions';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'Sessions have not yet been accepted.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = '0';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Filter by keywords:';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['required'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = '0';
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '!=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '23';
  $handler->display->display_options['filters']['nid']['group'] = '0';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Event (field_event) */
  $handler->display->display_options['filters']['field_event_nid']['id'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['table'] = 'field_data_field_event';
  $handler->display->display_options['filters']['field_event_nid']['field'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['value'] = array(
    111 => '111',
  );
  $handler->display->display_options['path'] = 'program/sessions/accepted';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Accepted sessions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Sessions';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Feed: Sessions All */
  $handler = $view->new_display('feed', 'Feed: Sessions All', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['item_length'] = 'full';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = '0';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Filter by keywords:';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['required'] = FALSE;
  /* Filter criterion: Content: Event (field_event) */
  $handler->display->display_options['filters']['field_event_nid']['id'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['table'] = 'field_data_field_event';
  $handler->display->display_options['filters']['field_event_nid']['field'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['value'] = array(
    111 => '111',
  );
  $handler->display->display_options['path'] = 'program/sessions/proposed/rss';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page_2' => 0,
    'block_1' => 0,
  );

  /* Display: Block: Session Details */
  $handler = $view->new_display('block', 'Block: Session Details', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sessions Details';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'session-details';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_session_slot_nid']['id'] = 'field_session_slot_nid';
  $handler->display->display_options['relationships']['field_session_slot_nid']['table'] = 'node_data_field_session_slot';
  $handler->display->display_options['relationships']['field_session_slot_nid']['field'] = 'field_session_slot_nid';
  $handler->display->display_options['relationships']['field_session_slot_nid']['label'] = 'Time slot';
  $handler->display->display_options['relationships']['field_session_slot_nid']['required'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_accepted_value']['id'] = 'field_accepted_value';
  $handler->display->display_options['fields']['field_accepted_value']['table'] = 'node_data_field_accepted';
  $handler->display->display_options['fields']['field_accepted_value']['field'] = 'field_accepted_value';
  $handler->display->display_options['fields']['field_accepted_value']['label'] = 'Status: ';
  $handler->display->display_options['fields']['field_accepted_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_accepted_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_accepted_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_accepted_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_accepted_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_accepted_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_accepted_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_accepted_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_accepted_value']['empty_zero'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_session_slot_nid';
  $handler->display->display_options['fields']['title']['label'] = 'Schedule: ';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_track_value']['id'] = 'field_track_value';
  $handler->display->display_options['fields']['field_track_value']['table'] = 'node_data_field_track';
  $handler->display->display_options['fields']['field_track_value']['field'] = 'field_track_value';
  $handler->display->display_options['fields']['field_track_value']['label'] = 'Track: ';
  $handler->display->display_options['fields']['field_track_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_track_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_track_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_track_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_track_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_track_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_track_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_track_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_track_value']['empty_zero'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'node_data_field_session_room';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title_enable'] = 1;
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['block_description'] = 'Sessions: Session Details';
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Block: Speakers */
  $handler = $view->new_display('block', 'Block: Speakers', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Speakers';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'session-speakers';
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'picture' => 'picture',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_speakers_uid']['id'] = 'field_speakers_uid';
  $handler->display->display_options['relationships']['field_speakers_uid']['table'] = 'node_data_field_speakers';
  $handler->display->display_options['relationships']['field_speakers_uid']['field'] = 'field_speakers_uid';
  $handler->display->display_options['relationships']['field_speakers_uid']['label'] = 'Speaker(s)';
  $handler->display->display_options['relationships']['field_speakers_uid']['required'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_speakers_uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_speakers_uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = '([name_1])';
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_1']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name_1']['overwrite_anonymous'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_values_profile_org';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'field_speakers_uid';
  $handler->display->display_options['fields']['value']['label'] = 'Personal information: Organization';
  $handler->display->display_options['fields']['value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['value']['alter']['path'] = 'organization/[value]';
  $handler->display->display_options['fields']['value']['alter']['alt'] = 'People who work with [value]';
  $handler->display->display_options['fields']['value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value']['empty_zero'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_speakers_uid';
  $handler->display->display_options['sorts']['name']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title_enable'] = 1;
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_accepted_value_many_to_one']['id'] = 'field_accepted_value_many_to_one';
  $handler->display->display_options['filters']['field_accepted_value_many_to_one']['table'] = 'node_data_field_accepted';
  $handler->display->display_options['filters']['field_accepted_value_many_to_one']['field'] = 'field_accepted_value_many_to_one';
  $handler->display->display_options['filters']['field_accepted_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_accepted_value_many_to_one']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_accepted_value_many_to_one']['group'] = '0';
  $handler->display->display_options['filters']['field_accepted_value_many_to_one']['expose']['label'] = 'by status:';
  $handler->display->display_options['filters']['field_accepted_value_many_to_one']['expose']['operator'] = 'field_accepted_value_many_to_one_op';
  $handler->display->display_options['filters']['field_accepted_value_many_to_one']['expose']['identifier'] = 'status';
  $handler->display->display_options['block_description'] = 'Sessions: Speakers';

  /* Display: Page: Proposed */
  $handler = $view->new_display('page', 'Page: Proposed', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Proposed Sessions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'picture' => 'field_speakers_uid',
    'field_speakers_uid' => 'field_speakers_uid',
    'title' => 'title',
    'teaser' => 'title',
    'field_accepted_value' => 'title',
    'field_experience_value' => 'field_experience_value',
    'field_track_value' => 'field_track_value',
    'ops' => 'ops',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'picture' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'field_speakers_uid' => array(
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'teaser' => array(
      'separator' => '',
    ),
    'field_accepted_value' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'field_experience_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_track_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'ops' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'text';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['empty'] = TRUE;
  $handler->display->display_options['header']['text']['content'] = '<ul class="item-list links">
<li><a href="/node/add/session" title="Submit Session">Submit your session</a></li>
</ul>';
  $handler->display->display_options['header']['text']['format'] = '1';
  $handler->display->display_options['header']['text']['tokenize'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Speaker(s) (field_speakers) */
  $handler->display->display_options['relationships']['field_speakers_uid']['id'] = 'field_speakers_uid';
  $handler->display->display_options['relationships']['field_speakers_uid']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['relationships']['field_speakers_uid']['field'] = 'field_speakers_uid';
  $handler->display->display_options['relationships']['field_speakers_uid']['required'] = 1;
  $handler->display->display_options['relationships']['field_speakers_uid']['delta'] = '0';
  /* Relationship: Flags: session_vote */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'session_vote';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_speakers']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_speakers']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_speakers']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_speakers']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_speakers']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_speakers']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_speakers']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_speakers']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_speakers']['field_api_classes'] = 0;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_speakers_uid';
  $handler->display->display_options['fields']['picture']['label'] = 'Speakers';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['text'] = '[picture]<br />
[field_speakers]';
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  $handler->display->display_options['fields']['picture']['image_style'] = 'user_thumb';
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'user_thumb';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Session';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['external'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['ops']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['ops']['alter']['html'] = 0;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ops']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['ops']['hide_empty'] = 0;
  $handler->display->display_options['fields']['ops']['empty_zero'] = 0;
  $handler->display->display_options['fields']['ops']['hide_alter_empty'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = '0';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Filter by keywords:';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['required'] = FALSE;
  /* Filter criterion: Content: Event (field_event) */
  $handler->display->display_options['filters']['field_event_nid']['id'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['table'] = 'field_data_field_event';
  $handler->display->display_options['filters']['field_event_nid']['field'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['value'] = array(
    111 => '111',
  );
  $handler->display->display_options['path'] = 'program/sessions/proposed';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Proposed Sessions';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Sessions';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'primary-links';

  /* Display: Block: Nodequeue */
  $handler = $view->new_display('block', 'Block: Nodequeue', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Sessions';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_accepted_value_many_to_one']['id'] = 'field_accepted_value_many_to_one';
  $handler->display->display_options['filters']['field_accepted_value_many_to_one']['table'] = 'node_data_field_accepted';
  $handler->display->display_options['filters']['field_accepted_value_many_to_one']['field'] = 'field_accepted_value_many_to_one';
  $handler->display->display_options['filters']['field_accepted_value_many_to_one']['operator'] = 'or';
  $handler->display->display_options['filters']['field_accepted_value_many_to_one']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_accepted_value_many_to_one']['group'] = '0';
  $handler->display->display_options['filters']['field_accepted_value_many_to_one']['expose']['label'] = 'by status:';
  $handler->display->display_options['filters']['field_accepted_value_many_to_one']['expose']['operator'] = 'field_accepted_value_many_to_one_op';
  $handler->display->display_options['filters']['field_accepted_value_many_to_one']['expose']['identifier'] = 'status';

  /* Display: Block: Featured */
  $handler = $view->new_display('block', 'Block: Featured', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Speaker';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_speakers']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_speakers']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_speakers']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_speakers']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_speakers']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_speakers']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_speakers']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_speakers']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_speakers']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3 class="title">[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Marketing image */
  $handler->display->display_options['fields']['field_marketing_image']['id'] = 'field_marketing_image';
  $handler->display->display_options['fields']['field_marketing_image']['table'] = 'field_data_field_marketing_image';
  $handler->display->display_options['fields']['field_marketing_image']['field'] = 'field_marketing_image';
  $handler->display->display_options['fields']['field_marketing_image']['label'] = '';
  $handler->display->display_options['fields']['field_marketing_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_marketing_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_marketing_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_marketing_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_marketing_image']['settings'] = array(
    'image_style' => 'marketing_image',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_marketing_image']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '350',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Featured Session (field_featured) */
  $handler->display->display_options['filters']['field_featured_value_1']['id'] = 'field_featured_value_1';
  $handler->display->display_options['filters']['field_featured_value_1']['table'] = 'field_data_field_featured';
  $handler->display->display_options['filters']['field_featured_value_1']['field'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value_1']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_featured_value_1']['group'] = 1;
  /* Filter criterion: Content: Event (field_event) */
  $handler->display->display_options['filters']['field_event_nid']['id'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['table'] = 'field_data_field_event';
  $handler->display->display_options['filters']['field_event_nid']['field'] = 'field_event_nid';
  $handler->display->display_options['filters']['field_event_nid']['value'] = array(
    111 => '111',
  );

  /* Display: Block: Rooms */
  $handler = $view->new_display('block', 'Block: Rooms', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sessions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'title' => 'title',
    'field_speakers_uid' => 'field_speakers_uid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'field_speakers_uid' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'There are currently no scheduled sessions for this room.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Speaker(s) (field_speakers) */
  $handler->display->display_options['relationships']['field_speakers_uid']['id'] = 'field_speakers_uid';
  $handler->display->display_options['relationships']['field_speakers_uid']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['relationships']['field_speakers_uid']['field'] = 'field_speakers_uid';
  $handler->display->display_options['relationships']['field_speakers_uid']['required'] = 1;
  $handler->display->display_options['relationships']['field_speakers_uid']['delta'] = '0';
  /* Relationship: Content: Time slot (field_session_slot) */
  $handler->display->display_options['relationships']['field_session_slot_nid']['id'] = 'field_session_slot_nid';
  $handler->display->display_options['relationships']['field_session_slot_nid']['table'] = 'field_data_field_session_slot';
  $handler->display->display_options['relationships']['field_session_slot_nid']['field'] = 'field_session_slot_nid';
  $handler->display->display_options['relationships']['field_session_slot_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_session_slot_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_session_slot_nid';
  $handler->display->display_options['fields']['title_1']['label'] = 'Time';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Session';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3 class="title">[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['text'] = '[picture]
[field_speakers] ';
  $handler->display->display_options['fields']['field_speakers']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_speakers']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_speakers']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_speakers']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_speakers']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_speakers']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_speakers']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_speakers']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_speakers']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_speakers']['field_api_classes'] = 0;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_speakers_uid';
  $handler->display->display_options['fields']['picture']['label'] = 'Speakers';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['text'] = '[picture]<br />
[field_speakers]';
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  $handler->display->display_options['fields']['picture']['image_style'] = 'user_med';
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'user_med';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Room (field_session_room) */
  $handler->display->display_options['arguments']['field_session_room_nid']['id'] = 'field_session_room_nid';
  $handler->display->display_options['arguments']['field_session_room_nid']['table'] = 'field_data_field_session_room';
  $handler->display->display_options['arguments']['field_session_room_nid']['field'] = 'field_session_room_nid';
  $handler->display->display_options['arguments']['field_session_room_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_session_room_nid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['field_session_room_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_session_room_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_session_room_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_session_room_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_session_room_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_session_room_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_session_room_nid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block: Timeslots */
  $handler = $view->new_display('block', 'Block: Timeslots', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sessions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'title' => 'title',
    'field_speakers_uid' => 'field_speakers_uid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'field_speakers_uid' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'There are currently no scheduled sessions for this room.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Room (field_session_room) */
  $handler->display->display_options['relationships']['field_session_room_nid']['id'] = 'field_session_room_nid';
  $handler->display->display_options['relationships']['field_session_room_nid']['table'] = 'field_data_field_session_room';
  $handler->display->display_options['relationships']['field_session_room_nid']['field'] = 'field_session_room_nid';
  $handler->display->display_options['relationships']['field_session_room_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_session_room_nid']['delta'] = '0';
  /* Relationship: Content: Speaker(s) (field_speakers) */
  $handler->display->display_options['relationships']['field_speakers_uid']['id'] = 'field_speakers_uid';
  $handler->display->display_options['relationships']['field_speakers_uid']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['relationships']['field_speakers_uid']['field'] = 'field_speakers_uid';
  $handler->display->display_options['relationships']['field_speakers_uid']['required'] = 0;
  $handler->display->display_options['relationships']['field_speakers_uid']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_session_room_nid';
  $handler->display->display_options['fields']['title_1']['label'] = 'Room';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Field: Content: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_speakers']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_speakers']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_speakers']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_speakers']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_speakers']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_speakers']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_speakers']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_speakers']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_speakers']['field_api_classes'] = 0;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_speakers_uid';
  $handler->display->display_options['fields']['picture']['label'] = 'Speakers';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['text'] = '[picture]<br />
[field_speakers]';
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  $handler->display->display_options['fields']['picture']['image_style'] = 'user_thumb';
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'user_thumb';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Session';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_session_room_nid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Time slot (field_session_slot) */
  $handler->display->display_options['arguments']['field_session_slot_nid']['id'] = 'field_session_slot_nid';
  $handler->display->display_options['arguments']['field_session_slot_nid']['table'] = 'field_data_field_session_slot';
  $handler->display->display_options['arguments']['field_session_slot_nid']['field'] = 'field_session_slot_nid';
  $handler->display->display_options['arguments']['field_session_slot_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_session_slot_nid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['field_session_slot_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_session_slot_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_session_slot_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_session_slot_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_session_slot_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_session_slot_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_session_slot_nid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page: Archived */
  $handler = $view->new_display('page', 'Page: Archived', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Archived Sessions';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Personal information: First name */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_value_profile_first';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'field_speakers_uid';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['value']['link_to_user'] = 1;
  /* Field: Profile: Personal information: Last name */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_value_profile_last';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['relationship'] = 'field_speakers_uid';
  $handler->display->display_options['fields']['value_1']['label'] = '';
  $handler->display->display_options['fields']['value_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['value_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['value_1']['link_to_user'] = 1;
  /* Field: Content: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['text'] = '[value] [value_1]';
  $handler->display->display_options['fields']['field_speakers']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_speakers']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_speakers']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_speakers']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_speakers']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_speakers']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_speakers']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_speakers']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_speakers']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_speakers']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_speakers']['field_api_classes'] = 0;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_speakers_uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['text'] = '[picture]<br />
[field_speakers]';
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  $handler->display->display_options['fields']['picture']['image_style'] = 'user_thumb';
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'user_thumb';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Session';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Event (field_event) */
  $handler->display->display_options['arguments']['field_event_nid']['id'] = 'field_event_nid';
  $handler->display->display_options['arguments']['field_event_nid']['table'] = 'field_data_field_event';
  $handler->display->display_options['arguments']['field_event_nid']['field'] = 'field_event_nid';
  $handler->display->display_options['arguments']['field_event_nid']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_event_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_event_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_nid']['summary']['format'] = 'jump_menu_summary';
  $handler->display->display_options['arguments']['field_event_nid']['summary_options']['count'] = 0;
  $handler->display->display_options['arguments']['field_event_nid']['summary_options']['hide'] = '1';
  $handler->display->display_options['arguments']['field_event_nid']['summary_options']['default_value'] = '1';
  $handler->display->display_options['arguments']['field_event_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_event_nid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = '0';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Filter by keywords:';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['required'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = '0';
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Status (field_accepted) */
  $handler->display->display_options['filters']['field_accepted_value']['id'] = 'field_accepted_value';
  $handler->display->display_options['filters']['field_accepted_value']['table'] = 'field_data_field_accepted';
  $handler->display->display_options['filters']['field_accepted_value']['field'] = 'field_accepted_value';
  $handler->display->display_options['filters']['field_accepted_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'archive';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Archive';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['sessions'] = $view;

  return $export;
}
