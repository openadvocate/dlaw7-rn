(function($){

  // Resize helper check for final event
  var finalEvent = (function () {
    var timers = {};
    return function (callback, ms, uniqueId) {
      if (!uniqueId) {
        uniqueId = "I_need_unique_ID";
      }
      if (timers[uniqueId]) {
        clearTimeout (timers[uniqueId]);
      }
      timers[uniqueId] = setTimeout(callback, ms);
    };
  })();

  $(function() {

    $('.methyl_yellow_indicator').width($('.methyl_yellow_indicator').parent().width());
    $('.methyl_yellow_indicator').affix({
      offset: { top: $('.methyl_yellow_indicator').offset().top - $("body").css("margin-top").replace('px', '')}
    });
    $('.methyl_wrapper').height($(".methyl_yellow_indicator").height());
  });

  $(window).resize(function () {
    finalEvent(function(){
      $('.methyl_yellow_indicator').width($('.methyl_yellow_indicator').parent().width());

    },500,"methyl_yellow_indicator")
  });



})(jQuery);