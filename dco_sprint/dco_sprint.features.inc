<?php
/**
 * @file
 * dco_sprint.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dco_sprint_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dco_sprint_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dco_sprint_node_info() {
  $items = array(
    'sprint' => array(
      'name' => t('Sprint'),
      'base' => 'node_content',
      'description' => t('A code sprint is a way to gather all types of contributors in a space to improve Drupal core or a contributed module. You may suggest a sprint idea.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
