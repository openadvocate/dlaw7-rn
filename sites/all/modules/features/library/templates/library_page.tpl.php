<div class="library-list-page">
  <div class="row-fluid small bread-crumb-holder">
    <?php print $library_breadcrumbs; ?>
  </div>

  <h1 class="page-header library_header">
    <?php print drupal_get_title(); ?>
  </h1>

  <div class="block-content-wrapper library-view-wrapper">
    <div class="row">

      <div class="col-sm-8 left">
        <div class="term-description lead"><?php print $term_description ?></div>
        <div class="library-view-link-page">
          <?php print theme('library_related_nodes', array('tids' => arg(1))); ?>
        </div>

      </div>

      <div class="col-sm-4 left-sidebar library_sidebar">
        <div id="block-library-library">
        <?php
          $library_block = module_invoke('library', 'block_view',  'library_tree');
          print $library_block['content'];
        ?>
        </div>
      </div>


    </div>
  </div>
</div>


