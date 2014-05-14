<?php
/**
 * @file
 * site_information.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function site_information_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
