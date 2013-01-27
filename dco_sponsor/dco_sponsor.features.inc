<?php
/**
 * @file
 * dco_sponsor.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function dco_sponsor_commerce_product_default_types() {
  $items = array(
    'product' => array(
      'type' => 'product',
      'name' => 'Product',
      'description' => 'A basic product type.',
      'help' => '',
      'revision' => '1',
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function dco_sponsor_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function dco_sponsor_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dco_sponsor_node_info() {
  $items = array(
    'product' => array(
      'name' => t('Product'),
      'base' => 'node_content',
      'description' => t('A product node that is related to a Commerce product.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => t('An event sponsor'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
