<?php
/**
 * @file
 * f_navbar.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_navbar_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'at_mobile_detect';
  $strongarm->value = FALSE;
  $export['at_mobile_detect'] = $strongarm;

  return $export;
}
