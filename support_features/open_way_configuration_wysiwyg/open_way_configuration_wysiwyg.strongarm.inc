<?php
/**
 * @file
 * open_way_configuration_wysiwyg.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function open_way_configuration_wysiwyg_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__dialog_theme';
  $strongarm->value = 'seven';
  $export['media__dialog_theme'] = $strongarm;

  return $export;
}
