<?php
/**
 * @file
 * dco_sponsor.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function dco_sponsor_user_default_roles() {
  $roles = array();

  // Exported role: sponsor organizer.
  $roles['sponsor organizer'] = array(
    'name' => 'sponsor organizer',
    'weight' => '0',
  );

  return $roles;
}
