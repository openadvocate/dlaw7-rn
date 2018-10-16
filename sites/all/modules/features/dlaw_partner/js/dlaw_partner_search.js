

(function ($) {
  $(function() {

    $.extend({
      getFacetParams: function(url) {
        var str = url.split('?')[1];
        return str ? str.split('&').map(function (n) {
          return n.split('=')[1];
        }) : [];
      }
    });

    // Update form action url based on search keyword and county select.
    $('#apachesolr-panels-search-form').on('submit', function (e) {
      e.preventDefault();

      var action       = $(this).prop('action');
      var keyword      = $('input:text', this).val();
      var county_id    = $('#edit-county', this).val();
      var params       = $.getFacetParams(action);
      var county_found = false;

      // Replace keyword in action url.

      action = action.replace('/find-help/', '/find-help').replace(/(\/find-help)[^\?]*/, '$1/' + keyword.replace(' ', '%20'));

      // Replace facet params in action url.
      for (i in params) {
        if (params[i].indexOf('im_field_partner_county') > -1) {
          if (county_id == '') {
            params[i] = '';
          }
          else {
            params[i] = 'im_field_partner_county%3A' + county_id;
          }

          county_found = true;
          break;
        }
      }

      if (!county_found && county_id) {
        params.push('im_field_partner_county%3A' + county_id);
      }

      action = action.split('?')[0];

      if (params.length) {
        action += '?' + params.filter(function (val) {
          return val.length;
        }).map(function (val, index) {
          return 'f[' + index + ']=' + val;
        }).join('&');
      }

      location.href = action;
    });

  });
})(jQuery);
