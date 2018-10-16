<?php

/**
 *  Callback for menu admin/dashboard/settings/openreferral.
 */
function dlaw_openreferral_settings_form() {
  $form['openreferral_base'] = array(
    '#type' => 'textfield',
    '#title' => t('Open Referral API Base URL'),
    '#default_value' => variable_get('dlaw_openreferral_base_url', ''),
  );

  $form['openreferral_api_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Open Referral API Key'),
    '#default_value' => variable_get('dlaw_openreferral_api_key', ''),
  );

  $host = $_SERVER['REQUEST_SCHEME'] . '://' . $_SERVER['HTTP_HOST'];

  $instruction = <<< TXT
  <div class="well">
    Follow these steps to enable <a href="http://docs.openreferral.org/en/1.1/reference">Open Referral</a>
    <ul>
      <li>
        Build airtable data.<br>
        See <a href="https://airtable.com/shrorZeLSK0jAcKzt">sample data</a><br>
      </li>
      <li>
        Three tables will be exposed along with datapackage.json.<br>
        - {$host}/openreferral/datapackage.json<br>
        - {$host}/openreferral/organizations.csv<br>
        - {$host}/openreferral/phones.csv<br>
        - {$host}/openreferral/postal_addresses.csv
      </li>
      <li>
        Enter your airtable's API base URL. The URL looks like,<br>
        https://api.airtable.com/v0/appwGOAzGx8vVPKDi
      </li>
      <li>
        Allow your airtable to be shared by OpenAdvocate admin to have access to the airtable.
      </li>
    </ul>
    <p>Note that fetching airtable data can take as long as 30 seconds. Once cached, it will be quick.</p>
  </div>
TXT;

  $form['instruction'] = array(
    '#markup' => $instruction
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Save settings',
  );

  $form['actions']['test'] = array(
    '#type' => 'submit',
    '#value' => 'Test connection',
    '#submit' => array('dlaw_openreferral_settings_form_test'),
  );

  $form['actions']['purge_cache'] = array(
    '#type' => 'submit',
    '#value' => 'Purge cache',
    '#submit' => array('dlaw_openreferral_settings_form_purge_cache'),
  );

  return $form;
}

/**
 * Validate handler for dlaw_openreferral_settings_form().
 */
function dlaw_openreferral_settings_form_validate($form, $form_state) {
  $values = $form_state['values'];

  if (strpos($values['openreferral_base'], 'api.airtable.com') === FALSE) {
    form_set_error('openreferral_base', 'The API base URL is not correct.');
  }

  if (!$values['openreferral_api_key']) {
    form_set_error('openreferral_api_key', 'API Key is missing');
  }
}

/**
 * Submit handler for dlaw_openreferral_settings_form().
 */
function dlaw_openreferral_settings_form_submit($form, $form_state) {
  $values = $form_state['values'];
  variable_set('dlaw_openreferral_base_url', $values['openreferral_base']);
  variable_set('dlaw_openreferral_api_key', $values['openreferral_api_key']);

  drupal_set_message('Settings saved successfully.');
}

function dlaw_openreferral_settings_form_test($form, $form_state) {
  $api_key = variable_get('dlaw_openreferral_api_key', '');
  $or_base_url = variable_get('dlaw_openreferral_base_url', '');

  if (!$api_key) {
    form_set_error('', 'API key missing.');
  }

  if (!$or_base_url) {
    form_set_error('', 'Open Referral API Base URL missing.');
  }

  if ($api_key and $or_base_url) {
    $airtable = drupal_http_request($or_base_url . "/organizations", array('headers' => array('Authorization' => 'Bearer ' . $api_key)));

    if ($airtable->code == 200 and $airtable->status_message == 'OK') {
      drupal_set_message('Test run successfully.');
    }
    else {
      form_set_error('', 'Connection failed.');
    }
  }
}

function dlaw_openreferral_settings_form_purge_cache($form, $form_state) {
  variable_del('openreferral_cache');

  $pages = array('datapackage.json', 'organizations.csv', 'phones.csv', 'postal_addresses.csv');
  foreach ($pages as $page) {
    $url = url("openreferral/$page", array('absolute' => TRUE));
    cache_clear_all($url, 'cache_page');
  }

  drupal_set_message('Purged Open Referral cache successfully. When you make changes to airtable, purge cache to fetch the latest data.');
}
