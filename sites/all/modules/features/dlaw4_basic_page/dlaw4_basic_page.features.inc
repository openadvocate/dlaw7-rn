<?php
/**
 * @file
 * dlaw4_basic_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dlaw4_basic_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_views_api().
 */
function dlaw4_basic_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function dlaw4_basic_page_image_default_styles() {
  $styles = array();

  // Exported image style: width_720.
  $styles['width_720'] = array(
    'label' => 'width_720',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 720,
          'height' => 405,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
