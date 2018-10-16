<?php
/**
 * @file
 * roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  // Exported role: manager.
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => 2,
  );

  // Exported role: network user.
  $roles['network user'] = array(
    'name' => 'network user',
    'weight' => 4,
  );

  return $roles;
}
