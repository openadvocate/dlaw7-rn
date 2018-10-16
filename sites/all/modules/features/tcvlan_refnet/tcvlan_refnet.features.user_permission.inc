<?php
/**
 * @file
 * tcvlan_refnet.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tcvlan_refnet_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create referral content'.
  $permissions['create referral content'] = array(
    'name' => 'create referral content',
    'roles' => array(
      'network user' => 'network user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any referral content'.
  $permissions['delete any referral content'] = array(
    'name' => 'delete any referral content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own referral content'.
  $permissions['delete own referral content'] = array(
    'name' => 'delete own referral content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any referral content'.
  $permissions['edit any referral content'] = array(
    'name' => 'edit any referral content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own referral content'.
  $permissions['edit own referral content'] = array(
    'name' => 'edit own referral content',
    'roles' => array(
      'network user' => 'network user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
