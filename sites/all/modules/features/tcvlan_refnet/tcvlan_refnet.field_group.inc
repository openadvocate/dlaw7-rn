<?php
/**
 * @file
 * tcvlan_refnet.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tcvlan_refnet_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|referral|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'referral';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '4',
    'children' => array(
      0 => 'field_ref_legal_services',
      1 => 'field_ref_non_legal_services',
      2 => 'field_ref_direct_services',
      3 => 'field_ref_service_area',
      4 => 'field_ref_cities',
      5 => 'field_ref_population',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-categories field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_categories|node|referral|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Categories');

  return $field_groups;
}
