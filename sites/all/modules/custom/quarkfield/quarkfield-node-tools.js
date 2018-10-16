/**
*Code to load on page load
*/
(function ($){

    $.fn.extend({ 
      swapTemporaryClass: function(addClassName, addClassName1, removeClassName, duration) {
        var elements = this;
        setTimeout(function() {
          elements.removeClass(addClassName);
          elements.removeClass(addClassName1);
          elements.addClass(removeClassName);
        }, duration);

        return this.each(function() {
          $(this).addClass(addClassName);
          $(this).addClass(addClassName1);
          $(this).removeClass(removeClassName);
        });
      }
    });

})(jQuery);

(function ($) {
  Drupal.behaviors.jquery_qr_code = {

    attach: function(context, settings) {
      if($('#qr_node_tools_qr_link').length > 0){
        $('#qr_node_tools_qr_link').click(function(event){
          if ($('#qr_node_tools_qr_link_content img').length) {
            // console.log('nop');
            // $('#quarkfield-link-panel-inner').collapse('toggle');
          }else{
            createQRcode();
          }
        });
      }

      if($('#qr_node_tools_pdf').length > 0){
        $('#qr_node_tools_pdf').click(function(event){
          console.log($('#qr_node_tools_pdf i'));
          $('#qr_node_tools_pdf i').swapTemporaryClass('fa-spinner','fa-spin','fa-file-o',3000);
        });
      }
      
      if($('#qr_node_tools_vcard_d').length > 0){
        $('#qr_node_tools_vcard_d').click(function(event){
          console.log($('#qr_node_tools_vcard_d i'));
          $('#qr_node_tools_vcard_d i').swapTemporaryClass('fa-spinner','fa-spin','fa-download',2000);
        });
      }      
      if($('#qr_node_tools_vevent_d').length > 0){
        $('#qr_node_tools_vevent_d').click(function(event){
          console.log($('#qr_node_tools_vevent_d i'));
          $('#qr_node_tools_vevent_d i').swapTemporaryClass('fa-spinner','fa-spin','fa-download',2000);
        });
      }

    }
  }

  function createQRcode(){
    googleQRarguments = "?chs=" + Drupal.settings.googleQRcode.width + "x" +
    Drupal.settings.googleQRcode.height + "&cht=qr&chl=" + document.URL +
    '&chld=H|0';
    output = '<div class="inner text-center"><img src="https://chart.googleapis.com/chart'
   + googleQRarguments + '"></img></div>';

    $('#qr_node_tools_qr_link_content li').html(output).fadeIn(200, function() {
      // $('#quarkfield-link-panel-inner').collapse('toggle');
    });

  }

})(jQuery);



/**
* Onclick function for displaying QR code from google
*/

