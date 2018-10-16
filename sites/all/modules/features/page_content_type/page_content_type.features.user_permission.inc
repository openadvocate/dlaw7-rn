<?php
/**
 * @file
 * page_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function page_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer menu-section menu items'.
  $permissions['administer menu-section menu items'] = array(
    'name' => 'administer menu-section menu items',
    'roles' => array(),
    'module' => 'menu_admin_per_menu',
  );

  return $permissions;
}
