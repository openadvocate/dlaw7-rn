<?php
/**
 * @file
 * dlaw4_section.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dlaw4_section_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-field_section'
  $field_instances['node-page-field_section'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Start typing the title of pages.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section',
    'label' => 'Child pages',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 11,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Child pages');
  t('Start typing the title of pages.');

  return $field_instances;
}
