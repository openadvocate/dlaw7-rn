<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
$this_node_id = (!empty($view->result[0]->nid)) ? $view->result[0]->nid : 0;

$last_node =  (!empty($view->result)) ? end($view->result) : 0;
$array_length = (!empty($view->result)) ? count($view->result) : 0;

$prev_node_nid = 0;
$next_node_nid = 0;
$this_node_pos = 0;

if ($array_length > 1 ) : ?>

<?php 
  for ($i = 0; $i < $array_length; $i++) {
    if($view->result[$i]->node_field_data_field_section_nid == $this_node_id){
      $this_node_pos = $i;
    }
  }

  if ( $this_node_pos < $array_length - 1) {
    $next = $this_node_pos+1;
    $next_node_nid = $view->result[$next]->node_field_data_field_section_nid;
  }

  if ( $this_node_pos > 0) {
    $prev = $this_node_pos-1;
    $prev_node_nid = $view->result[$prev]->node_field_data_field_section_nid;
  }
?>

  
      <ul class="pager">

          <?php if ($view->result[0]->node_field_data_field_section_nid == $this_node_id ): ?>

            <li class="previous disabled"><a href="#">&larr; Previous</a></li>
            <li class="next"><a href="/node/<?php print($next_node_nid); ?>">Next &rarr;</a></li>
                   
          <?php elseif (($last_node->node_field_data_field_section_nid == $this_node_id)) : ?>

            <li class="previous"><a href="/node/<?php print($prev_node_nid); ?>">&larr; Previous</a></li>
            <li class="next disabled"><a href="#">Next &rarr;</a></li>

          <?php else :?>

            <li class="previous "><a href="/node/<?php print($prev_node_nid); ?>">&larr; Previous</a></li>
            <li class="next"><a href="/node/<?php print($next_node_nid); ?>">Next &rarr;</a></li>

          <?php endif; ?>

      </ul>

<?php endif ?>
