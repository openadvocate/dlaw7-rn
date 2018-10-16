<div class="library-breadcrumb-wrapper">
<div class="h4">
  <ul id="library-breadcrumb-list" class="breadcrumb <?php if(empty($terms)) { echo "hide";} ?>">

  <?php
  $breadcrumb = "";
  $first = TRUE;
  foreach ($terms as $term) {
  	if ($first) {
      if (arg(0) == 'node') {
        $breadcrumb = "<li>" . l($term->name, "topics/$term->tid/" . library_cleanstring($term->name), array('html' => TRUE)) . $breadcrumb;
      }
      else {
  		  $breadcrumb = "<li class='first'>" . $term->name . "</li>";
      }
    }
  	else {
  		$breadcrumb = "<li>" . l($term->name, 'topics/' . $term->tid, array('html' => TRUE)) . $breadcrumb;
    }
  	$first = FALSE;
  }

  if (count($terms) == 0)
  	$breadcrumb = "";
  else
  	$breadcrumb = "<li>" . l("Topics", 'topics/', array('html' => TRUE)) . $breadcrumb;

  print $breadcrumb;
  ?>

  </ul>
</div>
</div> 
