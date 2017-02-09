<?php
/**
 * @file
 * dco_session.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function dco_session_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_2';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Session',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'node-edit-session',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'session' => 'session',
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
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2e99529d-e4ab-4625-8042-9d863a6af6d4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_edit_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c2fb2e0b-d3d5-4d1d-be04-f294b6f38c8c';
  $pane->panel = 'two_66_33_bottom';
  $pane->type = 'node_form_path';
  $pane->subtype = 'node_form_path';
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
  $pane->uuid = 'c2fb2e0b-d3d5-4d1d-be04-f294b6f38c8c';
  $display->content['new-c2fb2e0b-d3d5-4d1d-be04-f294b6f38c8c'] = $pane;
  $display->panels['two_66_33_bottom'][0] = 'new-c2fb2e0b-d3d5-4d1d-be04-f294b6f38c8c';
  $pane = new stdClass();
  $pane->pid = 'new-35d1170b-d1cc-4443-91ba-3c7f5be1fcdd';
  $pane->panel = 'two_66_33_bottom';
  $pane->type = 'node_form_author';
  $pane->subtype = 'node_form_author';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '35d1170b-d1cc-4443-91ba-3c7f5be1fcdd';
  $display->content['new-35d1170b-d1cc-4443-91ba-3c7f5be1fcdd'] = $pane;
  $display->panels['two_66_33_bottom'][1] = 'new-35d1170b-d1cc-4443-91ba-3c7f5be1fcdd';
  $pane = new stdClass();
  $pane->pid = 'new-de1c7e04-c8df-4322-aa04-c1cfea4c4402';
  $pane->panel = 'two_66_33_bottom';
  $pane->type = 'node_form_buttons';
  $pane->subtype = 'node_form_buttons';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'de1c7e04-c8df-4322-aa04-c1cfea4c4402';
  $display->content['new-de1c7e04-c8df-4322-aa04-c1cfea4c4402'] = $pane;
  $display->panels['two_66_33_bottom'][2] = 'new-de1c7e04-c8df-4322-aa04-c1cfea4c4402';
  $pane = new stdClass();
  $pane->pid = 'new-c2c3a7e8-1728-405c-bcac-eb1604f000ad';
  $pane->panel = 'two_66_33_bottom';
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
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c2c3a7e8-1728-405c-bcac-eb1604f000ad';
  $display->content['new-c2c3a7e8-1728-405c-bcac-eb1604f000ad'] = $pane;
  $display->panels['two_66_33_bottom'][3] = 'new-c2c3a7e8-1728-405c-bcac-eb1604f000ad';
  $pane = new stdClass();
  $pane->pid = 'new-8a87c57d-6634-4416-9e44-0a1c95178346';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
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
  $pane->uuid = '8a87c57d-6634-4416-9e44-0a1c95178346';
  $display->content['new-8a87c57d-6634-4416-9e44-0a1c95178346'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-8a87c57d-6634-4416-9e44-0a1c95178346';
  $pane = new stdClass();
  $pane->pid = 'new-7c0a8027-33dd-488b-a9a0-cd1027834ad3';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_slides';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
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
  $pane->uuid = '7c0a8027-33dd-488b-a9a0-cd1027834ad3';
  $display->content['new-7c0a8027-33dd-488b-a9a0-cd1027834ad3'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-7c0a8027-33dd-488b-a9a0-cd1027834ad3';
  $pane = new stdClass();
  $pane->pid = 'new-a29cb4dc-cbda-45e6-a72c-ba3ee13d44c4';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_marketing_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a29cb4dc-cbda-45e6-a72c-ba3ee13d44c4';
  $display->content['new-a29cb4dc-cbda-45e6-a72c-ba3ee13d44c4'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-a29cb4dc-cbda-45e6-a72c-ba3ee13d44c4';
  $pane = new stdClass();
  $pane->pid = 'new-2deb5859-8182-495d-952d-8230c70a9166';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_event';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
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
  $pane->uuid = '2deb5859-8182-495d-952d-8230c70a9166';
  $display->content['new-2deb5859-8182-495d-952d-8230c70a9166'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-2deb5859-8182-495d-952d-8230c70a9166';
  $pane = new stdClass();
  $pane->pid = 'new-d48928aa-b715-4628-a49f-8d3713f48971';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_session_length';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd48928aa-b715-4628-a49f-8d3713f48971';
  $display->content['new-d48928aa-b715-4628-a49f-8d3713f48971'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-d48928aa-b715-4628-a49f-8d3713f48971';
  $pane = new stdClass();
  $pane->pid = 'new-56d55828-248d-43df-bc60-69a26c2b93cc';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_experience';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '56d55828-248d-43df-bc60-69a26c2b93cc';
  $display->content['new-56d55828-248d-43df-bc60-69a26c2b93cc'] = $pane;
  $display->panels['two_66_33_second'][2] = 'new-56d55828-248d-43df-bc60-69a26c2b93cc';
  $pane = new stdClass();
  $pane->pid = 'new-07115edc-0b73-4bbc-b8c8-2b6f7c8b4e3b';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_track';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '07115edc-0b73-4bbc-b8c8-2b6f7c8b4e3b';
  $display->content['new-07115edc-0b73-4bbc-b8c8-2b6f7c8b4e3b'] = $pane;
  $display->panels['two_66_33_second'][3] = 'new-07115edc-0b73-4bbc-b8c8-2b6f7c8b4e3b';
  $pane = new stdClass();
  $pane->pid = 'new-3e39912d-d35c-4e3d-ab90-eac3b481c5b1';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_registration_type';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '3e39912d-d35c-4e3d-ab90-eac3b481c5b1';
  $display->content['new-3e39912d-d35c-4e3d-ab90-eac3b481c5b1'] = $pane;
  $display->panels['two_66_33_second'][4] = 'new-3e39912d-d35c-4e3d-ab90-eac3b481c5b1';
  $pane = new stdClass();
  $pane->pid = 'new-548337a9-c9a0-4d76-99d3-82ba6d23c579';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_accepted';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '548337a9-c9a0-4d76-99d3-82ba6d23c579';
  $display->content['new-548337a9-c9a0-4d76-99d3-82ba6d23c579'] = $pane;
  $display->panels['two_66_33_second'][5] = 'new-548337a9-c9a0-4d76-99d3-82ba6d23c579';
  $pane = new stdClass();
  $pane->pid = 'new-71f92546-d118-4506-9be1-a94dad366bde';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_session_room';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '71f92546-d118-4506-9be1-a94dad366bde';
  $display->content['new-71f92546-d118-4506-9be1-a94dad366bde'] = $pane;
  $display->panels['two_66_33_second'][6] = 'new-71f92546-d118-4506-9be1-a94dad366bde';
  $pane = new stdClass();
  $pane->pid = 'new-c8a24509-df9b-4b7d-9f7d-a45ef583d952';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_session_slot';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'c8a24509-df9b-4b7d-9f7d-a45ef583d952';
  $display->content['new-c8a24509-df9b-4b7d-9f7d-a45ef583d952'] = $pane;
  $display->panels['two_66_33_second'][7] = 'new-c8a24509-df9b-4b7d-9f7d-a45ef583d952';
  $pane = new stdClass();
  $pane->pid = 'new-3f3d97b1-abc5-4bfa-b5c9-05e83984be62';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_featured';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '3f3d97b1-abc5-4bfa-b5c9-05e83984be62';
  $display->content['new-3f3d97b1-abc5-4bfa-b5c9-05e83984be62'] = $pane;
  $display->panels['two_66_33_second'][8] = 'new-3f3d97b1-abc5-4bfa-b5c9-05e83984be62';
  $pane = new stdClass();
  $pane->pid = 'new-ae658fdc-1256-4c24-bc9f-32d6c40bec8b';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'node_form_publishing';
  $pane->subtype = 'node_form_publishing';
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'ae658fdc-1256-4c24-bc9f-32d6c40bec8b';
  $display->content['new-ae658fdc-1256-4c24-bc9f-32d6c40bec8b'] = $pane;
  $display->panels['two_66_33_second'][9] = 'new-ae658fdc-1256-4c24-bc9f-32d6c40bec8b';
  $pane = new stdClass();
  $pane->pid = 'new-ac891b60-bbbf-4d01-aeac-7a443178957a';
  $pane->panel = 'two_66_33_top';
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
  $pane->uuid = 'ac891b60-bbbf-4d01-aeac-7a443178957a';
  $display->content['new-ac891b60-bbbf-4d01-aeac-7a443178957a'] = $pane;
  $display->panels['two_66_33_top'][0] = 'new-ac891b60-bbbf-4d01-aeac-7a443178957a';
  $pane = new stdClass();
  $pane->pid = 'new-81574e1a-6fcd-4e5f-9a89-1e2a8d8c1d62';
  $pane->panel = 'two_66_33_top';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_speakers';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
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
  $pane->uuid = '81574e1a-6fcd-4e5f-9a89-1e2a8d8c1d62';
  $display->content['new-81574e1a-6fcd-4e5f-9a89-1e2a8d8c1d62'] = $pane;
  $display->panels['two_66_33_top'][1] = 'new-81574e1a-6fcd-4e5f-9a89-1e2a8d8c1d62';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ac891b60-bbbf-4d01-aeac-7a443178957a';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_2'] = $handler;

  return $export;
}
