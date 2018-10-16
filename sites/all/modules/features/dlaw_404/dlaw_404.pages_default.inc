<?php
/**
 * @file
 * dlaw_404.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function dlaw_404_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = '404_not_found_page';
  $page->task = 'page';
  $page->admin_title = '404 Not Found Page';
  $page->admin_description = 'Custom 404 Not Found Page';
  $page->path = '404-not-found';
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
  $handler->name = 'page_404_not_found_page__panel';
  $handler->task = 'page';
  $handler->subtask = '404_not_found_page';
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
  $display->layout = 'bootstrap_threecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Page Not Found';
  $display->uuid = '1562a044-9e0c-4db0-9209-0c30ae60dd6f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_404_not_found_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f80b2a7f-63fa-4815-9247-bf2b78061dd7';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'dlaw_404-dlaw_404_popular_pages';
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
  $pane->uuid = 'f80b2a7f-63fa-4815-9247-bf2b78061dd7';
  $display->content['new-f80b2a7f-63fa-4815-9247-bf2b78061dd7'] = $pane;
  $display->panels['middle'][0] = 'new-f80b2a7f-63fa-4815-9247-bf2b78061dd7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f80b2a7f-63fa-4815-9247-bf2b78061dd7';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['404_not_found_page'] = $page;

  return $pages;

}
