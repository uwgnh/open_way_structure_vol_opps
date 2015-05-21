<?php
/**
 * @file
 * open_way_configuration_default_settings.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function open_way_configuration_default_settings_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ow_admin_theme_tweaks';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'admin/*' => 'admin/*',
        'node/*/edit' => 'node/*/edit',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-ow_admin_theme_tweaks' => array(
          'module' => 'boxes',
          'delta' => 'ow_admin_theme_tweaks',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['ow_admin_theme_tweaks'] = $context;

  return $export;
}
