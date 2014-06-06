<?php
/**
 * @file
 * f_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_buscador:http://cuidamostucoche.com/
  $menu_links['main-menu_buscador:http://cuidamostucoche.com/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://cuidamostucoche.com/',
    'router_path' => '',
    'link_title' => 'BUSCADOR',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_buscador:http://cuidamostucoche.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_conoce:http://cuidamostucoche.com/conocenos
  $menu_links['main-menu_conoce:http://cuidamostucoche.com/conocenos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://cuidamostucoche.com/conocenos',
    'router_path' => '',
    'link_title' => 'CONOCE',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_conoce:http://cuidamostucoche.com/conocenos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_ofertas:http://cuidamostucoche.com/ofertas
  $menu_links['main-menu_ofertas:http://cuidamostucoche.com/ofertas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://cuidamostucoche.com/ofertas',
    'router_path' => '',
    'link_title' => 'OFERTAS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_ofertas:http://cuidamostucoche.com/ofertas',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_talleres:http://cuidamostucoche.com/talleres
  $menu_links['main-menu_talleres:http://cuidamostucoche.com/talleres'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://cuidamostucoche.com/talleres',
    'router_path' => '',
    'link_title' => 'TALLERES',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_talleres:http://cuidamostucoche.com/talleres',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_wiki:http://cuidamostucoche.com/wiki
  $menu_links['main-menu_wiki:http://cuidamostucoche.com/wiki'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://cuidamostucoche.com/wiki',
    'router_path' => '',
    'link_title' => 'WIKI',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_wiki:http://cuidamostucoche.com/wiki',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: management_main-menu:admin/structure/menu/manage/main-menu
  $menu_links['management_main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'identifier' => 'management_main-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_user-menu:admin/structure/menu/manage/user-menu
  $menu_links['management_user-menu:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User menu',
    'options' => array(
      'identifier' => 'management_user-menu:admin/structure/menu/manage/user-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: user-menu_log-out:user/logout
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('BUSCADOR');
  t('CONOCE');
  t('Log out');
  t('Main menu');
  t('OFERTAS');
  t('TALLERES');
  t('User account');
  t('User menu');
  t('WIKI');


  return $menu_links;
}
