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

  // Exported image style: marketing_image
  $styles['marketing_image'] = array(
    'name' => 'marketing_image',
    'effects' => array(
      30 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '365px',
          'height' => '200px',
        ),
        'weight' => '0',
      ),
    ),
  );

  // Exported image style: session_image
  $styles['session_image'] = array(
    'name' => 'session_image',
    'effects' => array(
      31 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '250',
          'height' => '167',
          'upscale' => 0,
        ),
        'weight' => '0',
      ),
    ),
  );

  // Exported image style: sponsor_logo
  $styles['sponsor_logo'] = array(
    'name' => 'sponsor_logo',
    'effects' => array(
      32 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '190',
          'height' => '120',
          'upscale' => 0,
        ),
        'weight' => '0',
      ),
    ),
  );

  // Exported image style: sponsor_logo_bronze
  $styles['sponsor_logo_bronze'] = array(
    'name' => 'sponsor_logo_bronze',
    'effects' => array(
      33 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '190',
          'height' => '120',
          'upscale' => 0,
        ),
        'weight' => '0',
      ),
    ),
  );

  // Exported image style: sponsor_logo_callout
  $styles['sponsor_logo_callout'] = array(
    'name' => 'sponsor_logo_callout',
    'effects' => array(
      34 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '190',
          'height' => '120',
          'upscale' => 0,
        ),
        'weight' => '0',
      ),
    ),
  );

  // Exported image style: sponsor_logo_gold
  $styles['sponsor_logo_gold'] = array(
    'name' => 'sponsor_logo_gold',
    'effects' => array(
      35 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '190',
          'height' => '120',
          'upscale' => 0,
        ),
        'weight' => '0',
      ),
    ),
  );

  // Exported image style: sponsor_logo_platinum
  $styles['sponsor_logo_platinum'] = array(
    'name' => 'sponsor_logo_platinum',
    'effects' => array(
      36 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '190',
          'height' => '120',
          'upscale' => 0,
        ),
        'weight' => '0',
      ),
    ),
  );

  // Exported image style: sponsor_logo_silver
  $styles['sponsor_logo_silver'] = array(
    'name' => 'sponsor_logo_silver',
    'effects' => array(
      37 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '190',
          'height' => '120',
          'upscale' => 0,
        ),
        'weight' => '0',
      ),
    ),
  );

  // Exported image style: user_large
  $styles['user_large'] = array(
    'name' => 'user_large',
    'effects' => array(
      38 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '200px',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '0',
      ),
    ),
  );

  // Exported image style: user_med
  $styles['user_med'] = array(
    'name' => 'user_med',
    'effects' => array(
      39 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '118px',
          'height' => '118px',
        ),
        'weight' => '0',
      ),
    ),
  );

  // Exported image style: user_thumb
  $styles['user_thumb'] = array(
    'name' => 'user_thumb',
    'effects' => array(
      40 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '60px',
          'height' => '60px',
        ),
        'weight' => '0',
      ),
    ),
  );

  return $styles;
}
