<?php
/**
 * @file
 * dco_base.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function dco_base_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Basic',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'node-edit',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'event' => 'event',
              'invoice' => 'invoice',
              'news' => 'news',
              'page' => 'page',
              'product' => 'product',
              'report' => 'report',
              'room' => 'room',
              'schedule_item' => 'schedule_item',
              'simplenews' => 'simplenews',
              'time_slot' => 'time_slot',
              'webform' => 'webform',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '87c67b22-abb0-4b3d-82c8-6c021e891142';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_edit_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-815d81b1-6e1b-4c16-b456-c0a4dead00a9';
  $pane->panel = 'one_main';
  $pane->type = 'node_form_title';
  $pane->subtype = 'node_form_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '815d81b1-6e1b-4c16-b456-c0a4dead00a9';
  $display->content['new-815d81b1-6e1b-4c16-b456-c0a4dead00a9'] = $pane;
  $display->panels['one_main'][0] = 'new-815d81b1-6e1b-4c16-b456-c0a4dead00a9';
  $pane = new stdClass();
  $pane->pid = 'new-9b003d76-599f-41ed-8aac-dfdf0286aaff';
  $pane->panel = 'one_main';
  $pane->type = 'form';
  $pane->subtype = 'form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9b003d76-599f-41ed-8aac-dfdf0286aaff';
  $display->content['new-9b003d76-599f-41ed-8aac-dfdf0286aaff'] = $pane;
  $display->panels['one_main'][1] = 'new-9b003d76-599f-41ed-8aac-dfdf0286aaff';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-815d81b1-6e1b-4c16-b456-c0a4dead00a9';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function dco_base_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dco_home_2013';
  $page->task = 'page';
  $page->admin_title = 'DCO Home 2013';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dco_home_2013_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dco_home_2013';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'dco-front',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Node',
        'keyword' => 'node',
        'name' => 'entity:node',
        'entity_id' => '1061',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'two_brick';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'two_brick_right_above' => array(),
      'two_brick_top' => NULL,
      'two_brick_left_above' => NULL,
      'two_brick_middle' => NULL,
      'two_brick_left_below' => NULL,
      'two_brick_bottom' => NULL,
      'two_brick_right_below' => NULL,
    ),
    'style' => 'list',
    'two_brick_top' => array(
      'style' => 'default',
    ),
    'two_brick_left_above' => array(
      'style' => 'default',
    ),
    'two_brick_right_above' => array(
      'style' => 'list',
    ),
    'two_brick_middle' => array(
      'style' => 'default',
    ),
    'two_brick_left_below' => array(
      'style' => 'default',
    ),
    'two_brick_right_below' => array(
      'style' => 'default',
    ),
    'two_brick_bottom' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7bc22adb-b005-4702-9618-736ce3925575';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dco_home_2013_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8f845c3b-939e-4da4-bc7a-812018c14d59';
  $pane->panel = 'two_brick_left_above';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p><img alt="" class="event-logo" src="/sites/all/themes/dco2013/images/temp-dco-icon.png"></p><h1><span class="drupal-camp">Drupal Camp</span> <span class="ohio">Ohio</span> <span class="year">2015</span></h1>',
    'format' => '2',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(),
    'style' => 'list',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'emblem',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8f845c3b-939e-4da4-bc7a-812018c14d59';
  $display->content['new-8f845c3b-939e-4da4-bc7a-812018c14d59'] = $pane;
  $display->panels['two_brick_left_above'][0] = 'new-8f845c3b-939e-4da4-bc7a-812018c14d59';
  $pane = new stdClass();
  $pane->pid = 'new-4942004f-7d68-4eaf-9880-b4fff9810d6d';
  $pane->panel = 'two_brick_left_below';
  $pane->type = 'views';
  $pane->subtype = 'news';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 1,
    'feed_icons' => 1,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'override_title' => 1,
    'override_title_text' => 'News Updates',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4942004f-7d68-4eaf-9880-b4fff9810d6d';
  $display->content['new-4942004f-7d68-4eaf-9880-b4fff9810d6d'] = $pane;
  $display->panels['two_brick_left_below'][0] = 'new-4942004f-7d68-4eaf-9880-b4fff9810d6d';
  $pane = new stdClass();
  $pane->pid = 'new-0f6ec2a6-f3c7-422e-a584-1397f8b49de3';
  $pane->panel = 'two_brick_middle';
  $pane->type = 'views';
  $pane->subtype = 'sessions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_4',
    'override_title' => 1,
    'override_title_text' => 'Speakers',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(),
    'style' => 'list',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0f6ec2a6-f3c7-422e-a584-1397f8b49de3';
  $display->content['new-0f6ec2a6-f3c7-422e-a584-1397f8b49de3'] = $pane;
  $display->panels['two_brick_middle'][0] = 'new-0f6ec2a6-f3c7-422e-a584-1397f8b49de3';
  $pane = new stdClass();
  $pane->pid = 'new-a37e84bc-2797-4c3c-bfc7-cf7a3ceab411';
  $pane->panel = 'two_brick_middle';
  $pane->type = 'block';
  $pane->subtype = 'system-user-menu';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Interact',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a37e84bc-2797-4c3c-bfc7-cf7a3ceab411';
  $display->content['new-a37e84bc-2797-4c3c-bfc7-cf7a3ceab411'] = $pane;
  $display->panels['two_brick_middle'][1] = 'new-a37e84bc-2797-4c3c-bfc7-cf7a3ceab411';
  $pane = new stdClass();
  $pane->pid = 'new-22aa5384-0c05-4325-85da-0e8045bd2f42';
  $pane->panel = 'two_brick_right_above';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Dates',
    'title' => '',
    'body' => '<div class="time-wrapper">
  <time class="begin" datetime="2015/10/23 08:00">
    <span class="month">October</span>
    <span class="day">23</span>
  </time>
  <div class="binary"><span class="binary1"></span><span class="binary2"></span></div>
</div>
<div class="time-wrapper end">
  <time datetime="2015/10/24 17:30">
    <span class="month">And</span>
    <span class="day">24</span>
  </time>
  <div class="binary"><span class="binary1"></span><span class="binary2"></span></div>
</div>',
    'format' => 'dev_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(),
    'style' => 'list',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'dates',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '22aa5384-0c05-4325-85da-0e8045bd2f42';
  $display->content['new-22aa5384-0c05-4325-85da-0e8045bd2f42'] = $pane;
  $display->panels['two_brick_right_above'][0] = 'new-22aa5384-0c05-4325-85da-0e8045bd2f42';
  $pane = new stdClass();
  $pane->pid = 'new-5051d527-6d2f-4057-8748-4c25348899d6';
  $pane->panel = 'two_brick_right_above';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h2>At The OSU\'s Nationwide &amp; Ohio Farm Bureau 4-H Center <a class="map" href="/location">map</a></h2>',
    'format' => '2',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'location',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5051d527-6d2f-4057-8748-4c25348899d6';
  $display->content['new-5051d527-6d2f-4057-8748-4c25348899d6'] = $pane;
  $display->panels['two_brick_right_above'][1] = 'new-5051d527-6d2f-4057-8748-4c25348899d6';
  $pane = new stdClass();
  $pane->pid = 'new-aeeee90a-5e06-450d-b6c0-26e430b10f57';
  $pane->panel = 'two_brick_right_above';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p><a href="/node/%node:nid">Learn more</a></p>',
    'format' => '1',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'learn-more',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'aeeee90a-5e06-450d-b6c0-26e430b10f57';
  $display->content['new-aeeee90a-5e06-450d-b6c0-26e430b10f57'] = $pane;
  $display->panels['two_brick_right_above'][2] = 'new-aeeee90a-5e06-450d-b6c0-26e430b10f57';
  $pane = new stdClass();
  $pane->pid = 'new-39844362-28be-4e13-8b7b-2b82e80e0979';
  $pane->panel = 'two_brick_right_above';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_product_reference';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'commerce_cart_add_to_cart_form',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'show_quantity' => 1,
      'default_quantity' => '1',
      'combine' => 1,
      'show_single_product_attributes' => 0,
      'line_item_type' => 0,
    ),
    'context' => 'context_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Register now',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(),
    'style' => 'list',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '39844362-28be-4e13-8b7b-2b82e80e0979';
  $display->content['new-39844362-28be-4e13-8b7b-2b82e80e0979'] = $pane;
  $display->panels['two_brick_right_above'][3] = 'new-39844362-28be-4e13-8b7b-2b82e80e0979';
  $pane = new stdClass();
  $pane->pid = 'new-c55079a4-7984-4a03-b3bf-f80260871af3';
  $pane->panel = 'two_brick_right_below';
  $pane->type = 'views';
  $pane->subtype = 'Sponsors';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'override_title' => 1,
    'override_title_text' => 'Platinum Sponsors',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c55079a4-7984-4a03-b3bf-f80260871af3';
  $display->content['new-c55079a4-7984-4a03-b3bf-f80260871af3'] = $pane;
  $display->panels['two_brick_right_below'][0] = 'new-c55079a4-7984-4a03-b3bf-f80260871af3';
  $pane = new stdClass();
  $pane->pid = 'new-dbe4837a-cbc9-4df1-975b-79d16301644d';
  $pane->panel = 'two_brick_right_below';
  $pane->type = 'views';
  $pane->subtype = 'Sponsors';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '2',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 1,
    'override_title_text' => 'Sponsors',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(),
    'style' => 'list',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dbe4837a-cbc9-4df1-975b-79d16301644d';
  $display->content['new-dbe4837a-cbc9-4df1-975b-79d16301644d'] = $pane;
  $display->panels['two_brick_right_below'][1] = 'new-dbe4837a-cbc9-4df1-975b-79d16301644d';
  $pane = new stdClass();
  $pane->pid = 'new-7e850676-f5f2-4e88-a6a1-8de01f5dd885';
  $pane->panel = 'two_brick_right_below';
  $pane->type = 'views';
  $pane->subtype = 'tweets';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '4',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'Tweets',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '7e850676-f5f2-4e88-a6a1-8de01f5dd885';
  $display->content['new-7e850676-f5f2-4e88-a6a1-8de01f5dd885'] = $pane;
  $display->panels['two_brick_right_below'][2] = 'new-7e850676-f5f2-4e88-a6a1-8de01f5dd885';
  $pane = new stdClass();
  $pane->pid = 'new-b449212d-8319-4b98-b893-0afaf9350770';
  $pane->panel = 'two_brick_right_below';
  $pane->type = 'block';
  $pane->subtype = 'simplenews-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Newsletter',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b449212d-8319-4b98-b893-0afaf9350770';
  $display->content['new-b449212d-8319-4b98-b893-0afaf9350770'] = $pane;
  $display->panels['two_brick_right_below'][3] = 'new-b449212d-8319-4b98-b893-0afaf9350770';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dco_home_2013'] = $page;

  return $pages;

}
