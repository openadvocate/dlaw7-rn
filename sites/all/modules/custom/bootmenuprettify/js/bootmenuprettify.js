(function ($) {
  // $(function() {
  Drupal.behaviors.bootMenuPrettify = {
    attach: function (context, settings) {


      setTimeout(function() { fix()} , 200);
      $('<style>tr.parent td:first-child a:after{content:" (Parent Item: only acts as Dropdown Toggle.)"; color:#aaa; tex-decoration: underline;} tr.parent td:first-child a.tabledrag-handle:after{content:"";}</style>').appendTo('head');
      $("#menu-overview").bind('DOMNodeInserted', function(e) {
        setTimeout(function() { fix()} , 200);
      });
      $("#menu-overview").bind('DOMNodeRemoved', function(e) {
        setTimeout(function() { fix()} , 200);
      });

      function fix(){
        tr_s = $("#menu-overview tr.draggable");
        tr_s.each(function(index, el) {

          if (!$(tr_s[index]).hasClass('processed')) {

            if ($(tr_s[index + 1 ]).length) {

              if ($(tr_s[index]).find('.indentation').length < $(tr_s[index +1]).find('.indentation').length ) {            
                $(tr_s[index]).addClass('parent');
              }else{
                $(tr_s[index]).removeClass('parent');
              }
              $(tr_s[index]).addClass('processed');
            };

          };

        });

        $("#menu-overview tr.draggable").removeClass('processed');
      }

      // http://stackoverflow.com/questions/13923419/jquery-detecting-domnoderemoved-on-self-garbage-collection
      var _cleanData = $.cleanData;
      $.cleanData = function( elems ) {
          for ( var i = 0, elem; (elem = elems[i]) != null; i++ ) {
              try {
                  $( elem ).triggerHandler( "remove" );
              // http://bugs.jquery.com/ticket/8235
              } catch( e ) {}
          }
          _cleanData( elems );
      };

    }
  };
  // });
})(jQuery);

