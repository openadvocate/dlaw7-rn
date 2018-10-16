<?php
/**
 * @file
 * Template for stacked panel layout using Twitter's Bootstrap framework.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 */
?>
<div class="panel-display bootstrap_66" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="panel-container">

    <?php if (!empty($content['top'])): ?>
      
    <div class="row row_title">
      <div class="col-md-12">
        <?php print $content['top']; ?>
      </div>
    </div>
    <?php endif ?>

    
    <?php if (!empty($content['top_row'])): ?>
    <div class="row row_title">
      <div class="col-md-12">
        <?php print $content['top_row']; ?>
      </div>
    </div>
    <?php endif ?>

    <div class="row row_1">

      <div class="col-md-6 contentarea contentarea_main column_6">
      <?php if (!empty($content['1_6_a'])): ?>
        <div class="block_1_6_a column_content contentarea_content">
          <?php print $content['1_6_a']; ?>
        </div>
      <?php endif ?>
      </div>

      <div class="col-md-6 sidebar sidebar_right column_6">
        <?php if (!empty($content['1_6_well'])): ?>
        <div class="block_1_6_well column_content sidebar_content well">
          <?php print $content['1_6_well']; ?>
        </div>
      <?php endif ?>
      <?php if (!empty($content['1_6_b'])): ?>
        <div class="block_1_6_b column_content sidebar_content">
          <?php print $content['1_6_b']; ?>
        </div>
      <?php endif ?>
      </div>

    </div>

    <?php if (!empty($content['bottom'])): ?>
      <div class="row row_bottom">
        <div class="col-md-12">
          <?php print $content['bottom']; ?>
        </div>
      </div>
    <?php endif ?>

  </div>

</div>
