<?php

/**
 * @file
 * Admin settings page.
 */

function seclogin_admin_page() {
  $form['seclogin_active'] = array(
    '#type' => 'checkbox',
    '#title' => t('Activate secure login'),
    '#default_value' => variable_get('seclogin_active', 0),
    '#description' => t('Check to force users to login at secure domain. Make sure the SSL works, and SSL and Regular domains are set.'),
  );

  $form['seclogin_ssl_domain'] = array(
    '#type' => 'textfield',
    '#title' => t('Secure domain'),
    '#default_value' => variable_get('seclogin_ssl_domain', ''),
    '#size' => 30,
    '#maxlength' => 255,
    '#description' => t('Domain where secure login is performed. e.g. abc.openadvocate.org'),
  );

  $form['seclogin_regular_domain'] = array(
    '#type' => 'textfield',
    '#title' => t('Regular domain'),
    '#default_value' => variable_get('seclogin_regular_domain', ''),
    '#size' => 30,
    '#maxlength' => 255,
    '#description' => t('Domain where regular operation (other than login) is performed. e.g. abc.org'),
  );

  return system_settings_form($form);
}

function seclogin_admin_page_validate($form, $form_state) {
  $val = $form_state['values'];

  if (!empty($val['seclogin_active'])) {
    if (empty($val['seclogin_ssl_domain'])) {
      form_set_error('seclogin_ssl_domain', 'Enter Secure domain');
    }

    if (empty($val['seclogin_regular_domain'])) {
      form_set_error('seclogin_regular_domain', 'Enter Regular domain');
    }
  }
}
