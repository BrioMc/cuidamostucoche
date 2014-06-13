<?php
/**
 * @file
 * f_theme_cuidamostucoche.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_theme_cuidamostucoche_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_theme_cuidamostucoche_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
