<?php
/**
 * @file
 * page_content_type.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function page_content_type_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-section.
  $menus['menu-section'] = array(
    'menu_name' => 'menu-section',
    'title' => 'Section',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Section');

  return $menus;
}
