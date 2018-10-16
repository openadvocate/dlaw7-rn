<?php
/**
 * @file
 * dlaw5_linkchecker.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dlaw5_linkchecker_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
