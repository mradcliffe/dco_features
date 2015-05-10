<?php
/**
 * @file
 * dco_base.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function dco_base_user_default_roles() {
  $roles = array();

  // Exported role: attendee manager.
  $roles['attendee manager'] = array(
    'name' => 'attendee manager',
    'weight' => 0,
  );

  // Exported role: camp organizer.
  $roles['camp organizer'] = array(
    'name' => 'camp organizer',
    'weight' => 0,
  );

  // Exported role: site administrator.
  $roles['site administrator'] = array(
    'name' => 'site administrator',
    'weight' => 0,
  );

  return $roles;
}
