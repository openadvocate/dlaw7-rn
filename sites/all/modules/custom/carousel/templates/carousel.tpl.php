<?php if(!empty($nodes)) :?>
  <?php
    $totalnumberofposts = count($nodes);
  ?>
  <section id="slider-region" class="hero-unit well">
  <div id="carousel-region" class="main-container" style="position:relative;">
    <div class="container">
      <div id="carousel-example-generic" class="carousel slide" > <!-- BEGIN Carousel -->

      <!--
        <ol class="carousel-indicators">
          <li data-target="#carousel-example-generic" data-slide-to="0" class="active"></li>
          <li data-target="#carousel-example-generic" data-slide-to="1" class=""></li>
        </ol>
      -->

        <div class="carousel-inner">
          <div class="item active">  <!-- item Begin -->
              <?php                 
                $firstpost = true;
                $postno = 0;
                $adjustmentClass = '';
                $endingAppliesTo = -1;
                
                if ($totalnumberofposts%3 == 1) {
                  $endingAppliesTo = 1;
                  $adjustmentClass = "col-sm-offset-4";
                }else if ($totalnumberofposts%3 == 2) {
                  $endingAppliesTo = 2;
                  $adjustmentClass = "col-sm-offset-2";
                }

                foreach ($nodes as $node) :?>
                    <?php if ( ($endingAppliesTo > -1) &&  ($postno  == $totalnumberofposts - $endingAppliesTo )): ?>
                      <div class="col-sm-4 <?php print $adjustmentClass; ?>"> <!-- SPAN 4 BEGIN -->                  
                    <?php else: ?>                  
                      <div class="col-sm-4"> <!-- SPAN 4 BEGIN -->
                    <?php endif ?>
                    <?php $int_path = "node/" . $node->nid; ?>
                      <a class="row" href="<?php echo check_plain(drupal_get_path_alias($int_path)); ?>">
                        <?php if ( !empty($node->field_image[LANGUAGE_NONE][0]['fid']) ) :?>
                          <div class="img_box col-xs-5 col-sm-12">
                          <?php
                            $file = file_load( $node->field_image[LANGUAGE_NONE][0]['fid'] );
                            $hero_image = array(
                              'style_name' => CAROUSEL_STYLE,
                              'path' => $file->uri,
                              'width' => '',
                              'height' => '',
                              'alt' => $node->title,
                              );
                            print theme('image_style',$hero_image);
                          ?>
                          </div>
                        <?php endif; ?>

                        <div class="text-center col-xs-7 col-sm-12">
                          <p class="carousel-text"><?php echo $node->title; ?></p>
                        </div>
                      </a>
                  </div>  <!-- SPAN 4 END -->
                  <?php $postno++; ?>
            <?php if ($postno%3 ==0) :?>  <!-- if this is Third Element -->
          </div> <!-- potential end of ITEM -->

            <?php if ($postno <( $totalnumberofposts )) :?> <!-- if more item exist start new item -->
              <div class="item">  <!-- item Begin -->
            <?php  endif; ?>
          <?php  endif; ?>

              <?php endforeach; ?>

        <?php if ($postno%3 !=0) :?> 
          </div>  <!-- potential end of ITEM -->
        <?php  endif; ?>

      </div>  <!-- End Carousel Inner -->

      </div> <!-- END Carousel -->

    </div> <!-- END Container -->

    <?php if ($totalnumberofposts > 3): ?>    
      <a class="left carousel-control" href="#">
        <span class="glyphicon glyphicon-chevron-left"></span>
        <span class="sr-only">Previous</span>
      </a>
      <a class="right carousel-control" href="#">
        <span class="glyphicon glyphicon-chevron-right"></span>
        <span class="sr-only">Next</span>
      </a>
    <?php endif ?>

  </div> <!-- END Carousel Region -->
</section>

  <script type='text/javascript'>

      // var finalEvent = (function () {
      //   var timers = {};
      //   return function (callback, ms, uniqueId) {
      //     if (!uniqueId) {
      //       uniqueId = "Needs uniqueId";
      //     }
      //     if (timers[uniqueId]) {
      //       clearTimeout (timers[uniqueId]);
      //     }
      //     timers[uniqueId] = setTimeout(callback, ms);
      //   };
      // })();

      // $(document).ready(function() {

      //   $('.carousel').carousel({
      //     interval: 7000,
      //     cycle: true 
      //   })  
        
      //   if(window.width < 767){
      //     $('.carousel').carousel('pause');
      //   }
      // });

      // $(window).resize(function () {
      //   finalEvent(function(){
          
      //     if($(window).width() > 767){
      //       console.log('resized-big');
      //       $('.carousel').carousel("cycle");    
      //     }else{
      //       console.log('resized-small');
      //       $('.carousel').carousel('pause');
      //     }

      //   },500,"carousel")
      // });

   </script>
<?php endif; ?>
