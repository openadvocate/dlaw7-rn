<?php
/**
 * @file
 * dlaw_partner.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dlaw_partner_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_partner_elig_criteria|node|partner|form';
  $field_group->group_name = 'group_partner_elig_criteria';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'partner';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Eligibility Criteria',
    'weight' => '11',
    'children' => array(
      0 => 'field_partner_criteria_desc',
      1 => 'field_partner_elig_criteria',
      2 => 'field_partner_elig_criteria_pub',
      3 => 'field_partner_pop_served',
      4 => 'field_partner_pop_served_other',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Eligibility Criteria',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-partner-elig-criteria field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_partner_elig_criteria|node|partner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_partner_language|node|partner|form';
  $field_group->group_name = 'group_partner_language';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'partner';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Language',
    'weight' => '12',
    'children' => array(
      0 => 'field_partner_lang',
      1 => 'field_partner_lang_method',
      2 => 'field_partner_lang_method_other',
      3 => 'field_partner_lang_other',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Language',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-partner-language field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_partner_language|node|partner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_partner_op|node|partner|form';
  $field_group->group_name = 'group_partner_op';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'partner';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Operations',
    'weight' => '7',
    'children' => array(
      0 => 'field_partner_hours',
      1 => 'field_partner_intake_hours',
      2 => 'field_partner_intake_method',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Operations',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-partner-op field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_partner_op|node|partner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_partner_org|node|partner|form';
  $field_group->group_name = 'group_partner_org';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'partner';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organization',
    'weight' => '2',
    'children' => array(
      0 => 'field_partner_branch',
      1 => 'field_partner_fax',
      2 => 'field_partner_phone1',
      3 => 'field_partner_phone2',
      4 => 'field_partner_phone_free',
      5 => 'field_partner_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Organization',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-partner-org field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_partner_org|node|partner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_partner_partnership|node|partner|form';
  $field_group->group_name = 'group_partner_partnership';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'partner';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Partnership',
    'weight' => '9',
    'children' => array(
      0 => 'field_partner_additional_info',
      1 => 'field_partner_network',
      2 => 'field_partner_contact',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Partnership',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-partner-partnership field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_partner_partnership|node|partner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_partner_ref|node|partner|form';
  $field_group->group_name = 'group_partner_ref';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'partner';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Referral (Visible to network only)',
    'weight' => '8',
    'children' => array(
      0 => 'field_partner_ref_cont_email',
      1 => 'field_partner_ref_cont_person',
      2 => 'field_partner_ref_email',
      3 => 'field_partner_ref_fax',
      4 => 'field_partner_ref_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Referral (Visible to network only)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-partner-ref field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_partner_ref|node|partner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_partner_service_area|node|partner|form';
  $field_group->group_name = 'group_partner_service_area';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'partner';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Service Area',
    'weight' => '10',
    'children' => array(
      0 => 'field_partner_county',
      1 => 'field_partner_city',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Service Area',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-partner-service-area field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_partner_service_area|node|partner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_partner_services|node|partner|form';
  $field_group->group_name = 'group_partner_services';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'partner';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Services',
    'weight' => '6',
    'children' => array(
      0 => 'field_partner_direct_services',
      1 => 'field_partner_legal_services',
      2 => 'field_partner_non_legal_services',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Services',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-partner-services field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_partner_services|node|partner|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Eligibility Criteria');
  t('Language');
  t('Operations');
  t('Organization');
  t('Partnership');
  t('Referral (Visible to network only)');
  t('Service Area');
  t('Services');

  return $field_groups;
}
