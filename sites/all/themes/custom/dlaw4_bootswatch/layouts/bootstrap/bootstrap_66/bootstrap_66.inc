<?php

/**
 * Implements hook_panels_layouts().
 */
function dlaw4_bootswatch_bootstrap_66_panels_layouts() {
  $items['bootstrap_66'] = array(
    'title' => t('UI Bootstrap 66 Layout'),
    'category' => t('Bootstrap'),
    'icon' => 'bootstrap_66.png',
    'theme' => 'bootstrap_66',
    'admin css' => '../bootstrap_panels_admin.css',
    'regions' => array(
      
      'top' => t('Top Title'),

      'top_row' => t('Top Row'),
      
      '1_6_a' => t('1_6_a'),
      '1_6_well' => t('1_6_well'),
      '1_6_b' => t('1_6_b'),

      'bottom' => t('bottom'),
    ),
  );

  return $items;
}
