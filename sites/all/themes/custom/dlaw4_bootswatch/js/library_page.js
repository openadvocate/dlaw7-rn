(function ($) {
  $(function() {


  	if ($("body.page-topics").length) {


			// handelButtonClicks();

  		$topicsTree = $('#topics-tree');
  		// // $topicsTree.hide();

  		// // console.log($topicsTree.find('a.active').parent().find('li.first-level'));
  		// // $subList = $('a.active').parent().find('.topics-tree-inner');

  		$activeLink = $topicsTree.find('a.active');

  		$activeLinkSave = $activeLink;
  		activeLinkDepth = $activeLink.attr('data-depth');
      $activeLink.parent().addClass('active-sublist');
      
      if ($activeLink.parent().find('ul').length){
        $activeLink.parent().addClass('well');
        $activeLink.parent().find("ul > li a").prepend('<i class="fa fa-folder-o" aria-hidden="true"></i> ');
      }

  		$activeLink.addClass('btn btn-default');

  		$activeLink.html('<i class="fa fa-folder-open-o" aria-hidden="true"></i> ' + $activeLink.text() );

  		// $activeLinkSiblings = $activeLink.parent().find

  		if (activeLinkDepth > 1) {

  			console.log('activeLinkDepth');
  			console.log(activeLinkDepth);

	  		for (var i = activeLinkDepth; i > 1; i--) {

      		$activeLinkPath = $activeLinkSave.closest("ul").parent().find('> a');
        	console.log($activeLinkPath);

      		$activeLinkPath.addClass("active-path btn-default").addClass("btn");
      		$activeLinkPath.html('<i aria-hidden="true" class="fa fa-level-up fa-flip-horizontal"></i> ' + $activeLinkPath.text());

        	$activeLinkSave = $activeLinkPath;
	  		}
  		}


  	}

  	function handelButtonClicks() {
  		$('.term-holder .btn').click(function(){
  			$(this).parent().toggleClass('open');
  		});
  	}

  });
})(jQuery);
