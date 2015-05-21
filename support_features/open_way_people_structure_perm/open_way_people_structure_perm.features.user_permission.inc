<?php
/**
 * @file
 * open_way_people_structure_perm.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_people_structure_perm_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Extra - Menus and URL',
      2 => 'Manager',
      3 => 'Publisher',
      4 => 'Webmaster',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer redirects.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Manager',
      2 => 'Webmaster',
    ),
    'module' => 'redirect',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Manager',
      2 => 'Webmaster',
    ),
    'module' => 'path',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Manager',
      2 => 'Publisher',
      3 => 'Webmaster',
    ),
    'module' => 'path',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
    'module' => 'pathauto',
  );

  return $permissions;
}
