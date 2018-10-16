<?php
/**
 * @file
 * dlaw_seo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dlaw_seo_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'redirect',
  );

  return $permissions;
}
