<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function dco_imagecache_imagecache_default_presets() {
  $items = array(
    'marketing_image' => array(
      'presetname' => 'marketing_image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '365px',
            'height' => '200px',
          ),
        ),
      ),
    ),
    'session_image' => array(
      'presetname' => 'session_image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '250',
            'height' => '167',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'sponsor_logo' => array(
      'presetname' => 'sponsor_logo',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '190',
            'height' => '120',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'sponsor_logo_bronze' => array(
      'presetname' => 'sponsor_logo_bronze',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '190',
            'height' => '120',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'sponsor_logo_callout' => array(
      'presetname' => 'sponsor_logo_callout',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '190',
            'height' => '120',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'sponsor_logo_gold' => array(
      'presetname' => 'sponsor_logo_gold',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '190',
            'height' => '120',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'sponsor_logo_platinum' => array(
      'presetname' => 'sponsor_logo_platinum',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '190',
            'height' => '120',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'sponsor_logo_silver' => array(
      'presetname' => 'sponsor_logo_silver',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '190',
            'height' => '120',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'user_large' => array(
      'presetname' => 'user_large',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '200px',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'user_med' => array(
      'presetname' => 'user_med',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '118px',
            'height' => '118px',
          ),
        ),
      ),
    ),
    'user_thumb' => array(
      'presetname' => 'user_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '60px',
            'height' => '60px',
          ),
        ),
      ),
    ),
  );
  return $items;
}
