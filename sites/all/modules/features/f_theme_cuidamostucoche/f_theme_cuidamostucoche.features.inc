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