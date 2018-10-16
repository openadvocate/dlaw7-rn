<?php
/**
 * @file
 * dlaw4_basic_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dlaw4_basic_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contact_list_by_term';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Display Contact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact List by Term';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'contact-list-by-term';

  /* Display: Contacts */
  $handler = $view->new_display('block', 'Contacts', 'contact_block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';

  /* Display: Contact phone-website-email-address */
  $handler = $view->new_display('panel_pane', 'Contact phone-website-email-address', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = '';
  $handler->display->display_options['fields']['field_contact_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['text'] = '<span class="fa fa-phone"></span> [field_contact_phone]';
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_phone']['type'] = 'telephone_link';
  $handler->display->display_options['fields']['field_contact_phone']['settings'] = array(
    'title' => '',
  );
  $handler->display->display_options['fields']['field_contact_phone']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contact_phone']['multi_type'] = 'ul';
  /* Field: Content: Website URL */
  $handler->display->display_options['fields']['field_contact_url']['id'] = 'field_contact_url';
  $handler->display->display_options['fields']['field_contact_url']['table'] = 'field_data_field_contact_url';
  $handler->display->display_options['fields']['field_contact_url']['field'] = 'field_contact_url';
  $handler->display->display_options['fields']['field_contact_url']['label'] = '';
  $handler->display->display_options['fields']['field_contact_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contact_url']['alter']['text'] = '<span class="fa fa-globe"></span> [field_contact_url]';
  $handler->display->display_options['fields']['field_contact_url']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_contact_url']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_contact_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_contact_url']['type'] = 'link_domain';
  $handler->display->display_options['fields']['field_contact_url']['settings'] = array(
    'strip_www' => 1,
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<span class="fa fa-envelope-o" ></span> [field_email]';
  $handler->display->display_options['fields']['field_email']['alter']['max_length'] = '15';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Address */
  $handler->display->display_options['fields']['field_contact_address']['id'] = 'field_contact_address';
  $handler->display->display_options['fields']['field_contact_address']['table'] = 'field_data_field_contact_address';
  $handler->display->display_options['fields']['field_contact_address']['field'] = 'field_contact_address';
  $handler->display->display_options['fields']['field_contact_address']['label'] = '';
  $handler->display->display_options['fields']['field_contact_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contact_address']['alter']['text'] = '<span class="glyphicon glyphicon-map-marker"></span>[field_contact_address]';
  $handler->display->display_options['fields']['field_contact_address']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_contact_address']['alter']['path'] = 'http://maps.google.com/maps?q=[field_contact_address]';
  $handler->display->display_options['fields']['field_contact_address']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_contact_address']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_contact_address']['alter']['alt'] = 'Address';
  $handler->display->display_options['fields']['field_contact_address']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_contact_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_contact_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="row contact-details">
  <div class="col-sm-6 contact_row_1">
    <div class="field_contact_address"><span class="glyphicon glyphicon-map-marker"></span>[field_contact_address]</div>
  </div>
  <div class="col-sm-6 contact_row_2">
    <div class="field_contact_phone">[field_contact_phone]</div>
    <div class="field_contact_url">[field_contact_url]</div>
    <div class="field_email">[field_email]</div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Fax */
  $handler->display->display_options['fields']['field_contact_fax']['id'] = 'field_contact_fax';
  $handler->display->display_options['fields']['field_contact_fax']['table'] = 'field_data_field_contact_fax';
  $handler->display->display_options['fields']['field_contact_fax']['field'] = 'field_contact_fax';
  $handler->display->display_options['fields']['field_contact_fax']['label'] = '';
  $handler->display->display_options['fields']['field_contact_fax']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contact_fax']['alter']['text'] = '<span class="fa fa-print" href=""></span> [field_contact_fax] <span class="fiel_fax_span">FAX</span>';
  $handler->display->display_options['fields']['field_contact_fax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_fax']['type'] = 'telephone_link';
  $handler->display->display_options['fields']['field_contact_fax']['settings'] = array(
    'title' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Contact nsmi-zip-lang */
  $handler = $view->new_display('panel_pane', 'Contact nsmi-zip-lang', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_category' => 'field_category',
    'field_tags' => 'field_tags',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['alter']['link_class'] = 'label label-default';
  $handler->display->display_options['fields']['field_category']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_category']['element_label_class'] = 'meta_label';
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Zip Code */
  $handler->display->display_options['fields']['field_zipcode']['id'] = 'field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['table'] = 'field_data_field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['field'] = 'field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['label'] = 'ZIP';
  $handler->display->display_options['fields']['field_zipcode']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_zipcode']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_zipcode']['element_label_class'] = 'meta_label';
  $handler->display->display_options['fields']['field_zipcode']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_zipcode']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_zipcode']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_zipcode']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_zipcode']['delta_offset'] = '0';
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['label'] = 'Languages';
  $handler->display->display_options['fields']['field_language']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_language']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_language']['element_label_class'] = 'meta_label';
  $handler->display->display_options['fields']['field_language']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_language']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_language']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_language']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_language']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['contact_list_by_term'] = $view;

  $view = new view();
  $view->name = 'quark_fields';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Quark Fields';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: QR Code vCard */
  $handler->display->display_options['fields']['field_qr_vcard']['id'] = 'field_qr_vcard';
  $handler->display->display_options['fields']['field_qr_vcard']['table'] = 'field_data_field_qr_vcard';
  $handler->display->display_options['fields']['field_qr_vcard']['field'] = 'field_qr_vcard';
  $handler->display->display_options['fields']['field_qr_vcard']['label'] = '';
  $handler->display->display_options['fields']['field_qr_vcard']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_qr_vcard']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_qr_vcard']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_qr_vcard']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="vCardAccordeon" class="panel-group">
  <div class="panel panel-default">
    <div class="panel-heading">
      <h4 class="panel-title">
        <a href="#collapseOne" data-parent="#accordion" data-toggle="collapse" class="collapsed"><i class="fa fa-qrcode fa-lg"></i> vCard </a>
        <span class="pull-right"><a href=/v-card/[nid]><i class="fa fa-download fa-lg"></i></a></span>
      </h4>
    </div>
    <div class="panel-collapse collapse" id="collapseOne" style="height: 0px;">
      <div class="panel-body text-center">
       [field_qr_vcard]
      </div>
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );

  /* Display: vCard */
  $handler = $view->new_display('block', 'vCard', 'block_1');

  /* Display: vCard Pane */
  $handler = $view->new_display('panel_pane', 'vCard Pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: vEvent Pane */
  $handler = $view->new_display('panel_pane', 'vEvent Pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: vEvent */
  $handler->display->display_options['fields']['field_vevent']['id'] = 'field_vevent';
  $handler->display->display_options['fields']['field_vevent']['table'] = 'field_data_field_vevent';
  $handler->display->display_options['fields']['field_vevent']['field'] = 'field_vevent';
  $handler->display->display_options['fields']['field_vevent']['label'] = '';
  $handler->display->display_options['fields']['field_vevent']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vevent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vevent']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_vevent']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="vCardAccordeon" class="panel-group">
  <div class="panel panel-default">
    <div class="panel-heading">
      <h4 class="panel-title">
        <a href="#collapseOne" data-parent="#accordion" data-toggle="collapse" class="collapsed"><i class="fa fa-calendar fa-lg"></i> vEvent </a>
        <span class="pull-right"><a href=/v-event/[nid]><i class="fa fa-download fa-lg"></i></a></span>
      </h4>
    </div>
    <div class="panel-collapse collapse" id="collapseOne" style="height: 0px;">
      <div class="panel-body text-center">
       [field_vevent]
      </div>
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['quark_fields'] = $view;

  return $export;
}
