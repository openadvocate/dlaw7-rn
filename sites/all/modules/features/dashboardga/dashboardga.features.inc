<?php
/**
 * @file
 * dashboardga.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dashboardga_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
