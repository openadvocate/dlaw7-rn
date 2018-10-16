
(function($) {

Drupal.behaviors.dlaw_seo = {
  attach: function () {
    // Bad char warning on URL alias.
    $('.node-form #edit-path-alias')
    .after(' &nbsp; <span id="url-alias-check"></span>').keyup(function() {
      var ok = !!$(this).val().match(/^[a-z0-9\-\/]+$/);
      var msg = 'For best SEO, try to limit characters to lower case letters, numbers, hyphens and forward slashes.';
      var color = ok ? '#eee' : '#f93';

      $(this).next('#url-alias-check').css('background-color', color).html(msg);
    });

    // Remove [Edit snippet] section on yoast widget. Hide may not be enough as
    // it could still alter values in the back (using its own DB table).
    // This will be effective when executed after yoast's JS is run. See weight
    // ption in dlaw_seo_form_alter().
    $('#edit-yoast-seo-und #yoast-wrapper label:eq(0)').remove();
    $('#edit-yoast-seo-und #snippet_preview').remove();
  }
};

})(jQuery);
