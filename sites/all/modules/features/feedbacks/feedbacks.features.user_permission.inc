<?php
/**
 * @file
 * feedbacks.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feedbacks_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'comment',
  );

  return $permissions;
}
