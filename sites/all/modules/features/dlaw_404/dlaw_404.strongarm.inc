<?php
/**
 * @file
 * dlaw_404.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dlaw_404_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_404';
  $strongarm->value = '404-not-found';
  $export['site_404'] = $strongarm;

  return $export;
}
