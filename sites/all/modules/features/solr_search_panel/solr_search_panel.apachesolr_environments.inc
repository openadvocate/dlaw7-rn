<?php
/**
 * @file
 * solr_search_panel.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function solr_search_panel_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:8983/solr/dlaw4';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_direct_commit' => 0,
    'apachesolr_index_last' => array(
      'node' => array(
        'last_changed' => '1396989281',
        'last_entity_id' => '13',
      ),
    ),
    'apachesolr_index_updated' => 0,
    'apachesolr_last_optimize' => 1396989444,
    'apachesolr_read_only' => '0',
    'apachesolr_search_facet_pages' => '',
    'apachesolr_soft_commit' => 0,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'contact',
      1 => 'page',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
