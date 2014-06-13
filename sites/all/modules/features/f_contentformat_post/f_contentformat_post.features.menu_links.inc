<?php
/**
 * @file
 * f_contentformat_post.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_contentformat_post_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_aadir-post:node/add/post
  $menu_links['management_aadir-post:node/add/post'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add/post',
    'router_path' => 'node/add/post',
    'link_title' => 'Añadir Post',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_aadir-post:node/add/post',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_contenido:admin/content',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Añadir Post');


  return $menu_links;
}
