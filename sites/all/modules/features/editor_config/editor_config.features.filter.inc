<?php
/**
 * @file
 * editor_config.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function editor_config_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'soembed' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'soembed_maxwidth' => 500,
        ),
      ),
      'dlaw_iframe' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'sslimg' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 1,
    'filters' => array(
      'soembed' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'soembed_maxwidth' => 500,
        ),
      ),
      'dlaw_iframe' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'sslimg' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
