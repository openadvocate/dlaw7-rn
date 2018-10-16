
(function ($) {

Drupal.behaviors.dlawCustomFieldsetSummaries = {
  attach: function (context) {

    // Summary for Section
    $('fieldset#edit-group_section', context).drupalSetSummary(function (context) {
      var children_count = 0;
      var message = Drupal.t('No section');

      $('input:text', context).each(function () {
        if ($(this).val().length) {
          children_count++;
        }
      });

      // Section is disabled for the page, since it is already a section child.
      if ($('input:text', context).length == 0) {
        message = Drupal.t('Already in a section')
      }

      return children_count > 1  ? Drupal.t(children_count + ' child pages') :
             children_count == 1 ? Drupal.t(children_count + ' child page') : message;
    });

    // Summary for Feature Image
    $('fieldset#edit-group_feature_image', context).drupalSetSummary(function (context) {
      return $('.image-preview img', context).length ? Drupal.t('Yes') : Drupal.t('No');
    });

    // Summary for Links
    $('fieldset#edit-group_links', context).drupalSetSummary(function (context) {
      var links_count = 0;
      var message = Drupal.t('No links');

      $('input:text[id$=url]', context).each(function () {
        if ($(this).val().length) {
          links_count++;
        }
      });

      return links_count > 1  ? Drupal.t(links_count + ' links') :
             links_count == 1 ? Drupal.t(links_count + ' link') : message;
    });

    // Summary for Attachments
    $('fieldset#edit-group_attachments', context).drupalSetSummary(function (context) {
      var attachments;

      attachments = $('table[id^=edit-field-attachments] tbody tr', context).length;

      return attachments > 1  ? Drupal.t(attachments + ' attachments') :
             attachments == 1 ? Drupal.t(attachments + ' attachment') : Drupal.t('No attachment');
    });

    // Summary for Tags
    $('fieldset#edit-group_tags', context).drupalSetSummary(function (context) {
      var tags;

      tags = $('input:text', context).val();

      return tags.length ? tags : Drupal.t('No tags');
    });

    // Summary for Zip code
    $('fieldset#edit-group_zipcode', context).drupalSetSummary(function (context) {
      var zipcodes = [];

      $('select option:selected', context).each(function () {
        zipcodes.push(Drupal.checkPlain($(this).text()));
      });

      var add = $('#edit-field-zipcode-selectoradd', context).val();
      if (add.length) {
        add = add.split(',');
        for (var i in add) {
          zipcodes.push($.trim(add[i]));
        }
      }

      return zipcodes.length ? zipcodes.join(', ') : Drupal.t('No zip code');
    });

    // Summary for Language
    $('fieldset#edit-group_language', context).drupalSetSummary(function (context) {
      var languages = [];

      $('select option:selected', context).each(function () {
        languages.push(Drupal.checkPlain($(this).text()));
      });

      var add = $('#edit-field-language-selectoradd', context).val();
      if (add.length) {
        add = add.split(',');
        for (var i in add) {
          languages.push($.trim(add[i]));
        }
      }

      return languages.length ? languages.join(', ') : Drupal.t('No language');
    });

    // Summary for glossary
    $('fieldset#edit-group_glossary', context).drupalSetSummary(function (context) {
      var glossary;

      // Get label for radio button and trim off fineprint.
      if ($('.form-radios input:checked', context).length) {
        glossary = $('.form-radios input:checked', context).next('label').html();
      }

      return Drupal.checkPlain(glossary ? glossary.split('<div>')[0] : 'Disabled');
    });


    // Summary for Library
    $('fieldset#edit-group_library', context).drupalSetSummary(function (context) {
      var library;

      // library = $('select option:selected', context).text();
      library = $('select option:selected', context).map(function () {
        return $(this).text();
      }).toArray().join('<br>');

      return library == '' ? Drupal.t('No topics') : library;
    });

    // Summary for Region
    $('fieldset#edit-group_region', context).drupalSetSummary(function (context) {
      var region;

      region = $('select option:selected', context).map(function () {
        return $(this).text();
      }).toArray().join('<br>');

      return region == '' ? Drupal.t('No regions') : region;
    });

    // Summary for News
    $('fieldset#edit-group_news', context).drupalSetSummary(function (context) {
      return $('input:checkbox', context).is(':checked') ? Drupal.t('Yes') : Drupal.t('No');
    });

    // Summary for Calendar
    $('fieldset#edit-group_calendar', context).drupalSetSummary(function (context) {
      var calendar;

      calendar = $('.start-date-wrapper input:text:eq(0)', context).val() ? 'Yes' : 'No calendar';

      if (calendar == 'Yes') {
        calendar += ' on ' + $('.start-date-wrapper input:text:eq(0)').val();

        if ($('.end-date-wrapper input:text:eq(0)', context).val()) {
          calendar += ' til ' + $('.end-date-wrapper input:text:eq(0)', context).val();
        }

        if ($('input:checkbox[id$=show-repeat-settings]', context).is(':checked')) {
          calendar += ', repeating';
        }
      }

      return calendar;
    });

    // Clear button for calendar
    $('fieldset#edit-group_calendar #edit-field-date-und-0-value')
      .append('<div id="clear-calendar" class="form-item"><a href="javascript:void(0)">Clear</a></div>');
    $('#clear-calendar').click(function() {
      $('#edit-field-date input:text').val('');
    });
  }
};

})(jQuery);
