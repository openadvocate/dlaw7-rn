(function ($) {
  $(function() {

    // Add behavior to category icon list buton.
    $('.category-icon-list button').click(function (e) {
      var url = $(this).find('img').attr('src');

      $('#edit-field-category-icon input')
        .addClass('yellow-fade')
        .val(url)
        .delay(1000)
        .queue(function(next) {
          $(this).removeClass('yellow-fade');
          next();
        });
    });

  });
})(jQuery);
