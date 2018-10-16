
function dlawsettings_remove_image(elem, type, fid) {
  (function ($) {
    $.get(Drupal.settings.basePath + 'admin/dashboard/settings/removeimage/' + type + '/' + fid, function (data) {
      if (data == 'deleted') {
        $(elem + ' img').fadeOut();
        $(elem + '-button').fadeOut();
        $(elem + ' span').fadeIn();
      }
    });
  }(jQuery));
}