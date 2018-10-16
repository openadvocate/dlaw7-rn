<?php
/**
 * @file
 * dlaw4_schema_org.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dlaw4_schema_org_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'schemaorg_ui_type_contact';
  $strongarm->value = 'ContactPoint';
  $export['schemaorg_ui_type_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'schemaorg_ui_type_page';
  $strongarm->value = 'Article';
  $export['schemaorg_ui_type_page'] = $strongarm;

  return $export;
}
