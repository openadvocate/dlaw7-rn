(function ($) {
  $(function() {
    $('.front .slide-grid-container .card').click(function (e) {
      var self = this;

      e.preventDefault();

      $.get('/carousel/slide-counter', function(data) {
        window.location.href = $(self).prop('href');
      });
    });
  });
})(jQuery);
