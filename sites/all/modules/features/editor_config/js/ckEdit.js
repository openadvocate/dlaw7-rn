(function ($) {
  $(function() {

    CKEDITOR.on( 'dialogDefinition', function( ev ) {

      var dialogName = ev.data.name;
      var dialogDefinition = ev.data.definition;

      if ( dialogName == 'link' ) {
        var infoTab = dialogDefinition.getContents( 'info' ),
            advTab =  dialogDefinition.getContents( 'advanced' );
            advCSSClasses = advTab.get( 'advCSSClasses' );
            advTab.hidden=true;

        infoTab.add( {
          type: 'select',
          label: 'Display link as a button',
          id: 'buttonType',
          'default': '',
          items: [
            ['- Not button -', ''],
            ['Standard Button', 'btn btn-info'],
            ['Large Button', 'btn btn-info btn-lg'],
            ['Small Button', 'btn btn-info btn-sm']
          ],

          commit: function( data ) {
            data.buttonType = this.getValue();
          }
        });

        var orgAdvCSSClassesCommit = advCSSClasses.commit;

        advCSSClasses.commit = function( data ) {
            orgAdvCSSClassesCommit.apply( this, arguments );

            if ( data.buttonType && data.advanced.advCSSClasses.indexOf( data.buttonType ) == -1 )
                data.advanced.advCSSClasses += ' ' + data.buttonType;

        };
      }
    });

});
})(jQuery);
