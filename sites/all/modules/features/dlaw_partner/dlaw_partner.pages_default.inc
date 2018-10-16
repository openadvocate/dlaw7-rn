<?php
/**
 * @file
 * dlaw_partner.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function dlaw_partner_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__partner';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Organization',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'basic-layout partner-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
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
      'logic' => 'and',
    ),
    'name' => 'partner',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_84';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'default' => NULL,
      'top' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
      '1_8' => NULL,
      '1_4_well' => NULL,
      '1_4' => NULL,
      'top_row' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7fd61cf1-4074-4115-94ae-bd672e1064bb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__partner';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b62e2562-8b26-46cd-8724-355161909ae5';
  $pane->panel = '1_4';
  $pane->type = 'block';
  $pane->subtype = 'sharethis-sharethis_block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b62e2562-8b26-46cd-8724-355161909ae5';
  $display->content['new-b62e2562-8b26-46cd-8724-355161909ae5'] = $pane;
  $display->panels['1_4'][0] = 'new-b62e2562-8b26-46cd-8724-355161909ae5';
  $pane = new stdClass();
  $pane->pid = 'new-721d8471-7fa5-4b84-b97f-9ed001a07bda';
  $pane->panel = '1_4';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_hours';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Hours of Operation',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '721d8471-7fa5-4b84-b97f-9ed001a07bda';
  $display->content['new-721d8471-7fa5-4b84-b97f-9ed001a07bda'] = $pane;
  $display->panels['1_4'][1] = 'new-721d8471-7fa5-4b84-b97f-9ed001a07bda';
  $pane = new stdClass();
  $pane->pid = 'new-b27ba1be-dc9a-4eed-96e7-805b9c5d2aeb';
  $pane->panel = '1_4';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_intake_hours';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Intake Hours',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b27ba1be-dc9a-4eed-96e7-805b9c5d2aeb';
  $display->content['new-b27ba1be-dc9a-4eed-96e7-805b9c5d2aeb'] = $pane;
  $display->panels['1_4'][2] = 'new-b27ba1be-dc9a-4eed-96e7-805b9c5d2aeb';
  $pane = new stdClass();
  $pane->pid = 'new-6777a794-3ce3-463c-af92-7be246b40726';
  $pane->panel = '1_4';
  $pane->type = 'block';
  $pane->subtype = 'dlaw_partner-dlaw_partner_have_elig_criteria';
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
  $pane->uuid = '6777a794-3ce3-463c-af92-7be246b40726';
  $display->content['new-6777a794-3ce3-463c-af92-7be246b40726'] = $pane;
  $display->panels['1_4'][3] = 'new-6777a794-3ce3-463c-af92-7be246b40726';
  $pane = new stdClass();
  $pane->pid = 'new-552047e5-1939-436c-aca7-82c44c5dcf9a';
  $pane->panel = '1_4';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_criteria_desc';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
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
  $pane->uuid = '552047e5-1939-436c-aca7-82c44c5dcf9a';
  $display->content['new-552047e5-1939-436c-aca7-82c44c5dcf9a'] = $pane;
  $display->panels['1_4'][4] = 'new-552047e5-1939-436c-aca7-82c44c5dcf9a';
  $pane = new stdClass();
  $pane->pid = 'new-68492ee7-919d-48d8-88a3-23797e1d55df';
  $pane->panel = '1_4';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_accepting_date';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'dlaw_event',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'show_repeat_rule' => 'show',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '68492ee7-919d-48d8-88a3-23797e1d55df';
  $display->content['new-68492ee7-919d-48d8-88a3-23797e1d55df'] = $pane;
  $display->panels['1_4'][5] = 'new-68492ee7-919d-48d8-88a3-23797e1d55df';
  $pane = new stdClass();
  $pane->pid = 'new-12fddd61-1eb8-4220-bf85-af009b8010de';
  $pane->panel = '1_4';
  $pane->type = 'block';
  $pane->subtype = 'dlaw_partner-dlaw_partner_accepting_referrals';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '12fddd61-1eb8-4220-bf85-af009b8010de';
  $display->content['new-12fddd61-1eb8-4220-bf85-af009b8010de'] = $pane;
  $display->panels['1_4'][6] = 'new-12fddd61-1eb8-4220-bf85-af009b8010de';
  $pane = new stdClass();
  $pane->pid = 'new-e69eb56b-f38e-4d88-9cc1-208a16f50a82';
  $pane->panel = '1_4';
  $pane->type = 'block';
  $pane->subtype = 'dlaw_partner-dlaw_partner_branch_offices';
  $pane->shown = TRUE;
  $pane->access = array(
    'logic' => 'or',
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => '',
          'php' => 'if ( !empty($node->field_partner_branch[0]) ) {
return TRUE;
}else{
return FALSE;
}',
        ),
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'e69eb56b-f38e-4d88-9cc1-208a16f50a82';
  $display->content['new-e69eb56b-f38e-4d88-9cc1-208a16f50a82'] = $pane;
  $display->panels['1_4'][7] = 'new-e69eb56b-f38e-4d88-9cc1-208a16f50a82';
  $pane = new stdClass();
  $pane->pid = 'new-ecfa4fb5-2987-489a-bb1c-8df4698ab7a3';
  $pane->panel = '1_4';
  $pane->type = 'block';
  $pane->subtype = 'simple_toc-simple_toc';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'page' => 'page',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'ecfa4fb5-2987-489a-bb1c-8df4698ab7a3';
  $display->content['new-ecfa4fb5-2987-489a-bb1c-8df4698ab7a3'] = $pane;
  $display->panels['1_4'][8] = 'new-ecfa4fb5-2987-489a-bb1c-8df4698ab7a3';
  $pane = new stdClass();
  $pane->pid = 'new-74d0ecc7-2451-4d8a-817d-8389c4486738';
  $pane->panel = '1_4';
  $pane->type = 'block';
  $pane->subtype = 'quarkfield-qr_node_tools';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '74d0ecc7-2451-4d8a-817d-8389c4486738';
  $display->content['new-74d0ecc7-2451-4d8a-817d-8389c4486738'] = $pane;
  $display->panels['1_4'][9] = 'new-74d0ecc7-2451-4d8a-817d-8389c4486738';
  $pane = new stdClass();
  $pane->pid = 'new-14ac1d21-2105-4db7-a743-cbc9e4ea3126';
  $pane->panel = '1_4';
  $pane->type = 'block';
  $pane->subtype = 'dlaw_partner-dlaw_partner_language_method';
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
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '14ac1d21-2105-4db7-a743-cbc9e4ea3126';
  $display->content['new-14ac1d21-2105-4db7-a743-cbc9e4ea3126'] = $pane;
  $display->panels['1_4'][10] = 'new-14ac1d21-2105-4db7-a743-cbc9e4ea3126';
  $pane = new stdClass();
  $pane->pid = 'new-8ab07812-fdb5-42f2-a23b-3ba2588b48d9';
  $pane->panel = '1_4';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_lang';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
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
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '8ab07812-fdb5-42f2-a23b-3ba2588b48d9';
  $display->content['new-8ab07812-fdb5-42f2-a23b-3ba2588b48d9'] = $pane;
  $display->panels['1_4'][11] = 'new-8ab07812-fdb5-42f2-a23b-3ba2588b48d9';
  $pane = new stdClass();
  $pane->pid = 'new-abbeb3b2-79cf-458e-a8bb-7263c39fc46b';
  $pane->panel = '1_4';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_lang_other';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
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
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'abbeb3b2-79cf-458e-a8bb-7263c39fc46b';
  $display->content['new-abbeb3b2-79cf-458e-a8bb-7263c39fc46b'] = $pane;
  $display->panels['1_4'][12] = 'new-abbeb3b2-79cf-458e-a8bb-7263c39fc46b';
  $pane = new stdClass();
  $pane->pid = 'new-3f545849-cdae-457d-baac-5e643a42b732';
  $pane->panel = '1_4';
  $pane->type = 'block';
  $pane->subtype = 'dlaw_partner-dlaw_partner_languages';
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
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = '3f545849-cdae-457d-baac-5e643a42b732';
  $display->content['new-3f545849-cdae-457d-baac-5e643a42b732'] = $pane;
  $display->panels['1_4'][13] = 'new-3f545849-cdae-457d-baac-5e643a42b732';
  $pane = new stdClass();
  $pane->pid = 'new-15d0ff09-c74a-47c2-8bcc-097047792b68';
  $pane->panel = '1_4_well';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
            1 => 3,
            2 => 4,
            3 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h2>Network</h2>
',
    'format' => 'filtered_html',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '15d0ff09-c74a-47c2-8bcc-097047792b68';
  $display->content['new-15d0ff09-c74a-47c2-8bcc-097047792b68'] = $pane;
  $display->panels['1_4_well'][0] = 'new-15d0ff09-c74a-47c2-8bcc-097047792b68';
  $pane = new stdClass();
  $pane->pid = 'new-c3fd356c-eb41-41c8-aef7-478cbc9265bf';
  $pane->panel = '1_4_well';
  $pane->type = 'block';
  $pane->subtype = 'tcvlan_refnet-tcvlan_refnet_org_members';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Team',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c3fd356c-eb41-41c8-aef7-478cbc9265bf';
  $display->content['new-c3fd356c-eb41-41c8-aef7-478cbc9265bf'] = $pane;
  $display->panels['1_4_well'][1] = 'new-c3fd356c-eb41-41c8-aef7-478cbc9265bf';
  $pane = new stdClass();
  $pane->pid = 'new-d3989a0f-c81b-4052-8157-346fea37d61a';
  $pane->panel = '1_4_well';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_additional_info';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => ' Partner Referral Priority',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd3989a0f-c81b-4052-8157-346fea37d61a';
  $display->content['new-d3989a0f-c81b-4052-8157-346fea37d61a'] = $pane;
  $display->panels['1_4_well'][2] = 'new-d3989a0f-c81b-4052-8157-346fea37d61a';
  $pane = new stdClass();
  $pane->pid = 'new-53e0fa82-de33-45f6-96f4-bf61b03aacd3';
  $pane->panel = '1_8';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_address';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'addressfield_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'use_widget_handlers' => 1,
      'format_handlers' => array(
        'address' => 'address',
      ),
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '53e0fa82-de33-45f6-96f4-bf61b03aacd3';
  $display->content['new-53e0fa82-de33-45f6-96f4-bf61b03aacd3'] = $pane;
  $display->panels['1_8'][0] = 'new-53e0fa82-de33-45f6-96f4-bf61b03aacd3';
  $pane = new stdClass();
  $pane->pid = 'new-bbcfc32a-9510-4349-a013-48cdd15cece2';
  $pane->panel = '1_8';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_phone1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'telephone_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title' => '',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bbcfc32a-9510-4349-a013-48cdd15cece2';
  $display->content['new-bbcfc32a-9510-4349-a013-48cdd15cece2'] = $pane;
  $display->panels['1_8'][1] = 'new-bbcfc32a-9510-4349-a013-48cdd15cece2';
  $pane = new stdClass();
  $pane->pid = 'new-9c8f2d2a-ad2e-40be-9477-2ac35ae47393';
  $pane->panel = '1_8';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_phone2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'telephone_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title' => '',
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
  $pane->uuid = '9c8f2d2a-ad2e-40be-9477-2ac35ae47393';
  $display->content['new-9c8f2d2a-ad2e-40be-9477-2ac35ae47393'] = $pane;
  $display->panels['1_8'][2] = 'new-9c8f2d2a-ad2e-40be-9477-2ac35ae47393';
  $pane = new stdClass();
  $pane->pid = 'new-d4ac0369-f704-4e89-9619-a76951422527';
  $pane->panel = '1_8';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_fax';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'telephone_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title' => '',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd4ac0369-f704-4e89-9619-a76951422527';
  $display->content['new-d4ac0369-f704-4e89-9619-a76951422527'] = $pane;
  $display->panels['1_8'][3] = 'new-d4ac0369-f704-4e89-9619-a76951422527';
  $pane = new stdClass();
  $pane->pid = 'new-a2658c5d-523f-4d41-800f-1db25408a50c';
  $pane->panel = '1_8';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_website';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Website',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'a2658c5d-523f-4d41-800f-1db25408a50c';
  $display->content['new-a2658c5d-523f-4d41-800f-1db25408a50c'] = $pane;
  $display->panels['1_8'][4] = 'new-a2658c5d-523f-4d41-800f-1db25408a50c';
  $pane = new stdClass();
  $pane->pid = 'new-0f80f603-4ffc-44fa-bdd3-0ccbd6ad6fd6';
  $pane->panel = '1_8';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'openadvocate-content',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '0f80f603-4ffc-44fa-bdd3-0ccbd6ad6fd6';
  $display->content['new-0f80f603-4ffc-44fa-bdd3-0ccbd6ad6fd6'] = $pane;
  $display->panels['1_8'][5] = 'new-0f80f603-4ffc-44fa-bdd3-0ccbd6ad6fd6';
  $pane = new stdClass();
  $pane->pid = 'new-326e0d0e-0b7c-4b1f-8c98-e975c37a66bd';
  $pane->panel = '1_8';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h2>Services</h2>
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '326e0d0e-0b7c-4b1f-8c98-e975c37a66bd';
  $display->content['new-326e0d0e-0b7c-4b1f-8c98-e975c37a66bd'] = $pane;
  $display->panels['1_8'][6] = 'new-326e0d0e-0b7c-4b1f-8c98-e975c37a66bd';
  $pane = new stdClass();
  $pane->pid = 'new-9edab9a5-347f-4c19-a697-ce50b4d0c7c7';
  $pane->panel = '1_8';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_city';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Cities served',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '9edab9a5-347f-4c19-a697-ce50b4d0c7c7';
  $display->content['new-9edab9a5-347f-4c19-a697-ce50b4d0c7c7'] = $pane;
  $display->panels['1_8'][7] = 'new-9edab9a5-347f-4c19-a697-ce50b4d0c7c7';
  $pane = new stdClass();
  $pane->pid = 'new-a880dbdb-dea1-4619-91a6-d18aa47ad12c';
  $pane->panel = '1_8';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_county';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Counties served',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'a880dbdb-dea1-4619-91a6-d18aa47ad12c';
  $display->content['new-a880dbdb-dea1-4619-91a6-d18aa47ad12c'] = $pane;
  $display->panels['1_8'][8] = 'new-a880dbdb-dea1-4619-91a6-d18aa47ad12c';
  $pane = new stdClass();
  $pane->pid = 'new-0ab5cfca-6b64-4327-845b-082dcfdf40fe';
  $pane->panel = '1_8';
  $pane->type = 'block';
  $pane->subtype = 'dlaw_partner-dlaw_partner_who_serve';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '0ab5cfca-6b64-4327-845b-082dcfdf40fe';
  $display->content['new-0ab5cfca-6b64-4327-845b-082dcfdf40fe'] = $pane;
  $display->panels['1_8'][9] = 'new-0ab5cfca-6b64-4327-845b-082dcfdf40fe';
  $pane = new stdClass();
  $pane->pid = 'new-437e48db-3053-4f46-9a88-1d90e4367f3c';
  $pane->panel = '1_8';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_legal_services';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Legal Services',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '437e48db-3053-4f46-9a88-1d90e4367f3c';
  $display->content['new-437e48db-3053-4f46-9a88-1d90e4367f3c'] = $pane;
  $display->panels['1_8'][10] = 'new-437e48db-3053-4f46-9a88-1d90e4367f3c';
  $pane = new stdClass();
  $pane->pid = 'new-55970124-f8e6-49f3-bb48-3c466993ffb8';
  $pane->panel = '1_8';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_non_legal_services';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Non-legal services we provide',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '55970124-f8e6-49f3-bb48-3c466993ffb8';
  $display->content['new-55970124-f8e6-49f3-bb48-3c466993ffb8'] = $pane;
  $display->panels['1_8'][11] = 'new-55970124-f8e6-49f3-bb48-3c466993ffb8';
  $pane = new stdClass();
  $pane->pid = 'new-e4582e0c-2cff-4f06-b6f9-3f90038fde59';
  $pane->panel = '1_8';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_direct_services';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Direct Services',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'e4582e0c-2cff-4f06-b6f9-3f90038fde59';
  $display->content['new-e4582e0c-2cff-4f06-b6f9-3f90038fde59'] = $pane;
  $display->panels['1_8'][12] = 'new-e4582e0c-2cff-4f06-b6f9-3f90038fde59';
  $pane = new stdClass();
  $pane->pid = 'new-8f8d9059-1cbc-41f6-924c-4089f0a6eecc';
  $pane->panel = '1_8';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<hr />',
    'format' => 'full_html',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = '8f8d9059-1cbc-41f6-924c-4089f0a6eecc';
  $display->content['new-8f8d9059-1cbc-41f6-924c-4089f0a6eecc'] = $pane;
  $display->panels['1_8'][13] = 'new-8f8d9059-1cbc-41f6-924c-4089f0a6eecc';
  $pane = new stdClass();
  $pane->pid = 'new-9784827b-a91e-4e38-9034-1a2f98041d15';
  $pane->panel = '1_8';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_cont_person';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
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
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = '9784827b-a91e-4e38-9034-1a2f98041d15';
  $display->content['new-9784827b-a91e-4e38-9034-1a2f98041d15'] = $pane;
  $display->panels['1_8'][14] = 'new-9784827b-a91e-4e38-9034-1a2f98041d15';
  $pane = new stdClass();
  $pane->pid = 'new-8e760146-8dfa-4b10-8ce5-a5c011b563ad';
  $pane->panel = '1_8';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_cont_title';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
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
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = '8e760146-8dfa-4b10-8ce5-a5c011b563ad';
  $display->content['new-8e760146-8dfa-4b10-8ce5-a5c011b563ad'] = $pane;
  $display->panels['1_8'][15] = 'new-8e760146-8dfa-4b10-8ce5-a5c011b563ad';
  $pane = new stdClass();
  $pane->pid = 'new-3ff2fd00-8d07-43bb-be3e-e1270da38768';
  $pane->panel = '1_8';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_cont_phone';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'telephone_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title' => '',
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
  $pane->position = 16;
  $pane->locks = array();
  $pane->uuid = '3ff2fd00-8d07-43bb-be3e-e1270da38768';
  $display->content['new-3ff2fd00-8d07-43bb-be3e-e1270da38768'] = $pane;
  $display->panels['1_8'][16] = 'new-3ff2fd00-8d07-43bb-be3e-e1270da38768';
  $pane = new stdClass();
  $pane->pid = 'new-ddf40b0d-6770-4b1c-8378-e195b4f80e13';
  $pane->panel = '1_8';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_partner_cont_email';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'email_default',
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
  $pane->position = 17;
  $pane->locks = array();
  $pane->uuid = 'ddf40b0d-6770-4b1c-8378-e195b4f80e13';
  $display->content['new-ddf40b0d-6770-4b1c-8378-e195b4f80e13'] = $pane;
  $display->panels['1_8'][17] = 'new-ddf40b0d-6770-4b1c-8378-e195b4f80e13';
  $pane = new stdClass();
  $pane->pid = 'new-a36ecbe8-c4ae-4b00-b916-3f0a546b4e0f';
  $pane->panel = '1_8';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '</div>',
    'format' => 'php_code',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 18;
  $pane->locks = array();
  $pane->uuid = 'a36ecbe8-c4ae-4b00-b916-3f0a546b4e0f';
  $display->content['new-a36ecbe8-c4ae-4b00-b916-3f0a546b4e0f'] = $pane;
  $display->panels['1_8'][18] = 'new-a36ecbe8-c4ae-4b00-b916-3f0a546b4e0f';
  $pane = new stdClass();
  $pane->pid = 'new-cc7b50b6-ba9d-4c12-8957-ade9dca3b4d2';
  $pane->panel = '1_8';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Organization join button',
    'title' => '',
    'body' => '<hr>
<p>Do you work for this organization? Update this page.</p>

<p><a class="btn btn-primary btn-lg" href="/join-request?orgid=%node:nid">Join</a></p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 19;
  $pane->locks = array();
  $pane->uuid = 'cc7b50b6-ba9d-4c12-8957-ade9dca3b4d2';
  $display->content['new-cc7b50b6-ba9d-4c12-8957-ade9dca3b4d2'] = $pane;
  $display->panels['1_8'][19] = 'new-cc7b50b6-ba9d-4c12-8957-ade9dca3b4d2';
  $pane = new stdClass();
  $pane->pid = 'new-10846474-4abf-44d4-932e-e4ce538c106f';
  $pane->panel = 'top_row';
  $pane->type = 'views_panes';
  $pane->subtype = 'section-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'well',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '10846474-4abf-44d4-932e-e4ce538c106f';
  $display->content['new-10846474-4abf-44d4-932e-e4ce538c106f'] = $pane;
  $display->panels['top_row'][0] = 'new-10846474-4abf-44d4-932e-e4ce538c106f';
  $pane = new stdClass();
  $pane->pid = 'new-9238e68c-85ca-4680-98a4-c1058a3484eb';
  $pane->panel = 'top_row';
  $pane->type = 'block';
  $pane->subtype = 'dlaw_partner-dlaw_partner_network_partner';
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
  $pane->uuid = '9238e68c-85ca-4680-98a4-c1058a3484eb';
  $display->content['new-9238e68c-85ca-4680-98a4-c1058a3484eb'] = $pane;
  $display->panels['top_row'][1] = 'new-9238e68c-85ca-4680-98a4-c1058a3484eb';
  $pane = new stdClass();
  $pane->pid = 'new-229a511c-c26f-47ec-8a7e-85ff0d3f70de';
  $pane->panel = 'top_row';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => 'page-header',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'naked',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '229a511c-c26f-47ec-8a7e-85ff0d3f70de';
  $display->content['new-229a511c-c26f-47ec-8a7e-85ff0d3f70de'] = $pane;
  $display->panels['top_row'][2] = 'new-229a511c-c26f-47ec-8a7e-85ff0d3f70de';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-0f80f603-4ffc-44fa-bdd3-0ccbd6ad6fd6';
  $handler->conf['display'] = $display;
  $export['node_view__partner'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__http_response_code';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '404',
    'destination' => '',
    'name' => 'http_response_code',
  );
  $export['term_view__http_response_code'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function dlaw_partner_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'site_search_partner';
  $page->task = 'page';
  $page->admin_title = 'Org search';
  $page->admin_description = '';
  $page->path = 'find-help/!query';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'query' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_site_search_partner__panel';
  $handler->task = 'page';
  $handler->subtask = 'site_search_partner';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-search-partner',
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
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cd34ae7a-4bbd-48a2-bdcc-86fc21e1024a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_site_search_partner__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-990122f0-a897-4bde-a9b1-970c4187dcf3';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'dlaw_partner-dlaw_partner_reset_find_help';
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
  $pane->uuid = '990122f0-a897-4bde-a9b1-970c4187dcf3';
  $display->content['new-990122f0-a897-4bde-a9b1-970c4187dcf3'] = $pane;
  $display->panels['left'][0] = 'new-990122f0-a897-4bde-a9b1-970c4187dcf3';
  $pane = new stdClass();
  $pane->pid = 'new-a49cc3db-b30c-40c6-aeaf-4b391b746170';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-eYPeKFqXKLqHOAVVc1MxqJn1x5OL0HPZ';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Legal Services',
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
  $pane->uuid = 'a49cc3db-b30c-40c6-aeaf-4b391b746170';
  $display->content['new-a49cc3db-b30c-40c6-aeaf-4b391b746170'] = $pane;
  $display->panels['left'][1] = 'new-a49cc3db-b30c-40c6-aeaf-4b391b746170';
  $pane = new stdClass();
  $pane->pid = 'new-f6ec90de-146e-4328-b41c-e205ec63a348';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-RuSKxMzM0qgQ19alGUaLLzw1khNlN0so';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Non-legal Services',
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
  $pane->uuid = 'f6ec90de-146e-4328-b41c-e205ec63a348';
  $display->content['new-f6ec90de-146e-4328-b41c-e205ec63a348'] = $pane;
  $display->panels['left'][2] = 'new-f6ec90de-146e-4328-b41c-e205ec63a348';
  $pane = new stdClass();
  $pane->pid = 'new-16585d8b-7f91-4334-93f5-ec716571a23f';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-orED349NbTw4jZGm036ayZe70HPP4Rqw';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Population Served',
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
  $pane->uuid = '16585d8b-7f91-4334-93f5-ec716571a23f';
  $display->content['new-16585d8b-7f91-4334-93f5-ec716571a23f'] = $pane;
  $display->panels['left'][3] = 'new-16585d8b-7f91-4334-93f5-ec716571a23f';
  $pane = new stdClass();
  $pane->pid = 'new-dd42b03b-9d31-4483-8e2a-f8a056d20d93';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-P12ACwhyvRN13QYCqNxAJptouHN00vZ3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Accepting Referrals',
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
  $pane->uuid = 'dd42b03b-9d31-4483-8e2a-f8a056d20d93';
  $display->content['new-dd42b03b-9d31-4483-8e2a-f8a056d20d93'] = $pane;
  $display->panels['left'][4] = 'new-dd42b03b-9d31-4483-8e2a-f8a056d20d93';
  $pane = new stdClass();
  $pane->pid = 'new-783f928e-847e-457e-9097-7029f2e4444d';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-4kuCUNJwoMfMZqRYsnNbNGsuoSotCIOt';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'How to Apply',
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
  $pane->uuid = '783f928e-847e-457e-9097-7029f2e4444d';
  $display->content['new-783f928e-847e-457e-9097-7029f2e4444d'] = $pane;
  $display->panels['left'][5] = 'new-783f928e-847e-457e-9097-7029f2e4444d';
  $pane = new stdClass();
  $pane->pid = 'new-12c5dc9a-9e9b-483c-ac43-fd3942c67f92';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-c3gosfZBwOzOdGRX731qZuITn8rnqsfU';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'City',
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
  $pane->uuid = '12c5dc9a-9e9b-483c-ac43-fd3942c67f92';
  $display->content['new-12c5dc9a-9e9b-483c-ac43-fd3942c67f92'] = $pane;
  $display->panels['left'][6] = 'new-12c5dc9a-9e9b-483c-ac43-fd3942c67f92';
  $pane = new stdClass();
  $pane->pid = 'new-6f9ff1d8-da46-4814-a265-8c42efa16a6c';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-s4GEaStabDLGh8O7gh0ziE3tuGfVZdVr';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Languages',
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
  $pane->uuid = '6f9ff1d8-da46-4814-a265-8c42efa16a6c';
  $display->content['new-6f9ff1d8-da46-4814-a265-8c42efa16a6c'] = $pane;
  $display->panels['left'][7] = 'new-6f9ff1d8-da46-4814-a265-8c42efa16a6c';
  $pane = new stdClass();
  $pane->pid = 'new-3053aec5-69b5-4604-8386-b9c04c40b14b';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-T6U5NrjXKm2tpAeKl5ciT1MRlxCIs0z9';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Language Service Method',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '3053aec5-69b5-4604-8386-b9c04c40b14b';
  $display->content['new-3053aec5-69b5-4604-8386-b9c04c40b14b'] = $pane;
  $display->panels['left'][8] = 'new-3053aec5-69b5-4604-8386-b9c04c40b14b';
  $pane = new stdClass();
  $pane->pid = 'new-21e463c4-e191-4c81-b649-581a7d18280d';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-IqG714ix17ZAhF1SV5oHUonifnkAJKMY';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Direct Services',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '21e463c4-e191-4c81-b649-581a7d18280d';
  $display->content['new-21e463c4-e191-4c81-b649-581a7d18280d'] = $pane;
  $display->panels['left'][9] = 'new-21e463c4-e191-4c81-b649-581a7d18280d';
  $pane = new stdClass();
  $pane->pid = 'new-abc381e8-dfdd-4eb8-9409-8dccaa70db67';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-MyCY6uZWJjvGFzLW1duxIFQevaIkjc3U';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'County',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'hidden',
  );
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = 'abc381e8-dfdd-4eb8-9409-8dccaa70db67';
  $display->content['new-abc381e8-dfdd-4eb8-9409-8dccaa70db67'] = $pane;
  $display->panels['left'][10] = 'new-abc381e8-dfdd-4eb8-9409-8dccaa70db67';
  $pane = new stdClass();
  $pane->pid = 'new-8838c51c-4b2f-4f21-8c22-aa569434f618';
  $pane->panel = 'right';
  $pane->type = 'apachesolr_form';
  $pane->subtype = 'apachesolr_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path_type' => 'same',
    'path' => '',
    'override_prompt' => 0,
    'prompt' => '',
    'show_keys' => 1,
    'override_title' => 1,
    'override_title_text' => 'I need help with',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8838c51c-4b2f-4f21-8c22-aa569434f618';
  $display->content['new-8838c51c-4b2f-4f21-8c22-aa569434f618'] = $pane;
  $display->panels['right'][0] = 'new-8838c51c-4b2f-4f21-8c22-aa569434f618';
  $pane = new stdClass();
  $pane->pid = 'new-7587e1c4-7e54-4b43-896b-0518fc4809c8';
  $pane->panel = 'right';
  $pane->type = 'apachesolr_info';
  $pane->subtype = 'apachesolr_info';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'title_override' => FALSE,
    'title_override_text' => '',
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
  $pane->uuid = '7587e1c4-7e54-4b43-896b-0518fc4809c8';
  $display->content['new-7587e1c4-7e54-4b43-896b-0518fc4809c8'] = $pane;
  $display->panels['right'][1] = 'new-7587e1c4-7e54-4b43-896b-0518fc4809c8';
  $pane = new stdClass();
  $pane->pid = 'new-ce069013-743a-4a0c-a533-43081ed72cfc';
  $pane->panel = 'right';
  $pane->type = 'apachesolr_result';
  $pane->subtype = 'apachesolr_result';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'keys_action' => 'none',
    'keys' => '',
    'keys_required' => 0,
    'filters_action' => 'override',
    'filters' => 'bundle:partner',
    'rows' => '10',
    'env_id' => '',
    'sort_action' => 'none',
    'sort' => '',
    'breadcrumb' => 1,
    'title_override' => 1,
    'title_override_text' => '<none>',
    'empty_override' => 0,
    'empty_override_title' => '',
    'empty_override_text' => array(
      'value' => '',
      'format' => 'plain_text',
    ),
    'empty_override_format' => 'plain_text',
    'log' => 0,
    'substitute' => 0,
    'context' => 'argument_string_1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ce069013-743a-4a0c-a533-43081ed72cfc';
  $display->content['new-ce069013-743a-4a0c-a533-43081ed72cfc'] = $pane;
  $display->panels['right'][2] = 'new-ce069013-743a-4a0c-a533-43081ed72cfc';
  $pane = new stdClass();
  $pane->pid = 'new-4df02ab3-c4e9-400e-874a-b1951c406521';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<div class="">
  <div class="panel-panel left col-sm-4">
    <h1 class="page-header search-header">Search</h1>
  </div>
  <div class="panel-panel left col-sm-8">
    <ul class="nav nav-tabs nav-justified lead">
    <li class=""><a href="/search-site/%query:html_safe">Search Website</a></li>
    <li class="active"><a href="#">Find Help</a></li>
    </ul>
  </div>
</div>
',
    'format' => 'php_code',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4df02ab3-c4e9-400e-874a-b1951c406521';
  $display->content['new-4df02ab3-c4e9-400e-874a-b1951c406521'] = $pane;
  $display->panels['top'][0] = 'new-4df02ab3-c4e9-400e-874a-b1951c406521';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4df02ab3-c4e9-400e-874a-b1951c406521';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['site_search_partner'] = $page;

  return $pages;

}
