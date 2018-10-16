<div class="well slide-grid-container">

    <div class="container">

      <div class="row">

         <div class="column col-md-4">
            <a class="card" href="<?php print ($nodes[0]->link_to_node); ?>">
                <div class="card-image">
                  <?php print ($nodes[0]->image_to_show); ?>
                  <!-- <img src="http://dev-tcvlan.pantheonsite.io/sites/default/files/styles/ui_front_page_carousel/public/test-1.jpg?itok=lx8-9Fch"> -->
                </div>
                <div class="card-title">
                  <h3><?php echo $nodes[0]->title; ?></h3>
                </div>
            </a>
         </div>

         <div class="column col-md-4">

            <a class="card" href="<?php print ($nodes[1]->link_to_node); ?>">
                <div class="card-image">
                  <?php print ($nodes[1]->image_to_show); ?>
                  <!-- <img src="http://dev-tcvlan.pantheonsite.io/sites/default/files/styles/ui_front_page_carousel/public/test-1.jpg?itok=lx8-9Fch"> -->
                </div>
                <div class="card-title">
                  <h3><?php echo $nodes[1]->title; ?></h3>
                </div>
            </a>
         </div>

         <div class="column col-md-4">
            <a class="card" href="<?php print ($nodes[2]->link_to_node); ?>">
                <div class="card-image">
                  <?php print ($nodes[2]->image_to_show); ?>
                  <!-- <img src="http://dev-tcvlan.pantheonsite.io/sites/default/files/styles/ui_front_page_carousel/public/test-1.jpg?itok=lx8-9Fch"> -->
                </div>
                <div class="card-title">
                  <h3><?php echo $nodes[2]->title; ?></h3>
                </div>
            </a>

         </div>
      </div>

    </div>

</div>
