<?php

/**
 * @file
 * Default theme implementation for displaying a single search result.
 *
 * This template renders a single search result and is collected into
 * search-results.tpl.php. This and the parent template are
 * dependent to one another sharing the markup for definition lists.
 *
 * Available variables:
 * - $url: URL of the result.
 * - $title: Title of the result.
 * - $snippet: A small preview of the result. Does not apply to user searches.
 * - $info: String of all the meta information ready for print. Does not apply
 *   to user searches.
 * - $info_split: Contains same data as $info, split into a keyed array.
 * - $module: The machine-readable name of the module (tab) being searched, such
 *   as "node" or "user".
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Default keys within $info_split:
 * - $info_split['type']: Node type (or item type string supplied by module).
 * - $info_split['user']: Author of the node linked to users profile. Depends
 *   on permission.
 * - $info_split['date']: Last update of the node. Short formatted.
 * - $info_split['comment']: Number of comments output as "% comments", %
 *   being the count. Depends on comment.module.
 *
 * Other variables:
 * - $classes_array: Array of HTML class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $title_attributes_array: Array of HTML attributes for the title. It is
 *   flattened into a string within the variable $title_attributes.
 * - $content_attributes_array: Array of HTML attributes for the content. It is
 *   flattened into a string within the variable $content_attributes.
 *
 * Since $info_split is keyed, a direct print of the item is possible.
 * This array does not apply to user searches so it is recommended to check
 * for its existence before printing. The default keys of 'type', 'user' and
 * 'date' always exist for node searches. Modules may provide other data.
 * @code
 *   <?php if (isset($info_split['comment'])): ?>
 *     <span class="info-comment">
 *       <?php print $info_split['comment']; ?>
 *     </span>
 *   <?php endif; ?>
 * @endcode
 *
 * To check for all available data within $info_split, use the code below.
 * @code
 *   <?php print '<pre>'. check_plain(print_r($info_split, 1)) .'</pre>'; ?>
 * @endcode
 *
 * @see template_preprocess()
 * @see template_preprocess_search_result()
 * @see template_process()
 *
 * @ingroup themeable
 */

$node = node_load($result['node']->entity_id);
if (!empty($node->field_image[LANGUAGE_NONE][0])) {
  $image_item = array(
    'style_name' => 'dlaw4_image', // just enter the sytle name you'd like
    'path' => $node->field_image[LANGUAGE_NONE][0]['uri'],
    'width' => '',
    'height' => '',
    'alt' => $node->title, // optional
    'title' => $node->title, // optional
  );
  $output_img =  theme('image_style', $image_item);
}
?>

<li class="result-list-element row">
  <?php print render($title_prefix); ?>

  <?php if (!empty($output_img)) : ?>

    <div class="col-sm-8 text-result-9">

      <h3 class="title"<?php print $title_attributes; ?>>
        <a href="<?php print $url; ?>">
          <span><?php print $title; ?></span>
        </a>
      </h3>
      <div class="search-snippet-info small">
        <?php print $snippet; ?>
      </div>
      <?php print render($title_suffix); ?>
    </div>

    <div class="col-sm-4 image-result">
      <a href="/node/<?php print $result['node']->entity_id ?>"><div class="image-holder"><?php print $output_img; ?></div></a>
    </div>

  <?php else: // ------------------------- if no image at all ?>

  <div class="col-sm-12 text-result-12">
    <h3 class="title"<?php print $title_attributes; ?>>
      <a href="<?php print $url; ?>">
        <span><?php print $title; ?></span>
      </a>
    </h3>
    <div class="search-snippet-info small">
      <?php print $snippet; ?>
    </div>
    <?php print render($title_suffix); ?>
  </div>

  <?php endif; ?>


</li>
