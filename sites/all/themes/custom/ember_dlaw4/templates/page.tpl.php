<?php
?>
<div id="branding" class="clearfix">
    <?php print render($title_prefix); ?>
  <?php if ($title): ?>
      <h1 class="page-title">
      <?php print $title; ?>
      </h1>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
     <div id="tab-bar" class="clearfix">
    <?php print render($tabs); ?>
    </div>
  </div>

  <div id="page"<?php echo theme_get_setting('ember_dlaw4_no_fadein_effect') ? '' : ' class="fade-in"'?>>

  <?php // if (!empty($breadcrumb)): ?>
    <?php // print $breadcrumb; ?>
  <?php // endif; ?>

  <?php if ($page['help']): ?>
    <?php print render($page['help']); ?>
  <?php endif; ?>

  <?php if ($messages): ?>
    <div id="console" class="clearfix">
      <?php print $messages; ?>
    </div>
  <?php endif; ?>

  <div id="content" class="clearfix row">
    <div class="element-invisible">
      <a id="main-content"></a>
    </div>
    <div class="actions">        
    <?php if ($action_links): ?>
        <ul class="action-links">
        <?php print render($action_links); ?>
        </ul>
      <?php endif; ?>
    </div>

    <?php if (!empty($my_secondary)): ?>
      <div class="col-sm-3">
        <ul class="list-group">
          <?php print render(($my_secondary)); ?>
        </ul>
      </div>

      <div class="col-sm-9">
    <?php else: ?>
      <div class="col-sm-12">
    <?php endif ?>    
        <?php print render($page['content']); ?>
      </div>

  </div>

  <div id="footer">
    <?php print $feed_icons; ?>
  </div>

</div>
