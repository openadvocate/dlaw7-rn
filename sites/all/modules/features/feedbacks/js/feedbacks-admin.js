
(function ($) {

Drupal.behaviors.dlawFeedbacksAdmin = {
  attach: function (context) {
  
    // Case 42103. Hide useless or offensive feedback. Not deleting so as not to affect pie chart.
    var del = ' <a href="/" class="delete-comment"><i class="fa fa-trash-o"></i> delete</a>';
    $('.view-page-feedbacks .submitted').append(del);
    $('.view-page-feedbacks .submitted .delete-comment').on('click', function(e) {
      e.preventDefault();

      if (confirm('Are you sure to delete the feedback?')) {
        $(this).closest('.views-row').fadeOut();
        var cid = $(this).closest('.comment').prev('a').prop('id').split('-')[1];
        $.get('/comment/' + cid + '/hide');
      }
    });
  }
};

})(jQuery);
