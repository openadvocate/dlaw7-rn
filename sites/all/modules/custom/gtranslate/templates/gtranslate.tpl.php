<?php
// Using session var, show google translate widget only if requested, which
// degrades page performance score. As a light way to submit form and check
// session, I didn't bother to implement Drupal form API.
if (!empty($_POST['show_google_translate_widget'])) {
  $_SESSION['gtranslate'] = TRUE;
}
?>

<?php if (!empty($languages)): ?>
  <?php if (!empty($_SESSION['gtranslate'])): ?>
    <div id="google_translate_element"><label class="element-invisible">Google Translate</label></div><script>
    function googleTranslateElementInit() {
      new google.translate.TranslateElement({
        pageLanguage: 'en',
        includedLanguages: '<?php print join(",", array_filter($languages)); ?>'
      }, 'google_translate_element');
    }
    </script><script src="//translate.google.com/translate_a/element.js?cb=googleTranslateElementInit"></script>
  <?php else: ?>
    <form action="" method="POST">
      <input type="hidden" name="show_google_translate_widget" value="1">
      <button class="btn btn-default">Translate</button>
    </form>
  <?php endif; ?>
<?php endif; ?>
