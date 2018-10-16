<?php

/**
 * @file
 * Default theme implementation to display a printer-friendly version page.
 *
 * This file is akin to Drupal's page.tpl.php template. The contents being
 * displayed are all included in the $content variable, while the rest of the
 * template focuses on positioning and theming the other page elements.
 *
 * All the variables available in the page.tpl.php template should also be
 * available in this template. In addition to those, the following variables
 * defined by the print module(s) are available:
 *
 * Arguments to the theme call:
 * - $node: The node object. For node content, this is a normal node object.
 *   For system-generated pages, this contains usually only the title, path
 *   and content elements.
 * - $format: The output format being used ('html' for the Web version, 'mail'
 *   for the send by email, 'pdf' for the PDF version, etc.).
 * - $expand_css: TRUE if the CSS used in the file should be provided as text
 *   instead of a list of @include directives.
 * - $message: The message included in the send by email version with the
 *   text provided by the sender of the email.
 *
 * Variables created in the preprocess stage:
 * - $print_logo: the image tag with the configured logo image.
 * - $content: the rendered HTML of the node content.
 * - $scripts: the HTML used to include the JavaScript files in the page head.
 * - $footer_scripts: the HTML  to include the JavaScript files in the page
 *   footer.
 * - $sourceurl_enabled: TRUE if the source URL infromation should be
 *   displayed.
 * - $url: absolute URL of the original source page.
 * - $source_url: absolute URL of the original source page, either as an alias
 *   or as a system path, as configured by the user.
 * - $cid: comment ID of the node being displayed.
 * - $print_title: the title of the page.
 * - $head: HTML contents of the head tag, provided by drupal_get_html_head().
 * - $robots_meta: meta tag with the configured robots directives.
 * - $css: the syle tags contaning the list of include directives or the full
 *   text of the files for inline CSS use.
 * - $sendtoprinter: depending on configuration, this is the script tag
 *   including the JavaScript to send the page to the printer and to close the
 *   window afterwards.
 *
 * print[--format][--node--content-type[--nodeid]].tpl.php
 *
 * The following suggestions can be used:
 * 1. print--format--node--content-type--nodeid.tpl.php
 * 2. print--format--node--content-type.tpl.php
 * 3. print--format.tpl.php
 * 4. print--node--content-type--nodeid.tpl.php
 * 5. print--node--content-type.tpl.php
 * 6. print.tpl.php
 *
 * Where format is the ouput format being used, content-type is the node's
 * content type and nodeid is the node's identifier (nid).
 *
 * @see print_preprocess_print()
 * @see theme_print_published
 * @see theme_print_breadcrumb
 * @see theme_print_footer
 * @see theme_print_sourceurl
 * @see theme_print_url_list
 * @see page.tpl.php
 * @ingroup print
 */
?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" version="XHTML+RDFa 1.0" dir="<?php print $language->dir; ?>">
  <head>
    <?php print $head; ?>
    <base href='<?php print $url ?>' />
    <title><?php print $print_title; ?></title>
    <?php print $scripts; ?>
    <?php if (isset($sendtoprinter)) print $sendtoprinter; ?>
    <?php print $robots_meta; ?>
    <?php if (theme_get_setting('toggle_favicon')): ?>
      <link rel='shortcut icon' href='<?php print theme_get_setting('favicon') ?>' type='image/x-icon' />
    <?php endif; ?>
    <?php print $css; ?>
    <style>
      img{
        max-width: 100% !important;
        height: auto !important;
      }
      .field-type-link-field{
        padding-top: 20px;
        padding-bottom: 20px;
      }
    </style>
  </head>
  <body>
    <table tyle="width:100%;">
      <tbody>
      <?php if ( !empty($site_name) || !empty($site_slogan) ): ?>
        <tr>
          <td style="width:600px;">
            <div class="site-name-slogan">
              <?php if (!empty($site_name)): ?>
                <h2 id="the-title" class="site-title"><?php print l( $site_name, '', array('attributes' => array('class' => array('site-title-link')))); ?></h2>
              <?php endif; ?>
              <?php if (!empty($site_slogan)): ?>
                <p class="site-slogan lead"><?php print strip_tags($site_slogan); ?></p>
              <?php endif; ?>
              <div class="print-only site-link">                        
                <?php echo "$_SERVER[HTTP_HOST]"; ?>
              </div>
            </div>
          </td>

          <td style="width:100px;">
            <div>
            <?php if (!empty($field_qr_url_image)): ?>
                <?php print $field_qr_url_image;?>
            <?php endif; ?>
            </div>
          </td>

        <?php endif; ?>
        </tr>
      </tbody>
    </table>
    <hr/>

    <?php if (!empty($message)): ?>
      <div class="print-message"><?php print $message; ?></div><p/>
    <?php endif; ?>
    <?php if ($print_logo): ?>
      <div class="print-logo"><?php print $print_logo; ?></div>
    <?php endif; ?>
    <p/>
    <table style="width:100%;">
      <tbody>
        <tr>
          <div class="print-content"><?php print render($content); ?></div>
        </tr>
      </tbody>
    </table>

    <hr/>
    <div>
    Printed:<?php echo date("F j, Y"); ?>
    </div>
    <div>
    <?php if (!empty($node_url)): ?>        
      <?php print $node_url; ?>
    <?php endif ?>
    </div>
    <?php if ( !empty($site_name)): ?>
      </br>
        &copy;<?php print $site_name; ?>
    <?php endif; ?>
    <div>
    </div>

    <div class="print-footer"></div>
    <?php if ($sourceurl_enabled): ?>      
    <?php endif; ?>    
      <?php print $footer_scripts; ?>
  </body>
</html>
