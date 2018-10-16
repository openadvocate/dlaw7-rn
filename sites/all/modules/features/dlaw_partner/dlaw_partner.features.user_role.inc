<?php
/**
 * @file
 * dlaw_partner.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function dlaw_partner_user_default_roles() {
  $roles = array();

  // Exported role: partner.
  $roles['partner'] = array(
    'name' => 'partner',
    'weight' => 4,
  );

  return $roles;
}
