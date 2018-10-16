
(function($) {

Drupal.behaviors.page_editor = {
  attach: function () {
    // Char length warning on title.
    $('#page-node-form #edit-title')
    .after(' &nbsp; <span id="title-length-check"></span>').keyup(function() {
      var length = $(this).val().length;
      var msg, color;
      if (length < 50) {
        msg = length + ' chars. Increase title to optimize for search engine.';
        color = '#fc0';
      }
      else if (length <= 60) {
        msg = length + ' chars (optimal range 50-60 chars).';
        color = '#eee';
      }
      else {
        msg = length + ' chars. Shorten title to optimize for search engines.';
        color = '#f93';
      }
      $(this).next('#title-length-check').css('background-color', color).html(msg);
    });

    // Char length warning on body summary.
    $('#page-node-form #edit-body label[for=edit-body-und-0-summary]')
      .after(' &nbsp; <span id="summary-length-check"></span>');

    $('#page-node-form #edit-body #edit-body-und-0-summary').keyup(function() {
      var length = $(this).val().length;
      var msg, color;
      if (length < 70) {
        msg = length + ' chars. Increase summary to optimize for search engine.';
        color = '#fc0';
      }
      else if (length <= 160) {
        msg = length + ' chars (optimal range 70-160 chars).';
        color = '#eee';
      }
      else {
        msg = length + ' chars. Shorten summary to optimize for search engines.';
        color = '#f93';
      }
      $('#summary-length-check').css('background-color', color).html(msg);
    });
  }
};

})(jQuery);
