<?php
/**
 * @file
 * dlaw_partner.captcha.inc
 */

/**
 * Implements hook_captcha_default_points().
 */
function dlaw_partner_captcha_default_points() {
  $export = array();

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'webform_client_form_87';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['webform_client_form_87'] = $captcha;

  return $export;
}
