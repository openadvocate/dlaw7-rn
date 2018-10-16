(function ($) {
  $(function () {
    // Collapse 4+ (link checker) warnings.
    var $ul = $('.page-node-edit .messages.warning ul');

    if ($ul.length) {
      $('li', $ul).css('max-width', 'none');

      if ($('li', $ul).length > 3) {
        var $lis = $ul.find('li');

        $lis.slice(3).hide();

        $ul.append('<li><a href="#"><b>Show All</b></a></li>');

        $ul.find('li:last a').click(function (e) {
          e.preventDefault();

          $ul.find('li:hidden').fadeIn();
          $(this).parent('li').hide();
        });
      }
    }
  });
})(jQuery);
