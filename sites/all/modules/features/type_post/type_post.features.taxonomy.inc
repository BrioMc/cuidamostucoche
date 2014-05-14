<?php
/**
 * @file
 * type_post.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function type_post_taxonomy_default_vocabularies() {
  return array(
    'categoria' => array(
      'name' => 'Categoria',
      'machine_name' => 'categoria',
      'description' => 'categoria',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
