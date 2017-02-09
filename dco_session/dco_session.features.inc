<?php
/**
 * @file
 * dco_session.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dco_session_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dco_session_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function dco_session_flag_default_flags() {
  $flags = array();
  // Exported flag: "Speaker confirmation flag".
  $flags['session_confirm'] = array(
    'entity_type' => 'node',
    'title' => 'Speaker confirmation flag',
    'global' => 0,
    'types' => array(
      0 => 'session',
    ),
    'flag_short' => 'I confirm that I can present this sesssion at the listed date and time.',
    'flag_long' => 'Once confirmed, you cannot unconfirm without contacting the session organizers.',
    'flag_message' => 'Thanks for confirming that you can present [title] at this date and time!',
    'unflag_short' => 'Cancel confirmation',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => 'You have confirmed that you will be presenting for this session.',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(),
    'show_as_field' => FALSE,
    'show_on_form' => FALSE,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'dco_session',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Session Attending".
  $flags['session_schedule'] = array(
    'entity_type' => 'node',
    'title' => 'Session Attending',
    'global' => 0,
    'types' => array(
      0 => 'schedule_item',
      1 => 'session',
    ),
    'flag_short' => 'Add to your schedule',
    'flag_long' => 'Add this session to your personal session attendance.',
    'flag_message' => 'Session added',
    'unflag_short' => 'Remove from your schedule',
    'unflag_long' => 'Remove this session from your schedule',
    'unflag_message' => 'Session removed',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(),
    'show_as_field' => FALSE,
    'show_on_form' => FALSE,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'dco_session',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Session Vote".
  $flags['session_vote'] = array(
    'entity_type' => 'node',
    'title' => 'Session Vote',
    'global' => 0,
    'types' => array(
      0 => 'session',
    ),
    'flag_short' => 'Add your vote for this session.',
    'flag_long' => 'Click to add your vote for this session.',
    'flag_message' => 'Your preference has been recorded!',
    'unflag_short' => 'Remove your vote for this session.',
    'unflag_long' => 'Click to remove your vote for this session.',
    'unflag_message' => 'Your preference has been recorded!',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(),
    'show_as_field' => FALSE,
    'show_on_form' => FALSE,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'dco_session',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function dco_session_node_info() {
  $items = array(
    'room' => array(
      'name' => t('Room'),
      'base' => 'node_content',
      'description' => t('Rooms provide a location for each session.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('What type of space is this? How is the seating arranged? Are there any other information to be shared?'),
    ),
    'schedule_item' => array(
      'name' => t('Schedule Item'),
      'base' => 'node_content',
      'description' => t('Use schedule items for content you wish to have in the schedule but not be part of any session submission workflows. Examples include scheduling lunch or breaks.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'session' => array(
      'name' => t('Session'),
      'base' => 'node_content',
      'description' => t('Use this content type to propose sessions at the event. Users can vote on proposed sessions and add sessions to their individual session agendas.'),
      'has_title' => '1',
      'title_label' => t('Session Title'),
      'help' => '',
    ),
    'time_slot' => array(
      'name' => t('Time slot'),
      'base' => 'node_content',
      'description' => t('Use time slots to define when sessions will occur.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
