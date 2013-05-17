<?php
/**
 * @file
 * vrc_related_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vrc_related_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function vrc_related_content_views_api() {
  return array("version" => "3.0");
}
