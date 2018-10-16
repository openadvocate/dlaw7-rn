<?php
/**
 * @file
 * dlaw4_section.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function dlaw4_section_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'node_section_view';
  $page->task = 'page';
  $page->admin_title = 'Section view';
  $page->admin_description = '';
  $page->path = 'node/%node/section';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node being displayed',
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
  $handler->name = 'page_node_section_view_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'node_section_view';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Section',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '909df1b3-fbac-42f6-bfe5-4407bc8a41dd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3a1a577f-c941-4282-bb85-8657d1c861d4';
    $pane->panel = 'middle';
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
      'override_title' => 1,
      'override_title_text' => '%title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3a1a577f-c941-4282-bb85-8657d1c861d4';
    $display->content['new-3a1a577f-c941-4282-bb85-8657d1c861d4'] = $pane;
    $display->panels['middle'][0] = 'new-3a1a577f-c941-4282-bb85-8657d1c861d4';
    $pane = new stdClass();
    $pane->pid = 'new-8c37c45a-3526-4886-baf3-fddb2922fa65';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'section-panel_pane_2';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8c37c45a-3526-4886-baf3-fddb2922fa65';
    $display->content['new-8c37c45a-3526-4886-baf3-fddb2922fa65'] = $pane;
    $display->panels['middle'][1] = 'new-8c37c45a-3526-4886-baf3-fddb2922fa65';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3a1a577f-c941-4282-bb85-8657d1c861d4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['node_section_view'] = $page;

  return $pages;

}
