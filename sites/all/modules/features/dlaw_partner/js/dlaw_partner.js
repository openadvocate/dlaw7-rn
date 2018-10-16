
(function ($) {
  $(function() {

    /**
     * This solution works for dlaw4_bootswatch theme, but not for ember_dlaw4.
     * Need more elegant solution. Feel free to modify or remove.
     */

    // On Partner node add/edit form, indent checkbox label further with extra '-'.
    /*$('.page-node #edit-field-partner-legal-services-und label, .page-node #edit-field-partner-non-legal-services-und label').each(function () {
      if ($(this).text().indexOf('-') === 0) {
        $(this).text(' -' + $(this).text());
      }
    });*/

    // Add glyphicons to some fields on Partner view page.
    $('.partner-page .field-type-addressfield .field-label').text('')
      .addClass('glyphicon glyphicon-map-marker')
      .css('font-size', '1.5em')
      .css('color', '#ccc');

    $('.partner-page .field-type-link-field .field-label').text('')
      .addClass('glyphicon glyphicon-globe')
      .css('font-size', '1.5em')
      .css('color', '#ccc');

    $('.partner-page .field-type-email .field-label').text('')
      .addClass('glyphicon glyphicon-envelope')
      .css('font-size', '1.5em')
      .css('color', '#ccc');

    $('.partner-page .field-type-telephone .field-label').text('')
      .addClass('glyphicon glyphicon-earphone')
      .css('font-size', '1.5em')
      .css('color', '#ccc');

    $('.partner-page .field-name-field-partner-fax .field-label, .partner-page .field-name-field-partner-ref-fax .field-label')
      .removeClass('glyphicon-earphone')
      .addClass('glyphicon-print');

    // Add google map link to partner title.
    if ($('.partner-page .field-type-addressfield .field-item').length) {
      var $addr_field = $('.partner-page .field-type-addressfield .field-item');
      var addr1 = $addr_field.find('.street-block').text();
      var addr2 = $addr_field.find('.locality-block').text();

      $addr_field.wrapInner('<a href="http://maps.google.com/maps?q=' + encodeURI(addr1 + ' ' + addr2) + '" target="_blank"></a>');
    }

    // Behavior for counties check all on partner form.
    $('.group-partner-service-area #check-all-counties').click(function () {
      var $icon = $(this).find('.fa');
      var $checkboxes = $(this).closest('label').next('#edit-field-partner-county-und').find(':checkbox');

      if ($icon.hasClass('fa-check-square-o')) {
        $icon.removeClass('fa-check-square-o').addClass('fa-square-o');
        $checkboxes.prop('checked', false);
      }
      else {
        $icon.removeClass('fa-square-o').addClass('fa-check-square-o');
        $checkboxes.prop('checked', true);
      }
    });

  });
})(jQuery);
