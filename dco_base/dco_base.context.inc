<?php
/**
 * @file
 * dco_base.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function dco_base_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_ui-section-front';
  $context->description = 'Front Page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sessions-block_4' => array(
          'module' => 'views',
          'delta' => 'sessions-block_4',
          'region' => 'top',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front Page');
  $export['context_ui-section-front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site-wide';
  $context->description = 'Site-Wide context';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => 1,
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-commerce_cart_block-block_1' => array(
          'module' => 'views',
          'delta' => 'commerce_cart_block-block_1',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-Sponsors-block_4' => array(
          'module' => 'views',
          'delta' => 'Sponsors-block_4',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views-tweets-block' => array(
          'module' => 'views',
          'delta' => 'tweets-block',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'views-attendee_warning-block_1' => array(
          'module' => 'views',
          'delta' => 'attendee_warning-block_1',
          'region' => 'regnotice',
          'weight' => '0',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Site-Wide context');
  $export['site-wide'] = $context;

  return $export;
}
