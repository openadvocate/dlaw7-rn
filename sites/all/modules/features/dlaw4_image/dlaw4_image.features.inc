<?php
/**
 * @file
 * dlaw4_image.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function dlaw4_image_image_default_styles() {
  $styles = array();

  // Exported image style: blur_and_darken_background.
  $styles['blur_and_darken_background'] = array(
    'label' => 'blur_and_darken_background',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 2000,
          'height' => 2000,
          'upscale' => 1,
        ),
        'weight' => -10,
      ),
      3 => array(
        'name' => 'filtersie_generic',
        'data' => array(
          'matrix' => array(
            'entries' => array(
              0 => array(
                0 => 1,
                1 => 1,
                2 => 1,
              ),
              1 => array(
                0 => 1,
                1 => 1,
                2 => 1,
              ),
              2 => array(
                0 => 1,
                1 => 1,
                2 => 1,
              ),
            ),
          ),
          'divisor' => 9,
          'offset' => 0,
          'label' => 'Blur Image',
        ),
        'weight' => -9,
      ),
      4 => array(
        'name' => 'filtersie_generic',
        'data' => array(
          'matrix' => array(
            'entries' => array(
              0 => array(
                0 => 0,
                1 => 0,
                2 => 0,
              ),
              1 => array(
                0 => 0,
                1 => 6,
                2 => 0,
              ),
              2 => array(
                0 => 0,
                1 => 0,
                2 => 0,
              ),
            ),
          ),
          'divisor' => 9,
          'offset' => 0,
          'label' => 'Darken Image',
        ),
        'weight' => -8,
      ),
    ),
  );

  // Exported image style: blur_background.
  $styles['blur_background'] = array(
    'label' => 'blur_background',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 2000,
          'height' => 2000,
          'upscale' => 1,
        ),
        'weight' => -10,
      ),
      2 => array(
        'name' => 'filtersie_generic',
        'data' => array(
          'matrix' => array(
            'entries' => array(
              0 => array(
                0 => 1,
                1 => 1,
                2 => 1,
              ),
              1 => array(
                0 => 1,
                1 => 1,
                2 => 1,
              ),
              2 => array(
                0 => 1,
                1 => 1,
                2 => 1,
              ),
            ),
          ),
          'divisor' => 9,
          'offset' => 0,
          'label' => 'Blur Image',
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: darken_background.
  $styles['darken_background'] = array(
    'label' => 'darken_background',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 2000,
          'height' => 2000,
          'upscale' => 1,
        ),
        'weight' => -10,
      ),
      1 => array(
        'name' => 'filtersie_generic',
        'data' => array(
          'matrix' => array(
            'entries' => array(
              0 => array(
                0 => 0,
                1 => 0,
                2 => 0,
              ),
              1 => array(
                0 => 0,
                1 => 6,
                2 => 0,
              ),
              2 => array(
                0 => 0,
                1 => 0,
                2 => 0,
              ),
            ),
          ),
          'divisor' => 9,
          'offset' => 0,
          'label' => 'Darken Image',
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: dlaw4_image.
  $styles['dlaw4_image'] = array(
    'label' => 'DLAW4 Image',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 360,
          'height' => 360,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hero.
  $styles['hero'] = array(
    'label' => 'Hero',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 2000,
          'height' => 2000,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: large_dlaw_image.
  $styles['large_dlaw_image'] = array(
    'label' => 'Large DLAW Image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: logo_for_og.
  $styles['logo_for_og'] = array(
    'label' => 'Logo for open graph',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 480,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
