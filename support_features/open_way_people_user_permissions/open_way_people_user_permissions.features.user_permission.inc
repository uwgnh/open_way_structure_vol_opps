<?php
/**
 * @file
 * open_way_people_user_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_people_user_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: administer userprotect.
  $permissions['administer userprotect'] = array(
    'name' => 'administer userprotect',
    'roles' => array(),
    'module' => 'userprotect',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Extra - Users',
      2 => 'Manager',
      3 => 'Webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: assign Administrator role.
  $permissions['assign Administrator role'] = array(
    'name' => 'assign Administrator role',
    'roles' => array(
      0 => 'Webmaster',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Blogger role.
  $permissions['assign Blogger role'] = array(
    'name' => 'assign Blogger role',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Manager',
      2 => 'Webmaster',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Contributor role.
  $permissions['assign Contributor role'] = array(
    'name' => 'assign Contributor role',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Manager',
      2 => 'Webmaster',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Editor role.
  $permissions['assign Editor role'] = array(
    'name' => 'assign Editor role',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Manager',
      2 => 'Webmaster',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Extra - Blocks role.
  $permissions['assign Extra - Blocks role'] = array(
    'name' => 'assign Extra - Blocks role',
    'roles' => array(
      0 => 'Webmaster',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Extra - Content role.
  $permissions['assign Extra - Content role'] = array(
    'name' => 'assign Extra - Content role',
    'roles' => array(
      0 => 'Webmaster',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Extra - Forms role.
  $permissions['assign Extra - Forms role'] = array(
    'name' => 'assign Extra - Forms role',
    'roles' => array(
      0 => 'Webmaster',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Extra - Menus and URL role.
  $permissions['assign Extra - Menus and URL role'] = array(
    'name' => 'assign Extra - Menus and URL role',
    'roles' => array(
      0 => 'Webmaster',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Extra - Users role.
  $permissions['assign Extra - Users role'] = array(
    'name' => 'assign Extra - Users role',
    'roles' => array(
      0 => 'Webmaster',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Manager role.
  $permissions['assign Manager role'] = array(
    'name' => 'assign Manager role',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Partner role.
  $permissions['assign Partner role'] = array(
    'name' => 'assign Partner role',
    'roles' => array(
      0 => 'Webmaster',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Publisher role.
  $permissions['assign Publisher role'] = array(
    'name' => 'assign Publisher role',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Manager',
      2 => 'Webmaster',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Webmaster role.
  $permissions['assign Webmaster role'] = array(
    'name' => 'assign Webmaster role',
    'roles' => array(),
    'module' => 'role_delegation',
  );

  // Exported permission: assign all roles.
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(),
    'module' => 'role_delegation',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: change own e-mail.
  $permissions['change own e-mail'] = array(
    'name' => 'change own e-mail',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: change own openid.
  $permissions['change own openid'] = array(
    'name' => 'change own openid',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: change own password.
  $permissions['change own password'] = array(
    'name' => 'change own password',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(),
    'module' => 'user',
  );

  return $permissions;
}
