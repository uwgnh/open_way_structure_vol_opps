<?php
/**
 * @file
 * open_way_configuration_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_configuration_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: show format selection for node.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Manager',
      3 => 'Publisher',
      4 => 'Webmaster',
    ),
    'module' => 'better_formats',
  );

  return $permissions;
}
