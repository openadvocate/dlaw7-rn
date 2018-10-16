
Drupal.nsmi = Drupal.nsmi || {};
 
(function ($) {

Drupal.nsmi.uncheckChildren = function (chk) {
  $('#nsmi-convert-table tr.-uilg-' + $(chk).val()).removeClass('selected')
    .find('input:checkbox').removeAttr('checked');
}

Drupal.nsmi.checkParents = function (chk) {
  var classes = $(chk).parents('tr:first').attr('class').split(' ');
  var target = '';
  
  for (var x in classes) {
    if (classes[x].substr(0, 6) == '-uilg-') {
      target += (target ? ', ' : '') + '#' + classes[x];
    }
  }
  
  $(target).addClass('selected').find('input:checkbox').attr('checked', 'checked');
}

Drupal.behaviors.nsmi = {  
  attach: function (context, settings) {
    $('#nsmi-convert-table input.form-checkbox').bind('click', function() {
      if ($(this)[0].checked) {
        Drupal.nsmi.checkParents(this)
      }
      else {
        Drupal.nsmi.uncheckChildren(this)
      }
    });
  }
};

})(jQuery);
