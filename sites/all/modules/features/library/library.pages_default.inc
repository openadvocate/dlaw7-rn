<?php
/**
 * @file
 * library.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function library_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__redirect';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Redirect',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'topics/%term:tid',
    'name' => 'redirect',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'category' => 'category',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['term_view__redirect'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function library_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'library';
  $page->task = 'page';
  $page->admin_title = 'Library';
  $page->admin_description = 'Shows top level library terms.';
  $page->path = 'topics';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_library_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'library';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Library Top',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'library-page-top',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
      'default' => NULL,
      'top' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Topics';
  $display->uuid = '24f05c5e-9713-47c7-be6e-d1783e67046c';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-dfea1b7c-10f8-4784-80da-ecfe569000a7';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'library-library';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dfea1b7c-10f8-4784-80da-ecfe569000a7';
  $display->content['new-dfea1b7c-10f8-4784-80da-ecfe569000a7'] = $pane;
  $display->panels['left'][0] = 'new-dfea1b7c-10f8-4784-80da-ecfe569000a7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-dfea1b7c-10f8-4784-80da-ecfe569000a7';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['library'] = $page;

  return $pages;

}
