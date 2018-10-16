<?php
/**
 * @file
 * dlaw_scheduler.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dlaw_scheduler_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(),
    'module' => 'scheduler',
  );

  // Exported permission: 'schedule publishing of nodes'.
  $permissions['schedule publishing of nodes'] = array(
    'name' => 'schedule publishing of nodes',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'view scheduled content'.
  $permissions['view scheduled content'] = array(
    'name' => 'view scheduled content',
    'roles' => array(),
    'module' => 'scheduler',
  );

  return $permissions;
}
