
<div class="container">
  <div class="row">
    <div class="col-md-12">
      <h1>Web Traffic Analytics Report</h1>
    </div>
    <div class="col-md-12">
      <h2><?php echo variable_get('site_name', ''); ?></h2>
    </div>
    <div class="col-md-12">
      <h3><?php echo 'http://' . $_SERVER['HTTP_HOST']; ?></h3>
    </div>
    <div class="col-md-4">
      <?php echo render($form['from_date']); ?>
    </div>
    <div class="col-md-4">
      <?php echo render($form['to_date']); ?>
    </div>
    <div class="col-md-4">
      <?php echo render($form['submit']); ?>
    </div>
    <div class="col-md-6">
      <h4>Page Views</h4>
      <?php echo render($vars['page_views']); ?>
    </div>
    <div class="col-md-6">
      <h4>Visits</h4>
      <?php echo render($vars['visits']); ?>
    </div>
    <div class="col-md-6">
      <h4>Visitors</h4>
      <?php echo render($vars['visitors']); ?>
    </div>
    <div class="col-md-6">
      <h4>Page per Visit</h4>
      <?php echo render($vars['page_per_visit']); ?>
    </div>
    <div class="col-md-12">
      www.openadvocate.org
    </div>
  </div>
</div>
