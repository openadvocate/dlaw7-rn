<?php
/**
 * @file
 * page_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function page_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attachments|node|page|form';
  $field_group->group_name = 'group_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attachments',
    'weight' => '14',
    'children' => array(
      0 => 'field_attachments',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-attachments field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_attachments|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_calendar|node|page|form';
  $field_group->group_name = 'group_calendar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event',
    'weight' => '6',
    'children' => array(
      0 => 'field_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Event',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-calendar field-group-tab',
        'description' => 'Add date to have the post appear in events list.',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_calendar|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_feature_image|node|page|form';
  $field_group->group_name = 'group_feature_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Feature Image',
    'weight' => '4',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Feature Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-feature-image field-group-tab',
        'description' => 'This image is displayed in search results and home page slideshow.',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_feature_image|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_glossary|node|page|form';
  $field_group->group_name = 'group_glossary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Glossary',
    'weight' => '12',
    'children' => array(
      0 => 'field_page_glossary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Glossary',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_glossary|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_icon|taxonomy_term|category|form';
  $field_group->group_name = 'group_icon';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Icon',
    'weight' => '5',
    'children' => array(
      0 => 'field_category_icon',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Icon',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-icon field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_icon|taxonomy_term|category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|node|page|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '2',
    'children' => array(
      0 => 'field_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Images',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-images field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_images|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_language|node|page|form';
  $field_group->group_name = 'group_language';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Language',
    'weight' => '11',
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
  $field_groups['group_language|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_library|node|page|form';
  $field_group->group_name = 'group_library';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Topics',
    'weight' => '8',
    'children' => array(
      0 => 'field_category',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Topics',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-library field-group-tab',
        'description' => 'Add to (NSMI) Topics.',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_library|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|node|page|form';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '13',
    'children' => array(
      0 => 'field_links',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-links field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_links|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news|node|page|form';
  $field_group->group_name = 'group_news';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'News',
    'weight' => '5',
    'children' => array(
      0 => 'field_news',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-news field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_news|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_region|node|page|form';
  $field_group->group_name = 'group_region';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
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
  $field_groups['group_region|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section|node|page|form';
  $field_group->group_name = 'group_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section',
    'weight' => '7',
    'children' => array(
      0 => 'field_section',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Create a section to group related pages. To make this page a section, add child pages. A child page can only belong to one section.',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_section|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|page|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '9',
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
  $field_groups['group_tags|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_zipcode|node|page|form';
  $field_group->group_name = 'group_zipcode';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Zip Code',
    'weight' => '10',
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
  $field_groups['group_zipcode|node|page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Attachments');
  t('Event');
  t('Feature Image');
  t('Glossary');
  t('Icon');
  t('Images');
  t('Language');
  t('Links');
  t('News');
  t('Region');
  t('Section');
  t('Tags');
  t('Topics');
  t('Zip Code');

  return $field_groups;
}
