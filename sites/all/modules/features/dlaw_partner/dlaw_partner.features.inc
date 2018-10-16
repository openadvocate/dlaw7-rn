<?php
/**
 * @file
 * dlaw_partner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dlaw_partner_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dlaw_partner_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dlaw_partner_node_info() {
  $items = array(
    'partner' => array(
      'name' => t('Organization'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Organization Name'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_pet().
 */
function dlaw_partner_default_pet() {
  $items = array();
  $items['organization_request_approved'] = entity_import('pet', '{
    "name" : "organization_request_approved",
    "title" : "Organization request - approved",
    "subject" : "Your new organization request at [site:name]",
    "mail_body" : "Hi,\\r\\n\\r\\nWe are glad to inform you that your organization request at [site:name] has been approved. Please visit the new organization page at [node:url] and request to join. After logging in, you will be able to fill in further details for the new organization.\\r\\n\\r\\nThank you.\\r\\n\\r\\n--  [site:name] team",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : "",
    "rdf_mapping" : []
  }');
  $items['partner_join_request_denied'] = entity_import('pet', '{
    "name" : "partner_join_request_denied",
    "title" : "Network user join request - denied",
    "subject" : "Your join request at [site:name]",
    "mail_body" : "Hi,\\r\\n\\r\\nWe regret to inform you that your partner join request at [site:name] has been denied. Please contact us if you\\u0027d like to provide more info for reconsideration.\\r\\n\\r\\nThank you.\\r\\n\\r\\n--  [site:name] team",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : "",
    "rdf_mapping" : []
  }');
  $items['referral_organization_accepted'] = entity_import('pet', '{
    "name" : "referral_organization_accepted",
    "title" : "Referral Organization - accepted",
    "subject" : "Your Referral has been accepted at [site:name]",
    "mail_body" : "Hi,\\r\\n\\r\\nWe are glad to inform you that your Referral at [site:name] has been accepted. Please visit your Referral dashboard to continue, [site:url]user.\\r\\n\\r\\n- Referral: [node:title]\\r\\n\\r\\nThank you.\\r\\n\\r\\n--  [site:name] team",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : "",
    "rdf_mapping" : []
  }');
  $items['referral_organization_certified'] = entity_import('pet', '{
    "name" : "referral_organization_certified",
    "title" : "Referral Organization - certified",
    "subject" : "Your Referral has been confirmed no conflict at [site:name]",
    "mail_body" : "Hi,\\r\\n\\r\\nWe are glad to inform you that your Referral at [site:name] has been confirmed no conflict. Please visit your Referral dashboard to continue, [site:url]user.\\r\\n\\r\\n- Referral: [node:title]\\r\\n\\r\\nThank you.\\r\\n\\r\\n--  [site:name] team",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : "",
    "rdf_mapping" : []
  }');
  $items['referral_organization_invited'] = entity_import('pet', '{
    "name" : "referral_organization_invited",
    "title" : "Referral Organization - invited",
    "subject" : "Your organization has been invited to a Referral at [site:name]",
    "mail_body" : "Hi,\\r\\n\\r\\nYour organization at [site:name] has been invited to a Referral, \\u0022[node:title]\\u0022. Please visit your Referral dashboard to respond, [site:url]user. If you don\\u0027t respond in time, the Referral can be accepted by other organizations.\\r\\n\\r\\nThank you.\\r\\n\\r\\n--  [site:name] team",
    "mail_body_plain" : null,
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : "",
    "rdf_mapping" : []
  }');
  return $items;
}
