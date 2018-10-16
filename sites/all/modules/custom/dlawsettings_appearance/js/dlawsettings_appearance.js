(function ($) {

  $(function() {

//     $(".thumbnail img").elevateZoom({
//       easing : true,
//       zoomWindowWidth:600,
//       zoomWindowHeight:600
// });

    $(".option").click(function(event) {
      event.stopPropagation();
    });

    $(".thumbnail").click(function(event) {
      event.stopPropagation();
      
      $(".thumbnail").removeClass('selected');
      $(this).addClass('selected');      
      
      $(this).find('.option').click();
    });

  });

})(jQuery);