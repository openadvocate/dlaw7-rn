(function($){
  $(function() {

    // alert("as");
  imgPath = 'https://chart.googleapis.com/chart?chs=210x210&cht=qr&chld=L|0&chl=' + window.location.pathname;

 var beforePrint = function() {
      // alert('before print');

    $('<img src="'+ imgPath +'">').load(function() {
      $(this).appendTo('.page-header');
    });


  };
  var afterPrint = function() {
      // alert('after print');
  };

  if (window.matchMedia) {
      var mediaQueryList = window.matchMedia('print');
      mediaQueryList.addListener(function(mql) {
          if (mql.matches) {
              beforePrint();
          } else {
              afterPrint();
          }
      });
  }

  window.onbeforeprint = beforePrint;
  window.onafterprint = afterPrint;

  });

})(jQuery);

   
