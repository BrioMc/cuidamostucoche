<?php
/**
 * @file
 * theme_setting.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function theme_setting_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}