
(function ($) {

Drupal.behaviors.dlawPromotionFieldsetSummaries = {
  attach: function (context) {

    // Summary for Search promotion
    $('fieldset#edit-promotion', context).drupalSetSummary(function (context) {
      return $('input:checkbox', context).is(':checked') ? Drupal.t('Yes') : Drupal.t('No');
    });

  }
};

})(jQuery);
