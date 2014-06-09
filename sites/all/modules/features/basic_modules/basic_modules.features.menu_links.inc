<?php
/**
 * @file
 * basic_modules.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function basic_modules_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_backup-and-migrate:admin/config/system/backup_migrate
  $menu_links['management_backup-and-migrate:admin/config/system/backup_migrate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/backup_migrate',
    'router_path' => 'admin/config/system/backup_migrate',
    'link_title' => 'Backup and Migrate',
    'options' => array(
      'attributes' => array(
        'title' => 'Backup/restore your database or migrate data to or from another Drupal site.',
      ),
      'identifier' => 'management_backup-and-migrate:admin/config/system/backup_migrate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_sistema:admin/config/system',
  );
  // Exported menu link: management_coffee:admin/config/user-interface/coffee
  $menu_links['management_coffee:admin/config/user-interface/coffee'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/coffee',
    'router_path' => 'admin/config/user-interface/coffee',
    'link_title' => 'Coffee',
    'options' => array(
      'attributes' => array(
        'title' => 'Configuration for the Coffee module.',
      ),
      'identifier' => 'management_coffee:admin/config/user-interface/coffee',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_interfaz-de-usuario:admin/config/user-interface',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Backup and Migrate');
  t('Coffee');


  return $menu_links;
}
