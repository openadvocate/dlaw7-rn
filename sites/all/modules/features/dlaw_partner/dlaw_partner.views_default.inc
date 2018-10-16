<?php
/**
 * @file
 * dlaw_partner.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dlaw_partner_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'org_list';
  $view->description = 'Admin list of Organizations';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Org list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Organizations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'changed' => 'changed',
    'field_partner_accepting_ref' => 'field_partner_accepting_ref',
    'field_partner_network' => 'field_partner_network',
    'uid' => 'uid',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_partner_accepting_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_partner_network' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No results.';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_user_organization_user']['id'] = 'reverse_field_user_organization_user';
  $handler->display->display_options['relationships']['reverse_field_user_organization_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_user_organization_user']['field'] = 'reverse_field_user_organization_user';
  $handler->display->display_options['relationships']['reverse_field_user_organization_user']['label'] = 'User referencing org';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Organization';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last Edited';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: COUNT(User: Uid) */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'reverse_field_user_organization_user';
  $handler->display->display_options['fields']['uid']['group_type'] = 'count';
  $handler->display->display_options['fields']['uid']['label'] = 'Team';
  /* Field: Content: Accepting Referrals */
  $handler->display->display_options['fields']['field_partner_accepting_ref']['id'] = 'field_partner_accepting_ref';
  $handler->display->display_options['fields']['field_partner_accepting_ref']['table'] = 'field_data_field_partner_accepting_ref';
  $handler->display->display_options['fields']['field_partner_accepting_ref']['field'] = 'field_partner_accepting_ref';
  /* Field: Content: Network Partner */
  $handler->display->display_options['fields']['field_partner_network']['id'] = 'field_partner_network';
  $handler->display->display_options['fields']['field_partner_network']['table'] = 'field_data_field_partner_network';
  $handler->display->display_options['fields']['field_partner_network']['field'] = 'field_partner_network';
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
    'partner' => 'partner',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Accepting Referrals (field_partner_accepting_ref) */
  $handler->display->display_options['filters']['field_partner_accepting_ref_value']['id'] = 'field_partner_accepting_ref_value';
  $handler->display->display_options['filters']['field_partner_accepting_ref_value']['table'] = 'field_data_field_partner_accepting_ref';
  $handler->display->display_options['filters']['field_partner_accepting_ref_value']['field'] = 'field_partner_accepting_ref_value';
  $handler->display->display_options['filters']['field_partner_accepting_ref_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_partner_accepting_ref_value']['expose']['operator_id'] = 'field_partner_accepting_ref_value_op';
  $handler->display->display_options['filters']['field_partner_accepting_ref_value']['expose']['label'] = 'Accepting Referrals';
  $handler->display->display_options['filters']['field_partner_accepting_ref_value']['expose']['operator'] = 'field_partner_accepting_ref_value_op';
  $handler->display->display_options['filters']['field_partner_accepting_ref_value']['expose']['identifier'] = 'accref';
  $handler->display->display_options['filters']['field_partner_accepting_ref_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Network Partner (field_partner_network) */
  $handler->display->display_options['filters']['field_partner_network_value']['id'] = 'field_partner_network_value';
  $handler->display->display_options['filters']['field_partner_network_value']['table'] = 'field_data_field_partner_network';
  $handler->display->display_options['filters']['field_partner_network_value']['field'] = 'field_partner_network_value';
  $handler->display->display_options['filters']['field_partner_network_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_partner_network_value']['expose']['operator_id'] = 'field_partner_network_value_op';
  $handler->display->display_options['filters']['field_partner_network_value']['expose']['label'] = 'Network Partner';
  $handler->display->display_options['filters']['field_partner_network_value']['expose']['operator'] = 'field_partner_network_value_op';
  $handler->display->display_options['filters']['field_partner_network_value']['expose']['identifier'] = 'netpartner';
  $handler->display->display_options['filters']['field_partner_network_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/dashboard/refnet/orgs';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Organizations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['org_list'] = $view;

  $view = new view();
  $view->name = 'organization_contact_list';
  $view->description = 'Used for field_patner_contact';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Organization contact list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Contextual filter: User: Organization (field_user_organization) */
  $handler->display->display_options['arguments']['field_user_organization_target_id']['id'] = 'field_user_organization_target_id';
  $handler->display->display_options['arguments']['field_user_organization_target_id']['table'] = 'field_data_field_user_organization';
  $handler->display->display_options['arguments']['field_user_organization_target_id']['field'] = 'field_user_organization_target_id';
  $handler->display->display_options['arguments']['field_user_organization_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_user_organization_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_user_organization_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_user_organization_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_organization_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['organization_contact_list'] = $view;

  return $export;
}
