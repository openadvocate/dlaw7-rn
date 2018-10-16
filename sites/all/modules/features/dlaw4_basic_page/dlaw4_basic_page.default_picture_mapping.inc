<?php
/**
 * @file
 * dlaw4_basic_page.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function dlaw4_basic_page_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Side Image';
  $picture_mapping->machine_name = 'side_image';
  $picture_mapping->breakpoint_group = FALSE;
  $picture_mapping->mapping = array(
    'module.picture.empty_srcset' => array(
      '1x' => array(
        'mapping_type' => 'sizes',
        'sizes' => '(min-width:700px) 700px, 100vw',
        'sizes_image_styles' => array(
          'dlaw4_image' => 'dlaw4_image',
          'width_720' => 'width_720',
        ),
      ),
    ),
  );
  $export['side_image'] = $picture_mapping;

  return $export;
}
