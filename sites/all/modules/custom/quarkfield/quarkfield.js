/**
*Code to load on page load
*/

(function ($) {
  Drupal.behaviors.jquery_qr_code = {

    attach: function(context, settings) {
      moduleBlock = $('#quarkfield-link-panel-inner .panel-body').html();

      if(moduleBlock.length > 0){
          $('#quarkfield-link-panel-title').click(function(event){

            if ($('#quarkfield-link-panel-inner .panel-body img').length) {
              console.log('nop');
              $('#quarkfield-link-panel-inner').collapse('toggle');
            }else{
              createQRcode();
            }

            event.stopPropagation();
            return false;
          });
      }
    }
  }

  function createQRcode(){
    googleQRarguments = "?chs=" + Drupal.settings.googleQRcode.width + "x" +
    Drupal.settings.googleQRcode.height + "&cht=qr&chl=" + document.URL +
    '&chld=H|0';
    output = '<div class="inner"><img src="https://chart.googleapis.com/chart'
   + googleQRarguments + '"></img></div>';
      console.log($('#quarkfield-link-panel-inner .panel-body'));

    $('#quarkfield-link-panel-inner .panel-body').html(output).fadeIn(200, function() {
      $('#quarkfield-link-panel-inner').collapse('toggle');
    });

  }

})(jQuery);

/**
* Onclick function for displaying QR code from google
*/

