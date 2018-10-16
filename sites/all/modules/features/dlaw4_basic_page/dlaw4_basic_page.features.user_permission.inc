<?php
/**
 * @file
 * dlaw4_basic_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dlaw4_basic_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view any unpublished content'.
  $permissions['view any unpublished content'] = array(
    'name' => 'view any unpublished content',
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
