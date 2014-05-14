<?php
/**
 * @file
 * type_post.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function type_post_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function type_post_node_info() {
  $items = array(
    'post' => array(
      'name' => t('Post'),
      'base' => 'node_content',
      'description' => t('Post, entrada al blog.'),
      'has_title' => '1',
      'title_label' => t('post'),
      'help' => '',
    ),
  );
  return $items;
}