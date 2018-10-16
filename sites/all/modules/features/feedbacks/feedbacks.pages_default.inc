<?php
/**
 * @file
 * feedbacks.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function feedbacks_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'feedback_view';
  $page->task = 'page';
  $page->admin_title = 'Feedback view';
  $page->admin_description = '';
  $page->path = 'node/%node/feedback';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      1 => array(
        'name' => 'entity_bundle:node',
        'settings' => array(
          'type' => array(
            'page' => 'page',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      3 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access dashboard',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Feedback',
    'name' => 'navigation',
    'weight' => '2',
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
  $handler->name = 'page_feedback_view_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'feedback_view';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(),
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0f43f89b-12c6-4392-a388-28ca9d8b3c9e';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-60177520-e69a-42b7-b41a-5bc8c37982d8';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '60177520-e69a-42b7-b41a-5bc8c37982d8';
  $display->content['new-60177520-e69a-42b7-b41a-5bc8c37982d8'] = $pane;
  $display->panels['top'][0] = 'new-60177520-e69a-42b7-b41a-5bc8c37982d8';
  $pane = new stdClass();
  $pane->pid = 'new-7991866f-8aa4-4094-a963-de9d51e4febb';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'feedbacks-feedback_chart';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7991866f-8aa4-4094-a963-de9d51e4febb';
  $display->content['new-7991866f-8aa4-4094-a963-de9d51e4febb'] = $pane;
  $display->panels['top'][1] = 'new-7991866f-8aa4-4094-a963-de9d51e4febb';
  $pane = new stdClass();
  $pane->pid = 'new-66f15eb8-f0cb-4d97-9c97-19863c6fa955';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'page_feedbacks-panel_pane_1';
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
    'css_class' => 'col-md-9 col-md-push-1',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '66f15eb8-f0cb-4d97-9c97-19863c6fa955';
  $display->content['new-66f15eb8-f0cb-4d97-9c97-19863c6fa955'] = $pane;
  $display->panels['top'][2] = 'new-66f15eb8-f0cb-4d97-9c97-19863c6fa955';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['feedback_view'] = $page;

  return $pages;

}
