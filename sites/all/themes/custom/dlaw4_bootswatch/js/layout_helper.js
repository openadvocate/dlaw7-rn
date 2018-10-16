(function ($) {

  $(function() {

    // mediaquery variables
    screen_sm_min = '768';  // Default bootstrap breakpoint $screen-sm-min: 768
    screen_md_min = '992';  // Default bootstrap breakpoint $screen-md-min: 992
    // screen_md_min = '992';  // Default bootstrap breakpoint $screen-sm-min: 

    currentMediaQuery = ''; // tablet|desktop
    currentMediaQuery = getMediaQuery();
    initiateSwitch();
    
    wrapForCollapse();

    $('#toolbar-chevron').click(function(event) {
      $('#toolbar-handler').toggleClass('open');
      $('#collapse-toolbar').slideToggle(200);
    });

  if ($(".pane-apachesolr-result").length){
    if (!$('.apachesolr_search-results').length){
      $('.pane-apachesolr-result').addClass('alert alert-block alert-info')
    }
  }
  
    // Modernizr.load({  
    //   test: Modernizr.touch,  
    //   yep : 'touchSwipe.js',  
    // });  


    // if it was loaded as tablet close all
    if(getMediaQuery() =='mobile'){
      closeAllWrap();
    }


    window.onscroll = function() {
      // scrollwatcher();
    };

  });


  function scrollwatcher() {

    var $missionbg = $('.mission_background');
    var scrollTop = $(window).scrollTop();
    if (scrollTop < 550) {

      var backgroundPos = $($missionbg).css('background-position').split(" ");      

      $missionbg.css({ 'background-position': 'center ' + (-30 -(scrollTop/3)) + 'px' });

    }
  }

  $(window).resize(function () {
    finalEvent(function(){
      
      initiateSwitch();

    },500,"layoout_helper")
  });

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
  
  // Media checker
  function getMediaQuery(){

    mq = "mobile";
    if (Modernizr.mq('only screen and (min-width: ' + screen_sm_min + 'px)')) {
      mq = 'tablet';      
    }
    if (Modernizr.mq('only screen and (min-width: ' + screen_md_min + 'px)')) {
      mq = 'desktop';
    }        

    return mq;
  }

  function initiateSwitch(){

    mediaQuery = getMediaQuery();

    if ( mediaQuery != currentMediaQuery ) {
        changeLayoutTo(currentMediaQuery, mediaQuery);
    }else{
      // console.log('nothing to do here.');
    }
  }    

  function changeLayoutTo(fromLayout, toLayout){

    layoutchange = fromLayout + "->" + toLayout;

    // console.log(layoutchange);
    switch(layoutchange){

      case "desktop->mobile":
          fromDesktop();
          toMobile();
          
          break;

      case "tablet->mobile":          
          fromTablet();
          toMobile();

          break;

      case "mobile->tablet":
          fromMobile();
          toTablet();
          
          break;

      case "desktop->tablet":
          fromDesktop();
          toTablet();

          break;

      case "mobile->desktop":
          fromMobile();
          toDesktop();          
          
          break;
      case "tablet->desktop":
          fromTablet();
          toDesktop();          
          
          break;
     default:
       
    }

    // update current state
    currentMediaQuery = toLayout;

  }


  //--------------------------------------- Do Mobile Stuff
  function toMobile(){
    closeAllWrap();
  }
  function fromMobile(){
    openAllWrap();
  }

  //--------------------------------------- Do Tablet Stuff
  function toTablet(){
    
  }
  function fromTablet(){
    
  }

//--------------------------------------- Do Desktop Stuff
  function toDesktop(){
    $('#collapse-toolbar').slideDown(50);
  }

  function fromDesktop(){
    $('#collapse-toolbar').slideUp(50);
    $('#toolbar-handler').removeClass('open');
  }




  // Wikipedia Collapse Heading Sections Code---------------------------

  //  H2 Collapse Wrapper
  function wrapForCollapse(){
   
    $('.page-node .field-type-text-with-summary .field-item.even').append('<div class=h2-end></div>');
    h2Array = $('.page-node .field-type-text-with-summary .field-item.even h2');

    h2Array.each(function(index, el) {
      $(this).addClass('h2-collapsible-header');
      $(this).find('br').remove();
      $(this).prepend('<span class="fa fa-angle-down"></span><span class="fa fa-angle-up"></span>');
    });

    for (var i = 0; i < h2Array.length-1; i++) {      
      $(h2Array[i]).nextUntil(h2Array[i+1]).wrapAll('<div class="h2-collapsible"></div>');
    };

    $(h2Array[h2Array.length-1]).nextUntil('.h2-end').wrapAll('<div class="h2-collapsible"></div>');
    h2CollapsibleArray = $('.h2-collapsible');

    $(document).on('click', '.page-node .field-type-text-with-summary .field-item.even h2', null, function () {
      $(this).next().slideToggle(); // The next sibling is the .h2-collapsible element.
      $(this).toggleClass('closeed-header');
      if (!$(this).hasClass('closeed-header')) {
        $('html, body').animate({
          scrollTop: $(this).offset().top
        }, 1000);
      };
    });
  }

  function toggleAllWrap(){
    $('.h2-collapsible').slideToggle();
  }

  function closeAllWrap(){
    $('.h2-collapsible').slideUp();
    $('.h2-collapsible-header').addClass('closeed-header');
  }
  
  function openAllWrap(){
    $('.h2-collapsible').slideDown();
    $('.h2-collapsible-header').removeClass('closeed-header');
  }



$(window).load(function() {

    $adminbody = $("body.admin-menu")    

    // console.log($adminbody);
    if ($adminbody.length){
      
      var regex = "\/([0-9]*)\/g";
      var input = window.location.pathname;

      $("a.event-blog-link").on('click', function(event) {
        if(regex.test(input)) {
          var matches = input.match(regex);
          for(var match in matches) {
            alert(matches[match]);
          }
        } else {
          alert("No matches found!"); 
        }
        return false;
      });
    }

});
// })( window, document );


})(jQuery);

