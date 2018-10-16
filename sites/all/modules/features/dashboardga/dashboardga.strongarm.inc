<?php
/**
 * @file
 * dashboardga.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dashboardga_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_site_search';
  $strongarm->value = 1;
  $export['googleanalytics_site_search'] = $strongarm;

  return $export;
}
