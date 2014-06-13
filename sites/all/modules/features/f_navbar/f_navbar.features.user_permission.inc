<?php
/**
 * @file
 * f_navbar.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_navbar_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access navbar'.
  $permissions['access navbar'] = array(
    'name' => 'access navbar',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'navbar',
  );

  return $permissions;
}
