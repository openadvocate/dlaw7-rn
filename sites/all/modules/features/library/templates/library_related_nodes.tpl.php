<div class="block-content-wrapper latest-news-wrapper">
  <?php
  	$i = 0;
  	foreach ($nodes as $node) : ?>
    <div class="row lib-item" >

        <?php if (!empty($node->field_image[LANGUAGE_NONE][0]['fid'])): ?>
          <div class="block-item item-<?php print $i; ?> col-sm-9">
        <?php else: ?>
          <div class="block-item item-<?php print $i; ?> col-sm-12">
        <?php endif; ?>

          <h2><?php print l($node->title, 'node/' . $node->nid, array('html' => false)); ?></h2>

          <!-- <h2><?php // print $node->title; ?></h2> -->

          <?php if (!empty($node->body['und'][0]['value'])): ?>
            <div><?php print strip_tags(_library_truncate($node->body['und'][0]['value'], 200)); ?></div>
          <?php endif ?>
        </div>
        
         <?php if (!empty($node->field_image[LANGUAGE_NONE][0]['fid'])): ?>
          <div class="col-sm-3 lib-img">
            <?php 
              $file = file_load( $node->field_image[LANGUAGE_NONE][0]['fid'] );
              $hero_image = array(
                'style_name' => CAROUSEL_STYLE,
                'path' => $file->uri,
                'width' => '',
                'height' => '',
                'alt' => $node->title,
                'title' => $node->title,
                );
              print theme('image_style',$hero_image);
            ?>

          </div>
        <?php endif ?>
          
    </div>
  <?php
  	$i++;
  	endforeach;
  ?>
</div>
