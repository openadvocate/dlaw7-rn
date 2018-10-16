<?php

/**
 * @file
 * template.php
 */

/**
 * Implements template_preprocess_html().
 */
function dlaw4_bootswatch_preprocess_html(&$vars) {
  global $base_path;

  $vars["apple_touch_icon"] = '<link rel="apple-touch-icon" href="' . $base_path . drupal_get_path('theme', 'dlaw4_bootswatch') . '/apple-touch-icon.png"/>';

  if (module_exists('dlawsettings_appearance') && function_exists('dlawsettings_appearance_color_schemas')) {

    $color_variations = dlawsettings_appearance_color_schemas();
    $default_color_schema = variable_get('theme_color_schema', 'cosmo');

    if (isset($color_variations[$default_color_schema]) && count($color_variations[$default_color_schema]['css'])) {
      foreach ($color_variations[$default_color_schema]['css'] as $file) {
        drupal_add_css($file, array('weight' => 100));
      }
    }
  }

  // Use shorter logotype for head title for better SEO.
  if (strpos($vars['head_title'], ' | ')) {
    list($page_title, $site_name) = explode(' | ', $vars['head_title'], 2);
    if ($logotype = variable_get('logotype')) {
      $site_name = $logotype;
    }
    $vars['head_title'] = $page_title . ' - ' . $site_name;
  }

  // Kiosk mode to hide header/footer and sidebars.
  if (isset($_GET['kiosk'])) {
    // This method to remove the setting is ideal but, won't work at the hosted
    // sites (it worked at local site).
    // header_remove('X-Frame-Options');

    // As an alternative, if we cannot remove it, set it to ALLOWALL. It is not
    // a value recognized in the standard, but Google is using it, and seems to
    // work in browsers as long as the value is not DENY or SAMEORIGIN.
    drupal_add_http_header('X-Frame-Options', 'ALLOWALL');

    $vars['classes_array'][] = 'kiosk';

    // Open links in a new tab in Kiosk mode.
    drupal_add_html_head(array(
      '#tag' => 'base',
      '#attributes' => array(
        'target' => '_blank',
      ),
    ), 'base_target_for_kiosk_mode');
  }
}

/**
 * Implements hook_preprocess_page().
 */
function dlaw4_bootswatch_preprocess_page(&$vars) {
  // $vars['site_name'] = variable_get('site_name', 'Default');

  // footer Menu
  $menu_name = 'menu-footer-menu';
  $menu_id = 'footer-menu';
  $vars['my_custom_footer_menu'] = theme('links', array('links' => menu_navigation_links($menu_name), 'attributes' => array('id' => $menu_id, 'role' => 'navigation', 'class'=> array('links', 'inline'))));

  // Copyright_info
  $year = date("Y");
  $vars['site_copyright_info'] = str_replace("[year]", $year, strip_tags(variable_get('site_copyright_info', '&copy; [year]')) );

  $vars['mission'] = strip_tags(variable_get('mission', ''));
  $vars['missionbg_search'] = '';
  $vars['missionbg_search_position'] = variable_get('sitesettings_default_missionbg_search', 'none');
  if ($vars['missionbg_search_position'] != 'none') {
    $block = module_invoke('apachesolr_panels', 'block_view', 'search_form');
    $vars['missionbg_search'] = render($block['content']);
  }

  $missionbg_image = variable_get('sitesettings_default_missionbg_image', '');
  $missionbg_image_fid = variable_get('sitesettings_default_missionbg_image_fid', '');

  $darken = variable_get('sitesettings_default_missionbg_darken', 0);
  $diffuse = variable_get('sitesettings_default_missionbg_diffuse', 0);

  if (!empty($darken)) {
    $vars['darken'] = $darken;
  }
  if (!empty($diffuse)) {
    $vars['diffuse'] = $diffuse;
  }

  if (!empty($missionbg_image)) {
    $vars['mission_background_state'] = $missionbg_image;
    $vars['mission_background'] = image_style_url('hero', $missionbg_image);
  } else {
    $vars['mission_background_state'] = 0;
    $vars['mission_background'] = '';
  }

  // Column
  $dlaw4_col_class = "col-sm-12";
  $col_counter = 0;

  if (!empty($vars['page']['front_col1'])){
    $col_counter ++;
  }
  if (!empty($vars['page']['front_col2'])){
    $col_counter ++;
  }
  if (!empty($vars['page']['front_col3'])){
    $col_counter ++;
  }

  switch ($col_counter) {
    case 1:
      $dlaw4_col_class = "col-sm-12";
      break;

    case 2:
      $dlaw4_col_class = "col-sm-6";
      break;

    default:
      $dlaw4_col_class = "col-sm-4";
      break;
  }
  $vars['dlaw4_col_class'] = $dlaw4_col_class;

  if ((arg(0) == 'topics') and is_numeric(arg(1))){
    $vars['library_listing'] = true;
  }

  _dlaw4_bootswatch_add_meta_image_for_sns();

  _dlaw4_bootswatch_add_structured_data();

  _dlaw4_bootswatch_add_writeclearly_js();
}

/**
 * Helper for dlaw4_bootswatch_preprocess_page().
 * Add meta data (og:image, twitter:image) for social network sites.
 */
function _dlaw4_bootswatch_add_meta_image_for_sns() {
  // add open graph line for facebook
  //<meta property="og:image" content="http://YOUR_IMAGE_URL" />
  global $base_url;

  if ($node = menu_get_object() and !empty($node->type)) {
    if(!empty($node->field_image['und'][0]['uri'])){
      $img = file_create_url($node->field_image['und'][0]['uri']);
    }
  }

  if (empty($img) and $logo_path = theme_get_setting('logo_path')) {
    $img = image_style_url('logo_for_og', $logo_path);
  }

  if (empty($img)) {
    $img = file_create_url(drupal_get_path('theme', 'dlaw4_bootswatch') . '/oa-noshadow-transbg.png');
  }

  if (!empty($img)) {
    drupal_add_html_head(array(
      '#tag' => 'meta',
      '#attributes' => array(
        "property" => "og:image",
        "content" => $img,
    )),'facebook_share_image');

    drupal_add_html_head(array(
      '#tag' => 'meta',
      '#attributes' => array(
        "property" => "twitter:image",
        "content" => $img,
    )),'twitter_share_image');
  }
}

/**
 * Helper for dlaw4_bootswatch_preprocess_page().
 * Add Structured Data
 * See https://developers.google.com/search/docs/guides/intro-structured-data
 */
function _dlaw4_bootswatch_add_structured_data() {
  // Initialize Structured Data.
  $sd = array();

  if (drupal_is_front_page()) {
    $sd[] = _dlaw4_add_structured_data_site();
  }
  elseif ($node = menu_get_object()) {
    $sd[] = _dlaw4_add_structured_data_site();

    if ($node->type == 'contact') {
      $sd[] = _dlaw4_add_structured_data_type('Organization', $node, array(
        'name', 'priceRange', 'address', 'areaServed', 'telephone',
        'description',
      ));
    }
    else {
      $is_event = !empty($node->field_date['und'][0]['value']);
      $is_news  = !empty($node->field_news['und'][0]['value']);

      if ($is_event) {
        $sd[] = _dlaw4_add_structured_data_type('Event', $node, array(
          'name', 'areaServed', 'keywords', 'description',
          'startDate/endDate', 'location', 'image',
        ));
      }

      if ($is_news) {
        $sd[] = _dlaw4_add_structured_data_type('NewsArticle', $node, array(
          'headline', 'author', 'areaServed', 'keywords',
          'description', 'datePublished', 'dateModified', 'image',
        ));
      }

      if (!$is_event and !$is_news) {
        $sd[] = _dlaw4_add_structured_data_type('WebPage', $node, array(
          'name', 'areaServed', 'keywords', 'description',
          'image',
        ));
      }
    }
  }
  else {
    return;
  }

  array_walk_recursive($sd, function(&$value) {
    $value = str_replace("\n", "", $value);
    $value = str_replace("\r", "", $value);
  });

  $element = array(
    '#tag' => 'script',
    '#type' => 'html_tag',
    '#attributes' => array(
      'type' => 'application/ld+json',
    ),
    '#value' => json_encode($sd, JSON_PRETTY_PRINT | JSON_UNESCAPED_SLASHES | JSON_HEX_TAG | JSON_HEX_APOS | JSON_HEX_AMP | JSON_HEX_QUOT),
  );

  drupal_add_html_head($element, 'structured_data');
}

function _dlaw4_add_structured_data_site() {
  $sd = array(
    '@context' => 'http://schema.org',
    '@type' => "Organization",
    'url' => url('', array('absolute' => TRUE)),
    'name' => variable_get('site_name', 'Non-profit legal services'),
    'description' => variable_get('site_slogan', 'Non-profit legal services'),
  );

  $same_as = array_values(array_filter(array(
    variable_get('dlaw_social_media_links_twitter_url', ''),
    variable_get('dlaw_social_media_links_facebook_url', ''),
    variable_get('dlaw_social_media_links_youtube_url', ''),
    variable_get('dlaw_social_media_links_vimeo_url', ''),
    variable_get('dlaw_social_media_links_flickr_url', ''),
    variable_get('dlaw_social_media_links_linkedin_url', ''),
    variable_get('dlaw_social_media_links_instagram_url', ''),
    variable_get('dlaw_social_media_links_pinterest_url', ''),
  )));

  if ($same_as) {
    $sd['sameAs'] = $same_as;
  }

  return $sd;
}

function _dlaw4_add_structured_data_type($type, $node, $fields) {
  $sd = array(
    '@context'    => 'http://schema.org',
    '@type'       => $type,
  );

  if (in_array('name', $fields)) {
    $sd['name'] = check_plain($node->title);
  }

  if (in_array('headline', $fields)) {
    $sd['headline'] = check_plain($node->title);
  }

  if (in_array('author', $fields)) {
    $sd['author']    =
    $sd['publisher'] = array(
      '@type' => 'Organization',
      'name' => variable_get('site_name', 'Non-profit legal services'),
    );

    $sd['publisher']['logo'] = array(
      '@type' => 'ImageObject',
      'url' => file_create_url(variable_get('sitesettings_default_logo', ''))
    );
  }

  if (in_array('priceRange', $fields)) {
    $ds['priceRange'] = 'Free for those who qualify.';
  }

  if (in_array('address', $fields) and !empty($node->field_contact_address['und'][0])) {
    $address = $node->field_contact_address['und'][0];

    $sd['address'] = array(
      '@type' => 'PostalAddress',
      'addressLocality' => $address['locality'] . ', ' . $address['administrative_area'],
      'postalCode' => $address['postal_code'],
      'streetAddress' => $address['thoroughfare']
    );
  }

  if (in_array('areaServed', $fields) and !empty($node->field_zipcode['und'])) {
    $sd['areaServed'] = 'ZIP Codes served: '
      . join(', ', _dlaw4_get_term_names($node->field_zipcode));
  }

  if (in_array('telephone', $fields) and !empty($node->field_contact_phone['und'][0]['value'])) {
    $sd['telephone'] = $node->field_contact_phone['und'][0]['value'];
  }

  if (in_array('keywords', $fields)) {
    $keywords = array();
    if (!empty($node->field_category['und'])) {
      $keywords = _dlaw4_get_term_names($node->field_category);
    }
    if (!empty($node->field_tags['und'])) {
      $keywords = array_merge($keywords, _dlaw4_get_term_names($node->field_tags));
    }
    if (!empty($keywords)) {
      $sd['keywords'] = join(', ', $keywords);
    }
  }

  if (in_array('description', $fields)) {
    if (!empty($node->body['und'][0]['summary'])) {
      $sd['description'] = $node->body['und'][0]['summary'];
    }
    elseif (!empty($node->body['und'][0]['value'])) {
      $body = $node->body['und'][0]['value'];
      $body = str_replace('&nbsp;', '', $body);
      $body = preg_replace('#\s\s+#', ' ', $body);

      $sd['description'] = text_summary(strip_tags($body));
    }
    else {
      $sd['description'] = '';
    }
  }

  if (in_array('datePublished', $fields)) {
    $sd['datePublished'] = date('Y-m-d', $node->created);
  }

  if (in_array('dateModified', $fields)) {
    $sd['dateModified'] = date('Y-m-d', $node->changed);
  }

  if (in_array('startDate/endDate', $fields) and !empty($node->field_date['und'][0])) {
    $date = $node->field_date['und'][0];

    if (!empty($date['value'])) {
      $sd['startDate'] = date('c', $date['value']);
    }

    if (!empty($date['value2']) and $date['value2'] != $date['value']) {
      $sd['endDate'] = date('c', $date['value2']);
    }
  }

  if (in_array('location', $fields) and !empty($node->field_location['und'][0]['value'])) {
    $sd['location'] = array(
      '@type' => 'Place',
      'name' => check_plain($node->field_location['und'][0]['value']),
      'address' => check_plain($node->field_location['und'][0]['value']),
    );
  }

  if (in_array('image', $fields)) {
    if (!empty($node->field_image['und'][0])) {
      $img = $node->field_image['und'][0];

      $sd['image'] = array(
        '@type' => 'ImageObject',
        'url' => file_create_url($img['uri']),
        'width' => $img['width'],
        'height' => $img['height'],
      );
    }
    elseif (variable_get('sitesettings_default_logo_fid', 0)) {
      $logo = file_load(variable_get('sitesettings_default_logo_fid', 0));

      $sd['image'] = array(
        '@type' => 'ImageObject',
        'url' => file_create_url($logo->uri),
        'width' => $logo->metadata['width'],
        'height' => $logo->metadata['height'],
      );
    }
  }

  return $sd;
}

function _dlaw4_get_term_names($field) {
  $tids = array_map(function ($item) {
    return $item['tid'];
  }, $field['und']);

  $terms = taxonomy_term_load_multiple($tids);
  $names = array();
  foreach ($terms as $term) {
    $names[] = $term->name;
  }

  return $names;
}

/**
 * Helper for dlaw4_bootswatch_preprocess_page().
 * Add WriteClearly JS so content editors can use it easily.
 */
function _dlaw4_bootswatch_add_writeclearly_js() {
  if (user_is_anonymous()) return;
  if (!user_access('access content overview')) return;
  if (!($node = menu_get_object() and !empty($node->type))) return;
  if (in_array($node->type, array('partner', 'referral'))) return;

  $js =<<<JS
(function ($) {
  $(function() {
    $('.tabs--primary').append('<li><a href="javascript: dlaw_run_writeclearly()">WriteClearly</a></li>');
  });

  window.dlaw_run_writeclearly = function () {
    var wcDomain = 'writeclearly.openadvocate.org';
    var jsCode = document.createElement('script');
    if (window.location.protocol == 'https:') {
      jsCode.setAttribute('src', 'https://' + wcDomain + '/bookmarklet.js');
    } else {
      jsCode.setAttribute('src', 'http://' + wcDomain + '/bookmarklet.js');
    }

    document.body.appendChild(jsCode);
  };
})(jQuery);
JS;

  drupal_add_js($js, 'inline');
}

function dlaw4_bootswatch_menu_tree__menu_block__main_menu($vars) {
  return '<ul class="menu nav navbar-nav">' . $vars['tree'] . '</ul>';
}

function dlaw4_bootswatch_print_pdf_tcpdf_header($vars){
  $pdf = $vars['pdf'];
  $pdf->setHeaderMargin(2);
  $pdf->setPrintHeader(false);
  $pdf->setPrintFooter(false);
  return $pdf;
}

function make_href_root_relative($input) {
  return preg_replace('!http(s)?://' . "$_SERVER[HTTP_HOST]" . '/!', '/', $input);
}
/**
 * Implements hook_preprocess_HOOK().
 */
function dlaw4_bootswatch_preprocess_print(&$variables) {
  $node = $variables['node'];

  $variables['node_url'] = "http://$_SERVER[HTTP_HOST]/" . drupal_get_path_alias('node/'.$node->nid);

  if ( !empty($node->field_qr_url[LANGUAGE_NONE][0]['fid']) ){
    $file = file_load( $node->field_qr_url[LANGUAGE_NONE][0]['fid'] );
    $img_arr = array(
      'path' => $file->uri,
      'width' => '',
      'height' => '',
      'alt' => $node->title,
      'title' => $node->title,
      'attributes' => array('class' => array('myclass'),'style' => 'margin-left:20px;'),
      );
     //$variables['field_qr_url_image'] = '.<img src="' . drupal_realpath($file->uri) . '"/>';
     $variables['field_qr_url_image'] = make_href_root_relative(theme('image',$img_arr));
  }
}


function dlaw4_bootswatch_preprocess_image_style(&$variables) {

  if (empty($variables['alt'])) {
    $variables['alt'] = "";
  }

}

/**
 * Implements theme_breadcrumb().
 */
function dlaw4_bootswatch_breadcrumb($variables) {
  $output = '';

  if (arg(0) == 'node' and is_numeric(arg(1)) and !arg(2)) {
    $nid = arg(1);
    $node = node_load($nid);

    if ((!empty($node->field_category[LANGUAGE_NONE][0]['tid'])) && ($node->type != "contact")) {
      $tid = $node->field_category[LANGUAGE_NONE][0]['tid'];

      $output = theme('library_breadcrumb', array('parent_tid' => $tid));
      return $output;
    }
  }
  else if ((arg(0) == 'topics') and is_numeric(arg(1))){
      $tid = arg(1);
      $output = theme('library_breadcrumb', array('parent_tid' => $tid));
  } else{

    $breadcrumb = $variables['breadcrumb'];

    // Determine if we are to display the breadcrumb.
    $bootstrap_breadcrumb = theme_get_setting('bootstrap_breadcrumb');
    if (($bootstrap_breadcrumb == 1 || ($bootstrap_breadcrumb == 2 && arg(0) == 'admin')) && !empty($breadcrumb)) {
      $output = theme('item_list', array(
        'attributes' => array(
          'class' => array('breadcrumb'),
        ),
        'items' => $breadcrumb,
        'type' => 'ol',
      ));
    }

  }
  return $output;

}

/**
 * Theme search result information.
 * Overrides theme in apachesolr_panels module.
 * Based on G. Lekli's work in case 41390. https://urbaninsight.beanstalkapp.com/plnz-c/changesets/3733c541c8e35c78640cc47eb22b652ab4b66c40
 * Case 41389.
 */
function dlaw4_bootswatch_apachesolr_panels_info($variables) {
  $filters = array();

  $response = $variables['response'];
  $search = $variables['search'];

  if (!empty($search['keys'])) {
    $filters[] = '<b>' . check_plain($search['keys']) . '</b>';
  }

  $query = apachesolr_current_query(variable_get('apachesolr_default_environment', 'default'));
  if ($query) {
    $searcher = $query->getSearcher();

    $current_adapter = facetapi_adapter_load($searcher);
    $active_items = $current_adapter->getAllActiveItems();

    foreach ($active_items as $key => $value) {

      if ($value['field alias'] == 'im_field_instructors') {
        $node = node_load($value['value']);
        if ($node) {
          $filters[] = check_plain($node->title);
        }
      }
      else {
        // If the filter is not the instructor, assume it's a taxonomy term.
        $term = taxonomy_term_load($value['value']);
        if ($term) {
          $filters[] = check_plain($term->name);
        }
      }

    }
  }

  if ($total = $response->response->numFound) {
    $start = $response->response->start + 1;
    $end = $response->response->start + count($response->response->docs);

    if (!empty($filters)) {
      $info = t('Results %start - %end of %total for !filters (by relevance)', array('%start' => $start, '%end' => $end, '%total' => $total, '!filters' => implode(', ', $filters)));
    }
    else {
      $info = t('Results %start - %end of %total. To narrow results enter search keywords or select filters.', array('%start' => $start, '%end' => $end, '%total' => $total));
    }

    return $info;
  }
}

/**
 * Theme the human-readable description for a Date Repeat rule.
 *
 * TODO -
 * add in ways to store the description in the date so it isn't regenerated
 * over and over and find a way to allow description to be shown or hidden.
 */
function dlaw4_bootswatch_date_repeat_display($vars) {
  $field = $vars['field'];
  $item = $vars['item'];
  $entity = !empty($vars['node']) ? $vars['node'] : NULL;
  $output = '';
  if (!empty($item['rrule'])) {
    $output = date_repeat_rrule_description($item['rrule']);
    $output = '<div class="date-repeat-rule">' . $output . '</div>';
  }
  return $output;
}

/**
 * Implements hook_preprocess_HOOK().
 *
 * Add title of the node as alt of the image field for better SEO.
 * Effective on a featured image on a Page's view page.
 */
function dlaw4_bootswatch_preprocess_field(&$vars) {
  if ($vars['element']['#field_name'] == 'field_image') {
    if (isset($vars['element']['#object']->type)) {
      if (empty($vars['items'][0]['#item']['alt'])) {
        $vars['items'][0]['#item']['alt'] = $vars['element']['#object']->title;
      }
    }
  }
}

/**
 * Override bootstrap_textfield().
 * Same except the !HACK, where throbber icon is not added for search textbox.
 *
 * @see theme_textfield()
 */
function dlaw4_bootswatch_textfield($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'text';
  element_set_attributes($element, array(
    'id',
    'name',
    'value',
    'size',
    'maxlength',
  ));
  _form_set_class($element, array('form-text'));

  $output = '<input' . drupal_attributes($element['#attributes']) . ' />';

  $extra = '';
  if ($element['#autocomplete_path'] && !empty($element['#autocomplete_input'])) {
    drupal_add_library('system', 'drupal.autocomplete');
    $element['#attributes']['class'][] = 'form-autocomplete';

    $attributes = array();
    $attributes['type'] = 'hidden';
    $attributes['id'] = $element['#autocomplete_input']['#id'];
    $attributes['value'] = $element['#autocomplete_input']['#url_value'];
    $attributes['disabled'] = 'disabled';
    $attributes['class'][] = 'autocomplete';
    # !HACK - Begin ############################################################
    if (strpos($element['#autocomplete_path'], 'apachesolr_autocomplete_callback/') === 0) {
      $output = '<div>' . $output . '</div>';
    }
    # !HACK - End ##############################################################
    // Uses icon for autocomplete "throbber".
    elseif ($icon = _bootstrap_icon('refresh')) {
      $output = '<div class="input-group">' . $output . '<span class="input-group-addon">' . $icon . '</span></div>';
    }
    // Fallback to using core's throbber.
    else {
      $output = '<div class="input-group">' . $output . '<span class="input-group-addon">';
      // The throbber's background image must be set here because sites may not
      // be at the root of the domain (ie: /) and this value cannot be set via
      // CSS.
      $output .= '<span class="autocomplete-throbber" style="background-image:url(' . file_create_url('misc/throbber.gif') . ')"></span>';
      $output .= '</span></div>';
    }
    $extra = '<input' . drupal_attributes($attributes) . ' />';
  }

  return $output . $extra;
}

/**
 * Override theme_apachesolr_panels_spellcheck().
 *
 * Theme spellchecker results.
 */
function dlaw4_bootswatch_apachesolr_panels_spellcheck($variables) {
  return '<br><div class="spelling-suggestions"><span class="did-you-mean">' . t('Did you mean:') . ' </span><b><i>' . $variables['link'] . '</i></b></div>';
}

/**
 * Implements hook_bootstrap_colorize_text_alter().
 */
function dlaw4_bootswatch_bootstrap_colorize_text_alter(&$texts) {
  $texts['matches']['Publish'] = 'primary';
  $texts['matches']['Save As Draft'] = 'default';
}

// /**
//  * Theme function implementation for bootstrap_search_form_wrapper.
//  */
// function dlaw4_bootswatch_bootstrap_search_form_wrapper($variables) {
//   dpm($variables);
//   $output = '<div class="input-group">';
//   $output .= $variables['element']['#children'];
//   $output .= '<span class="input-group-btn">';
//   $output .= '<button type="submit" class="btn btn-default">';
//   // We can be sure that the font icons exist in CDN.
//   if (theme_get_setting('bootstrap_cdn')) {
//     $output .= _bootstrap_icon('search');
//   }
//   else {
//     $output .= t('Search');
//   }
//   $output .= '</button>';
//   $output .= '</span>';
//   $output .= '</div>';
//   return $output;
// }

// function dlaw4_bootswatch_preprocess_views_view_fields(&$vars) {
//   $view = $vars['view'];
//     if($view->name == 'contact_list_by_term') {
//       if(!empty($vars['fields']['field_contact_url'])) {
//         $search = array('">http://www.', '">https://www.', '">https://', '">http',);
//         $vars['fields']['field_contact_url']->content = str_replace($search, '">', $vars['fields']['field_contact_url']->content);
//         dpm($vars['fields']['field_contact_url']->content);

//       }
//     }
// }

// function dlaw4_bootswatch_links__menu_custom_menu(&$variables){
//  //custom theme function here
//   print_r('asd');
// }



// /**
//  * Implements template_preprocess_region().
//  */
// function dlaw4_bootswatch_preprocess_region(&$variables) {
//   $region = $variables['region'];
//   dpm($variables);
//   // Sidebars and content area need a good class to style against. You should
//   // not be using id's like #main or #main-wrapper to style contents.
//   if (in_array($region, array('front_col1')) ) {
//     $variables['classes_array'][] = 'main';
//   }
//   // // Add a "clearfix" class to certain regions to clear floated elements inside them.
//   // if (in_array($region, array('footer', 'help', 'highlight'))) {
//   //   $variables['classes_array'][] = 'clearfix';
//   // }
//   // // Add an "outer" class to the darker regions.
//   // if (in_array($region, array('header', 'footer', 'sidebar_first', 'sidebar_second'))) {
//   //   $variables['classes_array'][] = 'outer';
//   // }
// }
