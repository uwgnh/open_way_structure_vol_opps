<?php
/**
 * @file
 * open_way_configuration_text_formats.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_configuration_text_formats_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: use text format html_code.
  $permissions['use text format html_code'] = array(
    'name' => 'use text format html_code',
    'roles' => array(),
    'module' => 'filter',
  );

  return $permissions;
}
