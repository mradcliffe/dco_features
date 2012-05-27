<?php
/**
 * @file
 * dco_session.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function dco_session_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'rooms';
  $context->description = 'Display sessions on rooms';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'room' => 'room',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sessions-block_5' => array(
          'module' => 'views',
          'delta' => 'sessions-block_5',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display sessions on rooms');
  $export['rooms'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'timeslot_sessions';
  $context->description = 'Timeslot Sessions';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'time_slot' => 'time_slot',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sessions-block_6' => array(
          'module' => 'views',
          'delta' => 'sessions-block_6',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Timeslot Sessions');
  $export['timeslot_sessions'] = $context;

  return $export;
}
