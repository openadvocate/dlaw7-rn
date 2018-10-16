<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 *
 *
 *
 *
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<div id="toolbar-handler" data-mode="" class="">
  <div id="collapse-toolbar" class="">
    <div class="toolbar navbar navbar-default" id="site-toolbar">
      <div class="container">
        <div class="col-md-5">
          <?php
            // $block = module_invoke('search', 'block_view', 'search');
            // print render($block);
          ?>
          <?php
            $block = module_invoke('apachesolr_panels', 'block_view', 'search_form');
            print render($block['content']);
          ?>
        </div>

        <div class="col-md-3">
          <?php
            if (module_exists('gtranslate')) {
              $block1 = module_invoke('gtranslate', 'block_view', 'gtranslate');
              $rendered_block1 = theme('gtranslate', $block1);
              print render($rendered_block1);
            }
          ?>
        </div>

        <div class="col-md-4">
          <?php
            if (module_exists('social_media_links')) {
              $block2 = module_invoke('social_media_links', 'block_view', 'social_media_links');
              $rendered_block2 = theme('social_media_links_block', $block2);
              print render($rendered_block2);
            }
          ?>
        </div>
      </div>
    </div>
  </div>

  <a id="toolbar-chevron" class="navbar navbar-default"><span class="glyphicon glyphicon-search"></span><span class="glyphicon glyphicon-chevron-down "></span><span class="glyphicon glyphicon-chevron-up "></span><span class="glyphicon glyphicon-globe"></span></a>

</div>

<header >
<!-- ************************************* DLAW BRANDING AREA ********************************* -->

<div class="branding navbar">
  <div class="container">

    <?php
      $linked_banner_img = "";

      $banner = variable_get('sitesettings_default_banner_image', '');
      $logotype = variable_get('logotype', '');

      if ($banner) {
        $img_src1 = file_create_url($banner);
        //$logo_image = theme('image_style', array('style_name' => 'logo', 'path' => $logo_url, 'attributes' => array('width' => 240, 'height' => 240)));
        $logo_image = '<img src="' . $img_src1 . '" border="0" alt="' . check_plain($site_name) . '">';
        $linked_banner_img = l($logo_image, '<front>', array('html' => TRUE));
      }

      $logo_url = "";
      $linked_logo_img = FALSE;

      if (module_exists('dlawsettings_site_info')) {
        $logo_url = dlawsettings_site_info_theme_logo();

         if (!empty($logo_url)) {
            $img_src1 = file_create_url($logo_url);
            $logo_image = '<img src="' . $img_src1 . '" border="0" alt="' . check_plain($site_name) . '">';

            $linked_logo_img = l($logo_image, '<front>', array('html' => TRUE));
         }else $logo_url = FALSE;

      }
      else $logo_url = FALSE;
    ?>

    <div>
      <?php if ( !empty($linked_banner_img) || !empty($linked_logo_img) || !empty($site_name) || !empty($site_slogan)): ?>
      <div class="branding-data clearfix row logo">
          <?php if ($linked_banner_img): ?>
               <div class="banner-img col-sm-12">
                <?php print $linked_banner_img; ?>
              </div>
          <?php else: ?>

              <?php if ($linked_logo_img): ?>
                <div class="logo-container">
                  <?php print $linked_logo_img; ?>
                </div>
              <?php elseif (!empty($logotype)): ?>
                <div class="logotype-container">
                  <?php print l($logotype, '');  ?>
                </div>
              <?php endif; ?>


              <?php if ( !empty($site_name) || !empty($site_slogan) ): ?>

                <div class="name-container">
                  <div class="site-name-slogan<?php // print $class; ?>">

                      <?php if (!empty($site_name)): ?>
                        <div id="the-title" class="site-title<?php //print $class; ?>"><?php print l( $site_name, '', array('attributes' => array('class' => array('site-title-link')))); ?></div>
                      <?php endif; ?>

                      <?php if (!empty($site_slogan)): ?>
                        <p class="site-slogan lead<?php //print $class; ?>"><?php print strip_tags($site_slogan); ?></p>
                      <?php endif; ?>

                      <div class="print-only site-link">
                        <?php echo "$_SERVER[HTTP_HOST]"; ?>
                      </div>

                  </div>
                </div>

              <?php endif; ?>
          <?php endif; ?>

          <?php if (module_exists('quarkfield')): ?>
            <div id="qr-print-link" class="text-right">
              <?php
                $block = module_invoke('quarkfield', 'block_view', 'qr_code');
                print render($block['content']);
              ?>
            </div>
          <?php endif ?>

      </div>
      <?php endif; ?>

    </div>

    <?php if (!empty($page['header'])): ?>
      <div class="header-banner visible-desktop" role="banner" id="page-header">
        <?php print render($page['header']); ?>
      </div>
    <?php endif; ?>

  </div>
</div>

<!-- ************************************* END branding AREA ********************************* -->
</header>

<header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
  <div class="">
    <div class="navbar-header">
      <?php if ($logo): ?>
      <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
      </a>
      <?php endif; ?>

      <?php if (!empty($site_name)): ?>
      <!-- <a class="name navbar-brand" href="<?php // print $front_page; ?>" title="<?php // print t('Home'); ?>"><?php // print $site_name; ?></a> -->
      <?php endif; ?>

      <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
      <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
      <a class="brand visible-xs">Navigate</a>
    </div>

    <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
      <div class="navbar-collapse collapse">
        <nav role="navigation">
            <?php if (!empty($page['navigation'])): ?>
              <?php print render($page['navigation']); ?>
            </div>
            <?php else: ?>
              <?php if (!empty($primary_nav)): ?>
                <?php print render($primary_nav); ?>
              <?php endif; ?>
              <?php if (!empty($secondary_nav)): ?>
                <?php print render($secondary_nav); ?>
              <?php endif; ?>
          <?php endif; ?>
        </nav>
      </div>
    <?php endif; ?>
  </div>
</header>

<?php if ($is_front): ?> <!-- Front page Test-->
  <?php
    $block1 = module_invoke('carousel', 'block_view', 'carousel');
    print render($block1['content']);
  ?>
<?php endif; ?>

<div class="main-container container">

<?php if ($is_front): ?> <!-- Front page Test-->
<div class="text-center">
  <h2 class="mission">
    <?php if (!empty($mission)): ?>
      <?php print $mission; ?>
    <?php endif ?>
  </h2>
</div>
<?php endif; ?>

  <div class="row">

    <?php // if (!empty($page['sidebar_first'])): ?>
      <!-- <aside class="col-sm-3" role="complementary"> -->
        <?php // print render($page['sidebar_first']); ?>
      <!-- </aside> -->  <!-- /#sidebar-first -->
    <?php //endif; ?>

    <?php if ($is_front): ?> <!-- Front page Test-->

      <?php if (!empty($page['front_col1'])): ?>
        <div class="<?php print $dlaw4_col_class; ?>"><?php print render($page['front_col1']); ?></div>
      <?php endif; ?>
      <?php if (!empty($page['front_col2'])): ?>
        <div class="<?php print $dlaw4_col_class; ?>"><?php print render($page['front_col2']); ?></div>
      <?php endif; ?>
      <?php if (!empty($page['front_col3'])): ?>
        <div class="<?php print $dlaw4_col_class; ?>"><?php print render($page['front_col3']); ?></div>
      <?php endif; ?>
      <div class="clearfix"></div>
    <?php endif; ?>

    <section <?php //print $content_column_class; ?>>


      <a id="main-content"></a>



      <?php // if (!empty($dlaw_page_sections)): ?>
        <!-- <div class="well"> -->
          <?php // print $dlaw_page_sections; ?>
        <!-- </div> -->
      <?php // endif ?>


      <?php $title_class = "" ?>
      <?php if (!empty($library_listing)): ?>
        <?php $title_class = "library_list_title" ?>
        <div class="small">
          <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
        </div>
      <?php endif ?>

      <?php print render($title_prefix); ?>
      <?php if (!empty($title)): ?>
        <h1 class="page-header <?php print $title_class; ?>"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php if (!empty($tabs)): ?>
        <?php print render($tabs); ?>
      <?php endif; ?>
      <?php if (!empty($page['help'])): ?>
        <?php print render($page['help']); ?>
      <?php endif; ?>
      <?php if (!empty($action_links)): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>

      <div class="col-sm-8">
        <?php print render($page['content']); ?>
      </div>

    </section>

    <?php //if (!empty($page['sidebar_second'])): ?>
      <!-- <aside class="col-sm-3" role="complementary"> -->
        <?php // print render($page['sidebar_second']); ?>
      <!-- </aside>   --><!-- /#sidebar-second -->
    <?php //endif; ?>

  </div>
</div>

<?php if (!empty($page['footer'])): ?>
  <div id="bottom-region" class="well roow">
    <div class="container">
      <?php print render($page['footer']); ?>
    </div>
  </div>
<?php endif ?>

<footer id="footer-region" class="footer navbar-default">
  <div class="container text-center">
    <div class="spacer-8">
      <?php
        print render($my_custom_footer_menu);
      ?>
    </div>
    <div class="print-only spacer-8">
      Printed: <?php echo date("F j, Y"); ?> </br>
      <?php echo "http://$_SERVER[HTTP_HOST]$_SERVER[REQUEST_URI]"; ?></br></br>
    </div>
    <div class="spacer-8"><?php print $site_copyright_info; ?></div>
    <div class="spacer-8 powered-by">Website powered by <a href="http://www.openadvocate.org/">OpenAdvocate</a></div>
  </div>
</footer>
