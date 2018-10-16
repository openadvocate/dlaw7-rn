<?php
/**
 * @file
 * dlaw4_footer_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function dlaw4_footer_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Site Footer Menu',
    'description' => 'Site footer menu appears in the footer region on every page.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Management');
  t('Site Footer Menu');
  t('Site footer menu appears in the footer region on every page.');
  t('The <em>Management</em> menu contains links for administrative tasks.');


  return $menus;
}
