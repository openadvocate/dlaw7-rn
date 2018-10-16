
(function ($) {
  (window.onpopstate = function () {
      var match,
          pl     = /\+/g,  // Regex for replacing addition symbol with a space
          search = /([^&=]+)=?([^&]*)/g,
          decode = function (s) { return decodeURIComponent(s.replace(pl, " ")); },
          query  = window.location.search.substring(1);

      urlParams = {};
      while (match = search.exec(query))
         urlParams[decode(match[1])] = decode(match[2]);
  })();

  Drupal.behaviors.extraMenu = {
    attach: function (context, settings) {

      if ($(".panel-panel.left").length){
        base = window.location.protocol + "//" + window.location.host + window.location.pathname;
        // console.log(urlParams);    
        // console.log(window.location.pathname);
        if (urlParams["f[0]"]=="bundle:page") {
          isPage = true;
          $(".panel-panel.left").prepend('<div class="btn-group btn-toggle"><button class="page btn btn-lg btn-default active">Find Info</button><button class="contact btn btn-lg btn-default">Find Help</button></div>');
        }else{
          isPage = false;
          if (urlParams["f[0]"]=="bundle:contact") {
            $(".panel-panel.left").prepend('<div class="btn-group btn-toggle"><button class="page btn btn-lg btn-default">Find Info</button><button class="contact btn btn-lg btn-default active">Find Help</button></div>');
          }else{
              window.location.href = base + "?f[0]=bundle:page";
          }
        }

        $(".panel-panel.left").find(".panel-pane:first").addClass('type_selector').css({
          height: "0",
          overflow: "hidden",
          padding: "0"
        });

        $('.btn-toggle').click(function() {
            $(this).find('.btn').toggleClass('active');              
            if ($(this).find('.btn-default').size()>0) {
              $(this).find('.btn').toggleClass('btn-default');
            }               
            $(this).find('.btn').toggleClass('btn-default');

            if(isPage){
              window.location.href = base + "?f[0]=bundle:contact";
              // reloadWithQueryStringVars({"f[0]": "bundle:contact"});          
            }else{
              window.location.href = base + "?f[0]=bundle:page";
              // reloadWithQueryStringVars({"f[0]": "bundle:page"});
            }
        });

      }
    }
  };

  function reloadWithQueryStringVars (queryStringVars) {
    var existingQueryVars = location.search ? location.search.substring(1).split("&") : [],
        currentUrl = location.search ? location.href.replace(location.search,"") : location.href,
        newQueryVars = {},
        newUrl = currentUrl + "?";
    if(existingQueryVars.length > 0) {
        for (var i = 0; i < existingQueryVars.length; i++) {
            var pair = existingQueryVars[i].split("=");
            newQueryVars[pair[0]] = pair[1];
        }
    }
    if(queryStringVars) {
        for (var queryStringVar in queryStringVars) {
            newQueryVars[queryStringVar] = queryStringVars[queryStringVar];
        }
    }
    if(newQueryVars) { 
        for (var newQueryVar in newQueryVars) {
            newUrl += newQueryVar + "=" + newQueryVars[newQueryVar] + "&";
        }
        newUrl = newUrl.substring(0, newUrl.length-1);
        window.location.href = newUrl;
    } else {
        window.location.href = location.href;
    }
  }

})(jQuery);
