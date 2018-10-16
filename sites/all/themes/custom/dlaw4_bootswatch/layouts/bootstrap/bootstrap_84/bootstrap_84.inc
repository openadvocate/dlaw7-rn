<?php

/**
 * Implements hook_panels_layouts().
 */
function dlaw4_bootswatch_bootstrap_84_panels_layouts() {
  $items['bootstrap_84'] = array(
    'title' => t('UI Bootstrap 84 Layout'),
    'category' => t('Bootstrap'),
    'icon' => 'bootstrap_84.png',
    'theme' => 'bootstrap_84',
    'admin css' => '../bootstrap_panels_admin.css',
    'regions' => array(
      
      'top' => t('Top Title'),

      'top_row' => t('Top Row'),
      
      '1_8' => t('1_8'),
      '1_4_well' => t('1_4_well'),
      '1_4' => t('1_4'),

      'bottom' => t('bottom'),
    ),
  );

  return $items;
}
