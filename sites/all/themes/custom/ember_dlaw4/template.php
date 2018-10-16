<?php

// /**
//  * Implements hook_html_head_alter().
//  */
// function ember_dlaw4_html_head_alter(&$head_elements) {
//   $head_elements['viewport'] = array(
//     '#type' => 'html_tag',
//     '#tag' => 'meta',
//     '#attributes' => array(
//       'name' => 'viewport',
//       'content' => 'width=device-width,initial-scale=1,maximum-scale=1,user-scalable=0'),
//   );
// }

/**
 * Implements hook_preprocess_page().
 */
function ember_dlaw4_preprocess_page(&$variables) {
  drupal_add_js(path_to_theme('dlaw4_bootswatch') . '/js/layout_helper.js', 'file');

  if ($_SERVER['REQUEST_URI'] == '/admin/structure/taxonomy/category') {
    drupal_add_js(path_to_theme('dlaw4_bootswatch') . '/js/update-topic-help-text.js', 'file');
  }

  // handle secondary tabs
//----------------------------- This generates Sidebar menu for Settings. [1]
  // if (isset($variables['tabs']['#secondary'])) {
  //   $variables['my_secondary'] = $variables['tabs']['#secondary'];

  //   if (!empty($variables['my_secondary'])) {
  //     foreach ($variables['my_secondary'] as $secondary_tab) {
  //       $secondary_tab['#link']['#options'] = array('attributes' => array('class' => array('list-group-item')));
  //     }
  //   }
  // }
  // -------------------------- end [1]
}



/**
 * Implements hook_preprocess_block()
 */

function ember_dlaw4_preprocess_block(&$vars) {

  $path =  current_path();

  $ignore_array  = array('system-main');
  if ($path =='admin/dashboard/appearance/frontlayout') {

    // /* Set shortcut variables. Hooray for less typing! */
    $block_id = $vars['block']->module . '-' . $vars['block']->delta;

    if ( !in_array($block_id, $ignore_array)) {
      $classes = &$vars['classes_array'];
      $classes[] = 'panel panel-default';

      $title_classes = &$vars['title_attributes_array']['class'];
      $title_classes[] = 'panel-title';

      $prefix = &$vars['title_prefix'];
      $suffix = &$vars['title_suffix'];
      $prefix ='<div class="panel-heading">';
      $suffix = '</div>';

      $content_classes = &$vars['content_attributes_array']['class'];
      $content_classes[] = 'hello';

      // /* Add global classes to all blocks */
      // $title_classes[] = 'block-title';
      // $content_classes[] = 'block-content';

      //  // Uncomment the line below to see variables you can use to target a field
      // print '<br>' . '<br/>';

      // /* Add classes based on the block delta. */
      // switch ($block_id) {
      //   /* System Navigation block */
      //   case 'system-navigation':
      //     $classes[] = 'block-rounded';
      //     $title_classes[] = 'block-fancy-title';
      //     $content_classes[] = 'block-fancy-content';
      //     break;
      //   /* Main Menu block */
      //   case 'system-main-menu':
      //   /* User Login block */
      //   case 'user-login':
      //     $title_classes[] = 'element-invisible';
      //     break;
      // }

    }
  }
}








// function ember_dlaw4_menu_local_tasks_alter(&$data, $router_item, $root_path) {
//   // if ($some_condition) {
//     // Grab the first tab.
//     $first_tab = &$data['tabs'][0]['output'][0];

//     $tt = &$data['tabs'][1]['output'];
//     if (!empty($tt)) {
//       foreach ($tt as $secondary_tab) {
//         $secondary_tab['#link']['#options'] = array('attributes' => array('class' => array('list-group-item')));
//       }
//     }

//     // Add a class to the link element.
//     // $first_tab['#link']['localized_options']['attributes']['class'][] = 'some-class';
//   // }
// }

/**
 * Implements hook_menu_local_action().
 */
// function ember_dlaw4_menu_local_action($variables) {
//   // $item = menu_get_item();
//   // print_r($variables['secondary']);
//   // exit;
// }

//----------------------------- This generates Sidebar menu for Settings. [3]

// function ember_dlaw4_menu_local_task($variables) {
//   $link = $variables['element']['#link'];
//   $link_text = $link['title'];

//   // to filter out link under dashboard/settings
//   $mystring = $link['href'];
//   $findme   = 'admin/dashboard/settings';
//   $pos = strpos($mystring, $findme);


//   // ---------------------------------------------- ! <--- filter from here
//   if ( !empty($variables['element']['#active']) &&  ! ( $pos !== false  && (strpos($link_text, 'Settings') === false) ) ) {
//     // Add text to indicate active tab for non-visual users.
//     $active = '<span class="element-invisible">' . t('(active tab)') . '</span>';

//     // If the link does not contain HTML already, check_plain() it now.
//     // After we set 'html'=TRUE the link will not be sanitized by l().
//     if (empty($link['localized_options']['html'])) {
//       $link['title'] = check_plain($link['title']);
//     }
//     $link['localized_options']['html'] = TRUE;
//     $link_text = t('!local-task-title!active', array('!local-task-title' => $link['title'], '!active' => $active));
//   }


//   if ( $pos !== false  && (strpos($link_text, 'Settings') === false) ) {
//     // return '<li class="list-group-item ' . (!empty($variables['element']['#active']) ? ' active' : '') . '">' . l($link_text, $link['href'], $link['localized_options']) . "</li>\n";

//     return l($link_text, $link['href'], array('attributes' => array('class' => array('list-group-item'))));

//   } else {
//     return '<li' . (!empty($variables['element']['#active']) ? ' class="active"' : '') . '>' . l($link_text, $link['href'], $link['localized_options']) . "</li>\n";
//   }


// }

// function ember_dlaw4_menu_local_tasks(&$variables) {

//   if (isset($variables['secondary'])) {
//     unset($variables['secondary']);


//     // foreach($variables['secondary'] as $menu_item_key => $menu_attributes) {
//     // $variables['secondary'][$menu_item_key]['#link']['localized_options'] = array(
//     //   'attributes' => array('class' => array('uuua')),
//     // );
//     // }

//   }
//   //if (isset($variables['primary'])) {
//     // unset($variables['primary']); -- ne rakd be

//     // foreach($variables['primary'] as $menu_item_key => $menu_attributes) {
//     // $variables['primary'][$menu_item_key]['#link']['localized_options'] = array(
//     //   'attributes' => array('class' => array('colorbox-load')),
//     // );
//     // }
//   //}
//   return theme_menu_local_tasks($variables);
// }




//----------------------------- end [3]











// /**
//  * Override or insert variables into the page template.
//  */
// function ember_dlaw4_process_page(&$vars) {
//   if (theme_get_setting('display_breadcrumbs') == 1) {
//     unset($vars['breadcrumb']);
//   }
// }

// /**
//  * Display the list of available node types for node creation.
//  */
// function ember_dlaw4_node_add_list($variables) {
//   $content = $variables['content'];
//   $output = '';
//   if ($content) {
//     $output = '<ul class="admin-list">';
//     foreach ($content as $item) {
//       $output .= '<li class="clearfix">';
//       $output .= '<span class="label">' . l($item['title'], $item['href'], $item['localized_options']) . '</span>';
//       $output .= '<div class="description">' . filter_xss_admin($item['description']) . '</div>';
//       $output .= '</li>';
//     }
//     $output .= '</ul>';
//   }
//   else {
//     $output = '<p>' . t('You have not created any content types yet. Go to the <a href="@create-content">content type creation page</a> to add a new content type.', array('@create-content' => url('admin/structure/types/add'))) . '</p>';
//   }
//   return $output;
// }

// /**
//  * Overrides theme_admin_block_content().
//  *
//  * Use unordered list markup in both compact and extended mode.
//  */
// function ember_dlaw4_admin_block_content($variables) {
//   $content = $variables['content'];
//   $output = '';
//   if (!empty($content)) {
//     $output = system_admin_compact_mode() ? '<ul class="admin-list compact">' : '<ul class="admin-list">';
//     foreach ($content as $item) {
//       $output .= '<li class="leaf">';
//       $output .= l($item['title'], $item['href'], $item['localized_options']);
//       if (isset($item['description']) && !system_admin_compact_mode()) {
//         $output .= '<div class="description">' . filter_xss_admin($item['description']) . '</div>';
//       }
//       $output .= '</li>';
//     }
//     $output .= '</ul>';
//   }
//   return $output;
// }

// /**
//  * Override of theme_tablesort_indicator().
//  *
//  * Use our own image versions, so they show up as black and not gray on gray.
//  */
// function ember_dlaw4_tablesort_indicator($variables) {
//   $style = $variables['style'];
//   $theme_path = drupal_get_path('theme', 'ember_dlaw4');
//   if ($style == 'asc') {
//     return theme('image', array('path' => $theme_path . '/images/arrow-asc.png', 'alt' => t('sort ascending'), 'width' => 13, 'height' => 13, 'title' => t('sort ascending')));
//   }
//   else {
//     return theme('image', array('path' => $theme_path . '/images/arrow-desc.png', 'alt' => t('sort descending'), 'width' => 13, 'height' => 13, 'title' => t('sort descending')));
//   }
// }

// /**
//  * Implements hook_css_alter().
//  */
// function ember_dlaw4_css_alter(&$css) {
//   // Use Ember_dlaw4's jQuery UI styles instead of the defaults.
//   $jquery = array('core', 'dialog', 'tabs', 'theme');
//   foreach($jquery as $module) {
//     if (isset($css['misc/ui/jquery.ui.' . $module . '.css'])) {
//       $css['misc/ui/jquery.ui.' . $module . '.css']['data'] = drupal_get_path('theme', 'ember_dlaw4') . '/styles/jquery.ui.' . $module . '.css';
//     }
//   }

//   // If the media module is installed, Replace it with Ember_dlaw4's.
//   if (module_exists('media')) {
//     $media_path = drupal_get_path('module', 'media') . '/css/media.css';
//     if(isset($css[$media_path])) {
//       $css[$media_path]['data'] = drupal_get_path('theme', 'ember_dlaw4') . '/styles/media.css';
//     }
//   }
// }
