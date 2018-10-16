(function ($) {
  $(function() {

    attachClearBehaviorToLinks();

    $(document).ajaxComplete(function(event, xhr, settings) {
      attachClearBehaviorToLinks();
    });

    function attachClearBehaviorToLinks() {
      var clear = '<a href="#" class="clear-link">Clear</a>';
      $('#edit-group_links .link-field-url > .form-item').append(clear)
        .find('.clear-link').click(function(e) {
          e.preventDefault();
          $(this).closest('.form-type-link-field').find('input:text').val('');
        });
    }

  });
})(jQuery);
