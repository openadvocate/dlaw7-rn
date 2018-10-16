//  Bootstrap 3 default Extra Small device media query limit 768px


(function ($) {

  var finalEvent = (function () {
    var timers = {};
    return function (callback, ms, uniqueId) {
      if (!uniqueId) {
        uniqueId = "Needs uniqueId";
      }
      if (timers[uniqueId]) {
        clearTimeout (timers[uniqueId]);
      }
      timers[uniqueId] = setTimeout(callback, ms);
    };
  })();

  $(document).ready(function() {

    $('.carousel').carousel({
      interval: 7000,
      cycle: true 
    });    
    
    if($(window).width() < 768){
      $('.carousel').carousel('pause');
    }

    $('.carousel-control.left').click(function(event) {
      $('.carousel').carousel('prev');
      return false;
    });

    $('.carousel-control.right').click(function(event) {  
      $('.carousel').carousel('next');
      return false;
    });

  });

  $(window).resize(function () {
    finalEvent(function(){
      
      if($(window).width() > 768){
        // console.log('cycle');
        $('.carousel').carousel("cycle");    
      }else{
        // console.log('pause');
        $('.carousel').carousel('pause');
      }

    },500,"carousel")
  });

})(jQuery);