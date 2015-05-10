<?php
/**
 * @file
 * dco_bof.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dco_bof_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dco_bof_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dco_bof_node_info() {
  $items = array(
    'bof' => array(
      'name' => t('Birds of a Feather'),
      'base' => 'node_content',
      'description' => t('A birds of a feather (BoF) session is an ad-hoc and informal meeting. You may submit a topic about anything - and most certainly someone else out there will be interested in talking about it! You may also sign-up for Birds of a Feather space during the event, but you may also start the discussion by creating a BoF session now and suggesting a date and time.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
