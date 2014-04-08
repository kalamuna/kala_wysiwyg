<?php
/**
 * @file
 * kala_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function kala_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: UNFILTERED HTML.
  $formats['kala_fullhtml_text'] = array(
    'format' => 'kala_fullhtml_text',
    'name' => 'UNFILTERED HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_url' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'media_filter' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'caption_filter' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
