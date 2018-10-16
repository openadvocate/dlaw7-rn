<?php

/**
 * Implements THEME_form_system_theme_settings_alter().
 */
function ember_dlaw4_form_system_theme_settings_alter(&$form, &$form_state) {
  $form['ember_dlaw4'] = array(
    '#type' => 'fieldset',
    '#title' => t('Ember_dlaw4 settings'),
    '#description' => t('Settings specific to Ember_dlaw4 theme.'),
  );
  $form['ember_dlaw4']['display_breadcrumbs'] = array(
    '#type' => 'checkbox',
    '#title' => t('Toggle Breadcrumbs'),
    '#default_value' => theme_get_setting('display_breadcrumbs'),
    '#description' => t('If checked, breadcrumbs will not display'),
  );
  $form['ember_dlaw4']['ember_dlaw4_no_fadein_effect'] = array(
    '#type' => 'checkbox',
    '#title' => t('Toggle fade-in effect'),
    '#default_value' => theme_get_setting('ember_dlaw4_no_fadein_effect'),
    '#description' => t('If checked, the fade-in effect will not occur.'),
  );
}
