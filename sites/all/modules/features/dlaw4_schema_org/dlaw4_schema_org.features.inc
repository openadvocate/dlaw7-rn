<?php
/**
 * @file
 * dlaw4_schema_org.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dlaw4_schema_org_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_rdf_default_mappings().
 */
function dlaw4_schema_org_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: contact
  $schemaorg['node']['contact'] = array(
    'rdftype' => array(
      0 => 'schema:ContactPoint',
      1 => 'sioc:Item',
      2 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_contact_address' => array(
      'predicates' => array(
        0 => 'schema:address',
      ),
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_contact_phone' => array(
      'predicates' => array(
        0 => 'schema:telephone',
      ),
    ),
    'field_contact_fax' => array(
      'predicates' => array(
        0 => 'schema:faxNumber',
      ),
    ),
    'field_contact_url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
    ),
    'field_email' => array(
      'predicates' => array(
        0 => 'schema:email',
      ),
    ),
    'field_region' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
  );

  // Exported RDF mapping: page
  $schemaorg['node']['page'] = array(
    'rdftype' => array(
      0 => 'schema:Article',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'schema:articleBody',
        1 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_image' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_images' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_date' => array(
      'predicates' => array(),
    ),
    'field_location' => array(
      'predicates' => array(),
    ),
    'field_region' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
  );

  return $schemaorg;
}
