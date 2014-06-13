<?php
/**
 * @file
 * f_blocks.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_blocks_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_default_module';
  $strongarm->value = 'ds_search';
  $export['search_default_module'] = $strongarm;

  return $export;
}
