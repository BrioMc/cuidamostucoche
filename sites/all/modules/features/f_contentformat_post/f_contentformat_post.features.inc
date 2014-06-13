<?php
/**
 * @file
 * f_contentformat_post.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_contentformat_post_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function f_contentformat_post_node_info() {
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
