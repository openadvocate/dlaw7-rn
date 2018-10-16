<?php
/**
 * @file
 * dlaw4_basic_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function dlaw4_basic_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Basic Layout',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'basic-layout',
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
              'page' => 'page',
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
  $display->layout = 'bootstrap_twocol_stacked';
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
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4579c97f-33d0-4e7a-9946-83dfc7ab1fd5';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'dlaw4_basic_page-dlaw4_basic_page_event_dates';
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
  $pane->uuid = '4579c97f-33d0-4e7a-9946-83dfc7ab1fd5';
  $display->content['new-4579c97f-33d0-4e7a-9946-83dfc7ab1fd5'] = $pane;
  $display->panels['left'][0] = 'new-4579c97f-33d0-4e7a-9946-83dfc7ab1fd5';
  $pane = new stdClass();
  $pane->pid = 'new-ae554a6b-9ad7-4bff-bec9-b71fffbfea02';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'contact_list_by_term-panel_pane_1';
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
    'style' => 'naked',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ae554a6b-9ad7-4bff-bec9-b71fffbfea02';
  $display->content['new-ae554a6b-9ad7-4bff-bec9-b71fffbfea02'] = $pane;
  $display->panels['left'][1] = 'new-ae554a6b-9ad7-4bff-bec9-b71fffbfea02';
  $pane = new stdClass();
  $pane->pid = 'new-0f80f603-4ffc-44fa-bdd3-0ccbd6ad6fd6';
  $pane->panel = 'left';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0f80f603-4ffc-44fa-bdd3-0ccbd6ad6fd6';
  $display->content['new-0f80f603-4ffc-44fa-bdd3-0ccbd6ad6fd6'] = $pane;
  $display->panels['left'][2] = 'new-0f80f603-4ffc-44fa-bdd3-0ccbd6ad6fd6';
  $pane = new stdClass();
  $pane->pid = 'new-586f3d5e-a629-4465-9670-0dde39e43488';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'addressfield_staticmap-addressfield_staticmap';
  $pane->shown = TRUE;
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '586f3d5e-a629-4465-9670-0dde39e43488';
  $display->content['new-586f3d5e-a629-4465-9670-0dde39e43488'] = $pane;
  $display->panels['left'][3] = 'new-586f3d5e-a629-4465-9670-0dde39e43488';
  $pane = new stdClass();
  $pane->pid = 'new-249f4466-af84-43c9-b649-c870826d0bf7';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_attachments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'file_table',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
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
    'css_class' => 'lead',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '249f4466-af84-43c9-b649-c870826d0bf7';
  $display->content['new-249f4466-af84-43c9-b649-c870826d0bf7'] = $pane;
  $display->panels['left'][4] = 'new-249f4466-af84-43c9-b649-c870826d0bf7';
  $pane = new stdClass();
  $pane->pid = 'new-95d49a39-a998-4afd-82c5-cff386629dd9';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
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
    'css_class' => 'lead',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '95d49a39-a998-4afd-82c5-cff386629dd9';
  $display->content['new-95d49a39-a998-4afd-82c5-cff386629dd9'] = $pane;
  $display->panels['left'][5] = 'new-95d49a39-a998-4afd-82c5-cff386629dd9';
  $pane = new stdClass();
  $pane->pid = 'new-5a3cd2e3-345b-47ba-a337-1a67ff6bcbe2';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'dlaw_common-dlaw_common_updated_date';
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
  $pane->uuid = '5a3cd2e3-345b-47ba-a337-1a67ff6bcbe2';
  $display->content['new-5a3cd2e3-345b-47ba-a337-1a67ff6bcbe2'] = $pane;
  $display->panels['left'][6] = 'new-5a3cd2e3-345b-47ba-a337-1a67ff6bcbe2';
  $pane = new stdClass();
  $pane->pid = 'new-61f9d5d7-cff7-4839-b1e4-a90aed8a20eb';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'section-panel_pane_6';
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '61f9d5d7-cff7-4839-b1e4-a90aed8a20eb';
  $display->content['new-61f9d5d7-cff7-4839-b1e4-a90aed8a20eb'] = $pane;
  $display->panels['left'][7] = 'new-61f9d5d7-cff7-4839-b1e4-a90aed8a20eb';
  $pane = new stdClass();
  $pane->pid = 'new-8e7cdae6-3ccc-4e6c-8a9d-9059c325b56e';
  $pane->panel = 'left';
  $pane->type = 'rate_widget';
  $pane->subtype = 'rate_widget';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Show if comment is open',
          'php' => 'if (isset($contexts[\'argument_entity_id:node_1\']) and $contexts[\'argument_entity_id:node_1\']->data->comment == COMMENT_NODE_OPEN) {
  return TRUE;
}

return FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'build_mode' => '1',
    'widget_name' => '1',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'How helpful do you find the information on this page?',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '8e7cdae6-3ccc-4e6c-8a9d-9059c325b56e';
  $display->content['new-8e7cdae6-3ccc-4e6c-8a9d-9059c325b56e'] = $pane;
  $display->panels['left'][8] = 'new-8e7cdae6-3ccc-4e6c-8a9d-9059c325b56e';
  $pane = new stdClass();
  $pane->pid = 'new-7fd820af-ab3b-4ca9-838d-226c861c4de5';
  $pane->panel = 'left';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '7fd820af-ab3b-4ca9-838d-226c861c4de5';
  $display->content['new-7fd820af-ab3b-4ca9-838d-226c861c4de5'] = $pane;
  $display->panels['left'][9] = 'new-7fd820af-ab3b-4ca9-838d-226c861c4de5';
  $pane = new stdClass();
  $pane->pid = 'new-1a275514-47d9-48bc-b9ce-f4235613d84f';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'events-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '1a275514-47d9-48bc-b9ce-f4235613d84f';
  $display->content['new-1a275514-47d9-48bc-b9ce-f4235613d84f'] = $pane;
  $display->panels['left'][10] = 'new-1a275514-47d9-48bc-b9ce-f4235613d84f';
  $pane = new stdClass();
  $pane->pid = 'new-8e3ba41f-17e6-47d4-8136-96f35cd08035';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'dlaw4_image',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '8e3ba41f-17e6-47d4-8136-96f35cd08035';
  $display->content['new-8e3ba41f-17e6-47d4-8136-96f35cd08035'] = $pane;
  $display->panels['right'][0] = 'new-8e3ba41f-17e6-47d4-8136-96f35cd08035';
  $pane = new stdClass();
  $pane->pid = 'new-74d0ecc7-2451-4d8a-817d-8389c4486738';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'quarkfield-qr_node_tools';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Show if enabled',
          'php' => 'return variable_get(\'sitesettings_page_util\', 1);',
        ),
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '74d0ecc7-2451-4d8a-817d-8389c4486738';
  $display->content['new-74d0ecc7-2451-4d8a-817d-8389c4486738'] = $pane;
  $display->panels['right'][1] = 'new-74d0ecc7-2451-4d8a-817d-8389c4486738';
  $pane = new stdClass();
  $pane->pid = 'new-b62e2562-8b26-46cd-8724-355161909ae5';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'sharethis-sharethis_block';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Show if enabled',
          'php' => 'return variable_get(\'sitesettings_page_social\', 1);',
        ),
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b62e2562-8b26-46cd-8724-355161909ae5';
  $display->content['new-b62e2562-8b26-46cd-8724-355161909ae5'] = $pane;
  $display->panels['right'][2] = 'new-b62e2562-8b26-46cd-8724-355161909ae5';
  $pane = new stdClass();
  $pane->pid = 'new-e30a826e-8ba5-4e50-8466-17069b76e3d9';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'More News Link for Sidebar',
    'title' => '<none>',
    'body' => '<?php
$fiel_date = "%node:field_date";
$empty_ = !empty($fiel_date);
?>

<?php if (($empty_) || ("%node:field_news" == "Display in News List")): ?>
<div class="fake_pager_container">
  <?php if ($empty_): ?>
  <ul class="pager fake">
    <li class="previous"><a href="/events">More Events →</a></li>
  </ul>
  <?php endif; ?>

  <?php if ("%node:field_news" == "Display in News List"): ?>
  <ul class="pager fake">
    <li class="previous"><a href="/news">More News →</a></li>
  </ul>
  <?php endif; ?>
  </div>
<?php endif; ?>
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e30a826e-8ba5-4e50-8466-17069b76e3d9';
  $display->content['new-e30a826e-8ba5-4e50-8466-17069b76e3d9'] = $pane;
  $display->panels['right'][3] = 'new-e30a826e-8ba5-4e50-8466-17069b76e3d9';
  $pane = new stdClass();
  $pane->pid = 'new-ecfa4fb5-2987-489a-bb1c-8df4698ab7a3';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'simple_toc-simple_toc';
  $pane->shown = TRUE;
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
      1 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Show if enabled',
          'php' => 'return variable_get(\'sitesettings_page_toc\', 1);',
        ),
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'ecfa4fb5-2987-489a-bb1c-8df4698ab7a3';
  $display->content['new-ecfa4fb5-2987-489a-bb1c-8df4698ab7a3'] = $pane;
  $display->panels['right'][4] = 'new-ecfa4fb5-2987-489a-bb1c-8df4698ab7a3';
  $pane = new stdClass();
  $pane->pid = 'new-8bb1b949-7704-4b5e-8319-3252cc9e361d';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'contact_list_by_term-panel_pane_2';
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
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '8bb1b949-7704-4b5e-8319-3252cc9e361d';
  $display->content['new-8bb1b949-7704-4b5e-8319-3252cc9e361d'] = $pane;
  $display->panels['right'][5] = 'new-8bb1b949-7704-4b5e-8319-3252cc9e361d';
  $pane = new stdClass();
  $pane->pid = 'new-ed0b22dc-9726-4924-a202-ba113895d112';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'section-panel_pane_4';
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
  $pane->uuid = 'ed0b22dc-9726-4924-a202-ba113895d112';
  $display->content['new-ed0b22dc-9726-4924-a202-ba113895d112'] = $pane;
  $display->panels['top'][0] = 'new-ed0b22dc-9726-4924-a202-ba113895d112';
  $pane = new stdClass();
  $pane->pid = 'new-10846474-4abf-44d4-932e-e4ce538c106f';
  $pane->panel = 'top';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '10846474-4abf-44d4-932e-e4ce538c106f';
  $display->content['new-10846474-4abf-44d4-932e-e4ce538c106f'] = $pane;
  $display->panels['top'][1] = 'new-10846474-4abf-44d4-932e-e4ce538c106f';
  $pane = new stdClass();
  $pane->pid = 'new-f874ee65-bce4-4c3d-95cc-10e563299720';
  $pane->panel = 'top';
  $pane->type = 'page_breadcrumb';
  $pane->subtype = 'page_breadcrumb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'small',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f874ee65-bce4-4c3d-95cc-10e563299720';
  $display->content['new-f874ee65-bce4-4c3d-95cc-10e563299720'] = $pane;
  $display->panels['top'][2] = 'new-f874ee65-bce4-4c3d-95cc-10e563299720';
  $pane = new stdClass();
  $pane->pid = 'new-229a511c-c26f-47ec-8a7e-85ff0d3f70de';
  $pane->panel = 'top';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '229a511c-c26f-47ec-8a7e-85ff0d3f70de';
  $display->content['new-229a511c-c26f-47ec-8a7e-85ff0d3f70de'] = $pane;
  $display->panels['top'][3] = 'new-229a511c-c26f-47ec-8a7e-85ff0d3f70de';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-0f80f603-4ffc-44fa-bdd3-0ccbd6ad6fd6';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
