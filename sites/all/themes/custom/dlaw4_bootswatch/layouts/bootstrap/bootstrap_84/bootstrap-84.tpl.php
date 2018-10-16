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
<div class="panel-display bootstrap_84" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

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

      <div class="col-md-8 contentarea contentarea_main column_8">
      <?php if (!empty($content['1_8'])): ?>
        <div class="block_1_8 column_content contentarea_content">
          <?php print $content['1_8']; ?>
        </div>
      <?php endif ?>
      </div>

      <div class="col-md-4 sidebar sidebar_right column_4">
        <?php if (!empty($content['1_4_well'])): ?>
        <div class="block_1_4_well column_content sidebar_content well">
          <?php print $content['1_4_well']; ?>
        </div>
      <?php endif ?>
      <?php if (!empty($content['1_4'])): ?>
        <div class="block_1_4 column_content sidebar_content">
          <?php print $content['1_4']; ?>
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
