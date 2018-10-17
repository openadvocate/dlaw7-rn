<?php
/**
 * @file
 * tcvlan_refnet.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function tcvlan_refnet_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_a7ae1d98-4764-41e8-9e97-d4bc666e1dc1';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Referral',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'referral' => 'referral',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_66';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'top_row' => NULL,
      '1_6_a' => NULL,
      '1_6_well' => NULL,
      '1_6_b' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6f50fc99-57b2-4ed9-a91e-5dd08488a1b8';
  $display->storage_type = 'unknown';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e2c34a87-56ce-431b-be1a-ac1c0b846f74';
  $pane->panel = '1_6_a';
  $pane->type = 'block';
  $pane->subtype = 'tcvlan_refnet-tcvlan_referral_parties';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e2c34a87-56ce-431b-be1a-ac1c0b846f74';
  $display->content['new-e2c34a87-56ce-431b-be1a-ac1c0b846f74'] = $pane;
  $display->panels['1_6_a'][0] = 'new-e2c34a87-56ce-431b-be1a-ac1c0b846f74';
  $pane = new stdClass();
  $pane->pid = 'new-827a7f75-3d90-4598-89c5-dbc8ddc9c9d5';
  $pane->panel = '1_6_a';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '827a7f75-3d90-4598-89c5-dbc8ddc9c9d5';
  $display->content['new-827a7f75-3d90-4598-89c5-dbc8ddc9c9d5'] = $pane;
  $display->panels['1_6_a'][1] = 'new-827a7f75-3d90-4598-89c5-dbc8ddc9c9d5';
  $pane = new stdClass();
  $pane->pid = 'new-0e52150b-844a-4f52-8546-8b49106d146c';
  $pane->panel = '1_6_a';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_legal_services';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'view_mode' => 'default',
      'links' => 1,
      'use_content_language' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0e52150b-844a-4f52-8546-8b49106d146c';
  $display->content['new-0e52150b-844a-4f52-8546-8b49106d146c'] = $pane;
  $display->panels['1_6_a'][2] = 'new-0e52150b-844a-4f52-8546-8b49106d146c';
  $pane = new stdClass();
  $pane->pid = 'new-818ce351-af82-436d-83ef-4aa38e3a8fc7';
  $pane->panel = '1_6_a';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_non_legal_services';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '818ce351-af82-436d-83ef-4aa38e3a8fc7';
  $display->content['new-818ce351-af82-436d-83ef-4aa38e3a8fc7'] = $pane;
  $display->panels['1_6_a'][3] = 'new-818ce351-af82-436d-83ef-4aa38e3a8fc7';
  $pane = new stdClass();
  $pane->pid = 'new-653eeb61-1be3-44c0-9711-af6c65614ec1';
  $pane->panel = '1_6_a';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_direct_services';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '653eeb61-1be3-44c0-9711-af6c65614ec1';
  $display->content['new-653eeb61-1be3-44c0-9711-af6c65614ec1'] = $pane;
  $display->panels['1_6_a'][4] = 'new-653eeb61-1be3-44c0-9711-af6c65614ec1';
  $pane = new stdClass();
  $pane->pid = 'new-1c00474b-a762-4613-b6f8-008932bcfbfd';
  $pane->panel = '1_6_a';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_service_area';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '1c00474b-a762-4613-b6f8-008932bcfbfd';
  $display->content['new-1c00474b-a762-4613-b6f8-008932bcfbfd'] = $pane;
  $display->panels['1_6_a'][5] = 'new-1c00474b-a762-4613-b6f8-008932bcfbfd';
  $pane = new stdClass();
  $pane->pid = 'new-76ac6af2-4a1e-4ac2-85b5-d8400ac40e91';
  $pane->panel = '1_6_a';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_cities';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '76ac6af2-4a1e-4ac2-85b5-d8400ac40e91';
  $display->content['new-76ac6af2-4a1e-4ac2-85b5-d8400ac40e91'] = $pane;
  $display->panels['1_6_a'][6] = 'new-76ac6af2-4a1e-4ac2-85b5-d8400ac40e91';
  $pane = new stdClass();
  $pane->pid = 'new-8a8e0be4-3eb6-40e2-b984-79ee220febe3';
  $pane->panel = '1_6_a';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ref_population';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'default',
      'links' => 1,
      'use_content_language' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '8a8e0be4-3eb6-40e2-b984-79ee220febe3';
  $display->content['new-8a8e0be4-3eb6-40e2-b984-79ee220febe3'] = $pane;
  $display->panels['1_6_a'][7] = 'new-8a8e0be4-3eb6-40e2-b984-79ee220febe3';
  $pane = new stdClass();
  $pane->pid = 'new-70ff60a9-9818-473f-9240-51c5f18bb696';
  $pane->panel = '1_6_well';
  $pane->type = 'block';
  $pane->subtype = 'tcvlan_refnet-tcvlan_referral_actions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '70ff60a9-9818-473f-9240-51c5f18bb696';
  $display->content['new-70ff60a9-9818-473f-9240-51c5f18bb696'] = $pane;
  $display->panels['1_6_well'][0] = 'new-70ff60a9-9818-473f-9240-51c5f18bb696';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-827a7f75-3d90-4598-89c5-dbc8ddc9c9d5';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_a7ae1d98-4764-41e8-9e97-d4bc666e1dc1'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__referral_no_access_';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Referral (no access)',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '403',
    'destination' => '',
    'name' => 'referral_no_access_',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'referral' => 'referral',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Access Referral',
            'php' => 'if (function_exists(\'tcvlan_refnet_user_can_see_referral\')) {
  return tcvlan_refnet_user_can_see_referral();
}

return FALSE;',
          ),
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['node_view__referral_no_access_'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function tcvlan_refnet_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'org_dashboard';
  $page->task = 'page';
  $page->admin_title = 'Org Dashboard';
  $page->admin_description = '';
  $page->path = 'node/%node/dashboard';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Access Org dashboard',
          'php' => 'if (function_exists(\'dlaw_partner_org_dashboard_access\')) {
  return dlaw_partner_org_dashboard_access($contexts);
}

return FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Manage Referrals',
    'name' => 'navigation',
    'weight' => '5',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_org_dashboard__panel';
  $handler->task = 'page';
  $handler->subtask = 'org_dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'partner' => 'partner',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1cad8933-fa38-40c5-8276-50e33488d001';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_org_dashboard__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-868a8a08-13c1-4a96-84b1-9199fe05c91d';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'tcvlan_refnet-tcvlan_org_dash_out_ref';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '868a8a08-13c1-4a96-84b1-9199fe05c91d';
  $display->content['new-868a8a08-13c1-4a96-84b1-9199fe05c91d'] = $pane;
  $display->panels['left'][0] = 'new-868a8a08-13c1-4a96-84b1-9199fe05c91d';
  $pane = new stdClass();
  $pane->pid = 'new-2a1fe34c-68d1-4750-87ac-27d1550c4143';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'tcvlan_refnet-tcvlan_org_dash_out_prog';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2a1fe34c-68d1-4750-87ac-27d1550c4143';
  $display->content['new-2a1fe34c-68d1-4750-87ac-27d1550c4143'] = $pane;
  $display->panels['left'][1] = 'new-2a1fe34c-68d1-4750-87ac-27d1550c4143';
  $pane = new stdClass();
  $pane->pid = 'new-ae6c29ac-f088-4346-91d5-1e8ede4f7117';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'tcvlan_refnet-tcvlan_org_dash_out_referred';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ae6c29ac-f088-4346-91d5-1e8ede4f7117';
  $display->content['new-ae6c29ac-f088-4346-91d5-1e8ede4f7117'] = $pane;
  $display->panels['left'][2] = 'new-ae6c29ac-f088-4346-91d5-1e8ede4f7117';
  $pane = new stdClass();
  $pane->pid = 'new-7a81892e-bb28-4e2f-b1ee-940bc23e8830';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'tcvlan_refnet-tcvlan_org_dash_out_closed';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7a81892e-bb28-4e2f-b1ee-940bc23e8830';
  $display->content['new-7a81892e-bb28-4e2f-b1ee-940bc23e8830'] = $pane;
  $display->panels['left'][3] = 'new-7a81892e-bb28-4e2f-b1ee-940bc23e8830';
  $pane = new stdClass();
  $pane->pid = 'new-bd0b30eb-5458-42d5-ae8c-dd89b7ab68c0';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'tcvlan_refnet-tcvlan_org_dash_in_ref';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bd0b30eb-5458-42d5-ae8c-dd89b7ab68c0';
  $display->content['new-bd0b30eb-5458-42d5-ae8c-dd89b7ab68c0'] = $pane;
  $display->panels['right'][0] = 'new-bd0b30eb-5458-42d5-ae8c-dd89b7ab68c0';
  $pane = new stdClass();
  $pane->pid = 'new-d5b9c621-2261-4ef2-8e0a-19a86bf256c6';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'tcvlan_refnet-tcvlan_org_dash_in_prog';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd5b9c621-2261-4ef2-8e0a-19a86bf256c6';
  $display->content['new-d5b9c621-2261-4ef2-8e0a-19a86bf256c6'] = $pane;
  $display->panels['right'][1] = 'new-d5b9c621-2261-4ef2-8e0a-19a86bf256c6';
  $pane = new stdClass();
  $pane->pid = 'new-6a790b3d-7189-4582-9f79-bbd73ec73411';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'tcvlan_refnet-tcvlan_org_dash_in_referred';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '6a790b3d-7189-4582-9f79-bbd73ec73411';
  $display->content['new-6a790b3d-7189-4582-9f79-bbd73ec73411'] = $pane;
  $display->panels['right'][2] = 'new-6a790b3d-7189-4582-9f79-bbd73ec73411';
  $pane = new stdClass();
  $pane->pid = 'new-d5854bbf-b2a8-4cae-8d91-4f497d1a0a16';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'tcvlan_refnet-tcvlan_org_dash_in_closed';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd5854bbf-b2a8-4cae-8d91-4f497d1a0a16';
  $display->content['new-d5854bbf-b2a8-4cae-8d91-4f497d1a0a16'] = $pane;
  $display->panels['right'][3] = 'new-d5854bbf-b2a8-4cae-8d91-4f497d1a0a16';
  $pane = new stdClass();
  $pane->pid = 'new-4f4dc6ae-1a95-4724-9a1b-05cf55ea5827';
  $pane->panel = 'top';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'naked',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4f4dc6ae-1a95-4724-9a1b-05cf55ea5827';
  $display->content['new-4f4dc6ae-1a95-4724-9a1b-05cf55ea5827'] = $pane;
  $display->panels['top'][0] = 'new-4f4dc6ae-1a95-4724-9a1b-05cf55ea5827';
  $pane = new stdClass();
  $pane->pid = 'new-f113289c-d397-4ecb-9d5c-7367f5923733';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Add Referral',
    'title' => '',
    'body' => '<p><a class="btn btn-lg btn-primary" href="/node/add/referral"><i class="fa fa-arrow-right"></i> Add Referral</a></p>
',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f113289c-d397-4ecb-9d5c-7367f5923733';
  $display->content['new-f113289c-d397-4ecb-9d5c-7367f5923733'] = $pane;
  $display->panels['top'][1] = 'new-f113289c-d397-4ecb-9d5c-7367f5923733';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4f4dc6ae-1a95-4724-9a1b-05cf55ea5827';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['org_dashboard'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'referral_network_dashboard';
  $page->task = 'page';
  $page->admin_title = 'Referral network dashboard';
  $page->admin_description = '';
  $page->path = 'admin/dashboard/refnet/manage';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Manage',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Referral Network',
      'name' => 'navigation',
      'weight' => '15',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_referral_network_dashboard__panel';
  $handler->task = 'page';
  $handler->subtask = 'referral_network_dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_66';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'top_row' => NULL,
      '1_6_a' => NULL,
      '1_6_well' => NULL,
      '1_6_b' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0d058d96-8d69-465b-bcea-fc3424baaaf1';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_referral_network_dashboard__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a420f917-5792-4302-85ae-72e03f76779b';
  $pane->panel = '1_6_a';
  $pane->type = 'block';
  $pane->subtype = 'tcvlan_refnet-tcvlan_refnet_join_requests';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'dashboard__card',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a420f917-5792-4302-85ae-72e03f76779b';
  $display->content['new-a420f917-5792-4302-85ae-72e03f76779b'] = $pane;
  $display->panels['1_6_a'][0] = 'new-a420f917-5792-4302-85ae-72e03f76779b';
  $pane = new stdClass();
  $pane->pid = 'new-75ef976c-1c14-4a45-9107-94f074a892a3';
  $pane->panel = '1_6_a';
  $pane->type = 'block';
  $pane->subtype = 'tcvlan_refnet-tcvlan_refnet_new_referrals';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'dashboard__card',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '75ef976c-1c14-4a45-9107-94f074a892a3';
  $display->content['new-75ef976c-1c14-4a45-9107-94f074a892a3'] = $pane;
  $display->panels['1_6_a'][1] = 'new-75ef976c-1c14-4a45-9107-94f074a892a3';
  $pane = new stdClass();
  $pane->pid = 'new-9fda3c32-aa4e-43ea-96d2-5dbe3bbf698e';
  $pane->panel = '1_6_b';
  $pane->type = 'block';
  $pane->subtype = 'tcvlan_refnet-tcvlan_refnet_new_users';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'dashboard__card',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9fda3c32-aa4e-43ea-96d2-5dbe3bbf698e';
  $display->content['new-9fda3c32-aa4e-43ea-96d2-5dbe3bbf698e'] = $pane;
  $display->panels['1_6_b'][0] = 'new-9fda3c32-aa4e-43ea-96d2-5dbe3bbf698e';
  $pane = new stdClass();
  $pane->pid = 'new-04ede6c3-ed21-4a4a-9627-c0b797f394d4';
  $pane->panel = '1_6_b';
  $pane->type = 'block';
  $pane->subtype = 'tcvlan_refnet-tcvlan_refnet_active_users';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'dashboard__card',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '04ede6c3-ed21-4a4a-9627-c0b797f394d4';
  $display->content['new-04ede6c3-ed21-4a4a-9627-c0b797f394d4'] = $pane;
  $display->panels['1_6_b'][1] = 'new-04ede6c3-ed21-4a4a-9627-c0b797f394d4';
  $pane = new stdClass();
  $pane->pid = 'new-4c09d4d6-dc65-4f3c-80f6-d029984864fd';
  $pane->panel = '1_6_b';
  $pane->type = 'block';
  $pane->subtype = 'tcvlan_refnet-tcvlan_refnet_active_orgs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'dashboard__card',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4c09d4d6-dc65-4f3c-80f6-d029984864fd';
  $display->content['new-4c09d4d6-dc65-4f3c-80f6-d029984864fd'] = $pane;
  $display->panels['1_6_b'][2] = 'new-4c09d4d6-dc65-4f3c-80f6-d029984864fd';
  $pane = new stdClass();
  $pane->pid = 'new-25f8d5d6-7a64-41ca-9bb7-0f80a33697e2';
  $pane->panel = 'top_row';
  $pane->type = 'block';
  $pane->subtype = 'tcvlan_refnet-tcvlan_refnet_add_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '25f8d5d6-7a64-41ca-9bb7-0f80a33697e2';
  $display->content['new-25f8d5d6-7a64-41ca-9bb7-0f80a33697e2'] = $pane;
  $display->panels['top_row'][0] = 'new-25f8d5d6-7a64-41ca-9bb7-0f80a33697e2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['referral_network_dashboard'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'referral_network_report';
  $page->task = 'page';
  $page->admin_title = 'Referral network report';
  $page->admin_description = '';
  $page->path = 'admin/dashboard/refnet/reports';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Reports',
    'name' => 'navigation',
    'weight' => '3',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_referral_network_report__panel';
  $handler->task = 'page';
  $handler->subtask = 'referral_network_report';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '22acad55-14b3-4480-aca4-93c16b472787';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_referral_network_report__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-515ca7ce-d947-4142-8dfb-a74ff433fa9d';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'tcvlan_refnet-tcvlan_refnet_age_user_login';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'dashboard__card',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '515ca7ce-d947-4142-8dfb-a74ff433fa9d';
  $display->content['new-515ca7ce-d947-4142-8dfb-a74ff433fa9d'] = $pane;
  $display->panels['left'][0] = 'new-515ca7ce-d947-4142-8dfb-a74ff433fa9d';
  $pane = new stdClass();
  $pane->pid = 'new-75952b62-a54f-4a09-b899-c404065b9eea';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'tcvlan_refnet-tcvlan_refnet_org_updated';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'dashboard__card',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '75952b62-a54f-4a09-b899-c404065b9eea';
  $display->content['new-75952b62-a54f-4a09-b899-c404065b9eea'] = $pane;
  $display->panels['left'][1] = 'new-75952b62-a54f-4a09-b899-c404065b9eea';
  $pane = new stdClass();
  $pane->pid = 'new-fd39f9e6-d8b5-471b-8ed9-d4aff2bfac17';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'tcvlan_refnet-tcvlan_refnet_report_2col_a';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'fd39f9e6-d8b5-471b-8ed9-d4aff2bfac17';
  $display->content['new-fd39f9e6-d8b5-471b-8ed9-d4aff2bfac17'] = $pane;
  $display->panels['left'][2] = 'new-fd39f9e6-d8b5-471b-8ed9-d4aff2bfac17';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['referral_network_report'] = $page;

  return $pages;

}
