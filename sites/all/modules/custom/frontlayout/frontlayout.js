/**
 * @file
 * Attaches behaviors for the DLAW Front Layout module.
 */

(function ($) {

/**
 * Implements Drupal.behaviors for the Dashboard module.
 */
Drupal.behaviors.frontlayout = {
  attach: function (context, settings) {
    $('#frontlayout', context).once(function () {
      // $(this).prepend('<div class="customize clearfix"><ul class="action-links1"><li><a href="#">' + Drupal.t('Rearrange blocks') + '</a></li><li><a href="/admin/structure/block/add?destination=admin/dashboard/appearance/frontlayout">Add1 custom block</a></li></ul><div class="canvas col-sm-12"></div></div>');
      $(this).prepend('<div class="customize clearfix"><div class="action-links-holder"><ul class="action-links1"><li><a href="#" class="button"><span class="fa fa-exchange"></span> ' + Drupal.t('Rearrange blocks') + '</a></li></ul></div><div class="canvas col-sm-12"></div></div>');
      _container = $(this).find("#frontlayout_inactive .region");
      $('<div class="add-block-holder"><a href="/admin/structure/block/add?destination=admin/dashboard/appearance/frontlayout" class="button"><span class="fa fa-plus"></span> Add custom block</a></div>').prependTo(_container);

      $('.customize .action-links1 a:eq(0)', this).click(Drupal.behaviors.frontlayout.enterCustomizeMode);
    });
    Drupal.behaviors.frontlayout.addPlaceholders();
    if (Drupal.settings.frontlayout.launchCustomize) {
      Drupal.behaviors.frontlayout.enterCustomizeMode();
    }
  },

  addPlaceholders: function () {
    console.log('addPlaceholders');
    $('#frontlayout .frontlayout-region .region').each(function () {
      var empty_text = "-----";
      // If the region is empty

      if ($('.block', this).length == 0) {
        // Check if we are in customize mode and grab the correct empty text
        if ($('#frontlayout').hasClass('customize-mode')) {
          empty_text = Drupal.settings.frontlayout.emptyRegionTextActive;
        } else {
          empty_text = Drupal.settings.frontlayout.emptyRegionTextInactive;
          console.log($(this).addClass('inactive-zone'));
        }
        // We need a placeholder.
        if ($('.placeholder', this).length == 0) {
          $(this).append('<div class="placeholder"></div>');
        }
        $('.placeholder', this).html(empty_text);
      }
      else {
        $('.placeholder', this).remove();
      }
    });
  },

  /**
   * Enters "customize" mode by displaying disabled blocks.
   */
  enterCustomizeMode: function () {
    console.log('enterCustomizeMode');
    $('#frontlayout').addClass('customize-mode customize-inactive');
    Drupal.behaviors.frontlayout.addPlaceholders();
    // Hide the customize link
    $('#frontlayout .customize .action-links1').hide();
    // Load up the disabled blocks
    $('div.customize .canvas').load(Drupal.settings.frontlayout.drawer, Drupal.behaviors.frontlayout.setupDrawer);
  },

  /**
   * Exits "customize" mode by simply forcing a page refresh.
   */
  exitCustomizeMode: function () {
    console.log('exitCustomizeMode');
    $('#frontlayout').removeClass('customize-mode customize-inactive');
    Drupal.behaviors.frontlayout.addPlaceholders();
    location.href = Drupal.settings.frontlayout.frontlayout;
  },

  /**
   * Sets up the drag-and-drop behavior and the 'close' button.
   */
  setupDrawer: function () {
    console.log('setupDrawer');
    $('div.customize .canvas-content input').click(Drupal.behaviors.frontlayout.exitCustomizeMode);
    $('div.customize .action-links-holder').append('<a class="button done-button" href="' + Drupal.settings.frontlayout.frontlayout + '"><i class="fa fa-check"></i> ' + Drupal.t('Done') + '</a>');

    // Initialize drag-and-drop.
    var regions = $('#frontlayout div.region');
    regions.sortable({
      connectWith: regions,
      cursor: 'move',
      cursorAt: {top:0},
      dropOnEmpty: true,
      items: '> div.block, > div.disabled-block',
      placeholder: 'block-placeholder clearfix',
      tolerance: 'pointer',
      start: Drupal.behaviors.frontlayout.start,
      over: Drupal.behaviors.frontlayout.over,
      sort: Drupal.behaviors.frontlayout.sort,
      update: Drupal.behaviors.frontlayout.update
    });
  },

  /**
   * Makes the block appear as a disabled block while dragging.
   *
   * This function is called on the jQuery UI Sortable "start" event.
   *
   * @param event
   *  The event that triggered this callback.
   * @param ui
   *  An object containing information about the item that is being dragged.
   */
  start: function (event, ui) {
    $('#frontlayout').removeClass('customize-inactive');
    var item = $(ui.item);

    // If the block is already in disabled state, don't do anything.
    if (!item.hasClass('disabled-block')) {
      item.css({height: 'auto'});
    }
  },

  /**
   * Adapts block's width to the region it is moved into while dragging.
   *
   * This function is called on the jQuery UI Sortable "over" event.
   *
   * @param event
   *  The event that triggered this callback.
   * @param ui
   *  An object containing information about the item that is being dragged.
   */
  over: function (event, ui) {
    var item = $(ui.item);

    // If the block is in disabled state, remove width.
    if ($(this).closest('#disabled-blocks').length) {
      item.css('width', '');
    }
    else {
      item.css('width', $(this).width());
    }
  },

  /**
   * Adapts a block's position to stay connected with the mouse pointer.
   *
   * This function is called on the jQuery UI Sortable "sort" event.
   *
   * @param event
   *  The event that triggered this callback.
   * @param ui
   *  An object containing information about the item that is being dragged.
   */
  sort: function (event, ui) {
    var item = $(ui.item);

    if (event.pageX > ui.offset.left + item.width()) {
      item.css('left', event.pageX);
    }
  },

  /**
   * Sends block order to the server, and expand previously disabled blocks.
   *
   * This function is called on the jQuery UI Sortable "update" event.
   *
   * @param event
   *   The event that triggered this callback.
   * @param ui
   *   An object containing information about the item that was just dropped.
   */
  update: function (event, ui) {
    $('#frontlayout').addClass('customize-inactive');
    var item = $(ui.item);

    // If the user dragged a disabled block, load the block contents.
    if (item.hasClass('disabled-block')) {
      var module, delta, itemClass;
      itemClass = item.attr('class');
      // Determine the block module and delta.
      module = itemClass.match(/\bmodule-(\S+)\b/)[1];
      delta = itemClass.match(/\bdelta-(\S+)\b/)[1];

      // Load the newly enabled block's content.
      $.get(Drupal.settings.frontlayout.blockContent + '/' + module + '/' + delta, {},
        function (block) {
          if (block) {
            item.html(block);
          }

          if (item.find('div.content').is(':empty')) {
            item.find('div.content').html(Drupal.settings.frontlayout.emptyBlockText);
          }

          Drupal.attachBehaviors(item);
        },
        'html'
      );
      // Remove the "disabled-block" class, so we don't reload its content the
      // next time it's dragged.
      item.removeClass("disabled-block");
    }

    Drupal.behaviors.frontlayout.addPlaceholders();

    // Let the server know what the new block order is.
    $.post(Drupal.settings.frontlayout.updatePath, {
        'form_token': Drupal.settings.frontlayout.formToken,
        'regions': Drupal.behaviors.frontlayout.getOrder
      }
    );
  },

  /**
   * Returns the current order of the blocks in each of the sortable regions.
   *
   * @return
   *   The current order of the blocks, in query string format.
   */
  getOrder: function () {
    console.log('getOrder');
    var order = [];
    $('#frontlayout div.region').each(function () {
      var region = $(this).parent().attr('id').replace(/-/g, '_');
      var blocks = $(this).sortable('toArray');
      $.each(blocks, function() {
        order.push(region + '[]=' + this);
      });
    });
    order = order.join('&');
    return order;
  }
};

})(jQuery);
