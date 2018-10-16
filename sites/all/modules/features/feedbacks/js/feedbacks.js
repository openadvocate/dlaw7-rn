

(function ($) {

Drupal.behaviors.dlawFeedbacks = {
  attach: function (context) {

    // Hide feedback if voted already.
    if ($('.rate-info').length) {
      $('.pane-rate-widget:not(.visibility-processed)').hide();
    }
    $('.pane-rate-widget').addClass('visibility-processed');

    $('.pane-rate-widget .rate-button').click(function() {
      if ($(this).text() == 'Very helpful') {
        var thank = '<span>Thanks for your feedback!</span>';

        $('.pane-rate-widget .pane-content').slideUp();
        $('.pane-node-comment-form').slideUp();

        $('.pane-rate-widget .pane-title')
          .fadeOut('fast', function() {
            $(this).html(thank).fadeIn('slow');
          });
      }
      else {
        $(document).ajaxComplete(function() {
          var match;
          if (match = $('.rate-info').text().match(/^You voted '(.+)'./)) {
            $('.rate-button:contains(' + match[1] + ')').parent('li').css('background-color', '#eee');
          }
        });

        $('.pane-node-comment-form').slideDown();
      }
    });

    $('#edit-field-why-unhelpful input:radio').click(function() {
      $('#comment-form #edit-comment-body').slideDown();
      $('#comment-form #edit-submit').slideDown();
      $('#comment-form #disclaimer').slideDown();
    });

    // Set maxlength to comment body
    if ($('#comment-length-check').length == 0) {
      $('#edit-comment-body .form-textarea-wrapper').append('<div id="comment-length-check"></div>');
    }

    $('#edit-comment-body textarea').keyup(function() {
      var length = $(this).val().length;
      var title_msg, title_color;
      if (length < 1000) {
        title_msg = length + ' chars. Max 1,000 chars allowed.';
        title_color = '#fff';
      }
      else {
        title_msg = 'Max 1,000 chars reached.';
        title_color = '#fc0';

        this.value = this.value.substr(0, 1000);
      }
      $('#comment-length-check').css('background-color', title_color).html(title_msg);
    });

    // Disable submit after first click to prevent multiple submission.
    $('#comment-form #edit-submit').click(function() {
      $(this).text('Processing ...').prop('disabled', true);
      $('#comment-form').submit();
    });
  }
};

})(jQuery);
