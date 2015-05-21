<?php
/**
 * @file
 * open_way_people_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function open_way_people_roles_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => '3',
  );

  // Exported role: Blogger.
  $roles['Blogger'] = array(
    'name' => 'Blogger',
    'weight' => '8',
  );

  // Exported role: Contributor.
  $roles['Contributor'] = array(
    'name' => 'Contributor',
    'weight' => '7',
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => '6',
  );

  // Exported role: Extra - Blocks.
  $roles['Extra - Blocks'] = array(
    'name' => 'Extra - Blocks',
    'weight' => '10',
  );

  // Exported role: Extra - Content.
  $roles['Extra - Content'] = array(
    'name' => 'Extra - Content',
    'weight' => '14',
  );

  // Exported role: Extra - Forms.
  $roles['Extra - Forms'] = array(
    'name' => 'Extra - Forms',
    'weight' => '12',
  );

  // Exported role: Extra - Menus and URL.
  $roles['Extra - Menus and URL'] = array(
    'name' => 'Extra - Menus and URL',
    'weight' => '13',
  );

  // Exported role: Extra - Users.
  $roles['Extra - Users'] = array(
    'name' => 'Extra - Users',
    'weight' => '11',
  );

  // Exported role: Manager.
  $roles['Manager'] = array(
    'name' => 'Manager',
    'weight' => '4',
  );

  // Exported role: Partner.
  $roles['Partner'] = array(
    'name' => 'Partner',
    'weight' => '9',
  );

  // Exported role: Publisher.
  $roles['Publisher'] = array(
    'name' => 'Publisher',
    'weight' => '5',
  );

  // Exported role: Webmaster.
  $roles['Webmaster'] = array(
    'name' => 'Webmaster',
    'weight' => '2',
  );

  return $roles;
}
