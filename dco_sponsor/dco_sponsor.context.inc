<?php
/**
 * @file
 * dco_sponsor.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function dco_sponsor_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sponsors';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'sponsors' => 'sponsors',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-Sponsors-block_6' => array(
          'module' => 'views',
          'delta' => 'Sponsors-block_6',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-Sponsors-block_2' => array(
          'module' => 'views',
          'delta' => 'Sponsors-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-Sponsors-block_3' => array(
          'module' => 'views',
          'delta' => 'Sponsors-block_3',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-Sponsors-block_4' => array(
          'module' => 'views',
          'delta' => 'Sponsors-block_4',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-Sponsors-block_5' => array(
          'module' => 'views',
          'delta' => 'Sponsors-block_5',
          'region' => 'content',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sponsors'] = $context;

  return $export;
}
