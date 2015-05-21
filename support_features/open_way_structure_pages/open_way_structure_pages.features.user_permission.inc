<?php
/**
 * @file
 * open_way_structure_pages.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_structure_pages_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ow_page content.
  $permissions['create ow_page content'] = array(
    'name' => 'create ow_page content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Manager',
      2 => 'Publisher',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ow_page content.
  $permissions['delete any ow_page content'] = array(
    'name' => 'delete any ow_page content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Manager',
      2 => 'Publisher',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ow_page content.
  $permissions['delete own ow_page content'] = array(
    'name' => 'delete own ow_page content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Manager',
      2 => 'Publisher',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ow_page content.
  $permissions['edit any ow_page content'] = array(
    'name' => 'edit any ow_page content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Extra - Content',
      3 => 'Manager',
      4 => 'Publisher',
      5 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ow_page content.
  $permissions['edit own ow_page content'] = array(
    'name' => 'edit own ow_page content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Manager',
      3 => 'Publisher',
      4 => 'Webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
