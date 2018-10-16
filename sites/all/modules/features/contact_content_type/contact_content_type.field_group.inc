<?php
/**
 * @file
 * contact_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function contact_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_language|node|contact|form';
  $field_group->group_name = 'group_language';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Language',
    'weight' => '10',
    'children' => array(
      0 => 'field_language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-language field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_language|node|contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_library|node|contact|form';
  $field_group->group_name = 'group_library';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Topics',
    'weight' => '7',
    'children' => array(
      0 => 'field_category',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Topics',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-library field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_library|node|contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_region|node|contact|form';
  $field_group->group_name = 'group_region';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Region',
    'weight' => '9',
    'children' => array(
      0 => 'field_region',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-region field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_region|node|contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|contact|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '8',
    'children' => array(
      0 => 'field_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tags field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tags|node|contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_zipcode|node|contact|form';
  $field_group->group_name = 'group_zipcode';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Zip Code',
    'weight' => '9',
    'children' => array(
      0 => 'field_zipcode',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-zipcode field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_zipcode|node|contact|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Language');
  t('Region');
  t('Tags');
  t('Topics');
  t('Zip Code');

  return $field_groups;
}
