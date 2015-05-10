<?php
/**
 * @file
 * dco_imagecache.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function dco_imagecache_image_default_styles() {
  $styles = array();

  // Exported image style: marketing_image.
  $styles['marketing_image'] = array(
    'label' => 'marketing_image',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 365,
          'height' => 200,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: session_image.
  $styles['session_image'] = array(
    'effects' => array(
      31 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 250,
          'height' => 167,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'session_image',
  );

  // Exported image style: sponsor_logo.
  $styles['sponsor_logo'] = array(
    'label' => 'sponsor_logo',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 210,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: sponsor_logo_bronze.
  $styles['sponsor_logo_bronze'] = array(
    'effects' => array(
      33 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 190,
          'height' => 120,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'sponsor_logo_bronze',
  );

  // Exported image style: sponsor_logo_callout.
  $styles['sponsor_logo_callout'] = array(
    'effects' => array(
      34 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 190,
          'height' => 120,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'sponsor_logo_callout',
  );

  // Exported image style: sponsor_logo_gold.
  $styles['sponsor_logo_gold'] = array(
    'effects' => array(
      35 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 190,
          'height' => 120,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'sponsor_logo_gold',
  );

  // Exported image style: sponsor_logo_platinum.
  $styles['sponsor_logo_platinum'] = array(
    'effects' => array(
      36 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 190,
          'height' => 120,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'sponsor_logo_platinum',
  );

  // Exported image style: sponsor_logo_silver.
  $styles['sponsor_logo_silver'] = array(
    'effects' => array(
      37 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 190,
          'height' => 120,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'sponsor_logo_silver',
  );

  // Exported image style: user_large.
  $styles['user_large'] = array(
    'effects' => array(
      38 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '200px',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'user_large',
  );

  // Exported image style: user_med.
  $styles['user_med'] = array(
    'effects' => array(
      39 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '118px',
          'height' => '118px',
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'user_med',
  );

  // Exported image style: user_thumb.
  $styles['user_thumb'] = array(
    'effects' => array(
      40 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '60px',
          'height' => '60px',
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'user_thumb',
  );

  return $styles;
}
