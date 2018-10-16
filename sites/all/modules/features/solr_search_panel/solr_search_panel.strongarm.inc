<?php
/**
 * @file
 * solr_search_panel.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function solr_search_panel_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_autocomplete_counts';
  $strongarm->value = 1;
  $export['apachesolr_autocomplete_counts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_autocomplete_suggest_keywords';
  $strongarm->value = 1;
  $export['apachesolr_autocomplete_suggest_keywords'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_autocomplete_suggest_spellcheck';
  $strongarm->value = 1;
  $export['apachesolr_autocomplete_suggest_spellcheck'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_autocomplete_widget';
  $strongarm->value = 'drupal';
  $export['apachesolr_autocomplete_widget'] = $strongarm;

  return $export;
}
