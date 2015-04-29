<?php
/**
 * @file
 * open_way_structure_vol_opps.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_structure_vol_opps_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ow_volunteer_opportunity content.
  $permissions['create ow_volunteer_opportunity content'] = array(
    'name' => 'create ow_volunteer_opportunity content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Manager',
      3 => 'Partner',
      4 => 'Publisher',
      5 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ow_volunteer_opportunity content.
  $permissions['delete any ow_volunteer_opportunity content'] = array(
    'name' => 'delete any ow_volunteer_opportunity content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Extra - Content',
      2 => 'Manager',
      3 => 'Publisher',
      4 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ow_volunteer_opportunity content.
  $permissions['delete own ow_volunteer_opportunity content'] = array(
    'name' => 'delete own ow_volunteer_opportunity content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Manager',
      3 => 'Partner',
      4 => 'Publisher',
      5 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ow_partner_profile profile.
  $permissions['edit any ow_partner_profile profile'] = array(
    'name' => 'edit any ow_partner_profile profile',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Manager',
      3 => 'Publisher',
      4 => 'Webmaster',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit any ow_volunteer_opportunity content.
  $permissions['edit any ow_volunteer_opportunity content'] = array(
    'name' => 'edit any ow_volunteer_opportunity content',
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

  // Exported permission: edit own ow_partner_profile profile.
  $permissions['edit own ow_partner_profile profile'] = array(
    'name' => 'edit own ow_partner_profile profile',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Manager',
      2 => 'Partner',
      3 => 'Publisher',
      4 => 'Webmaster',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own ow_volunteer_opportunity content.
  $permissions['edit own ow_volunteer_opportunity content'] = array(
    'name' => 'edit own ow_volunteer_opportunity content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Manager',
      3 => 'Partner',
      4 => 'Publisher',
      5 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: view any ow_partner_profile profile.
  $permissions['view any ow_partner_profile profile'] = array(
    'name' => 'view any ow_partner_profile profile',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own ow_partner_profile profile.
  $permissions['view own ow_partner_profile profile'] = array(
    'name' => 'view own ow_partner_profile profile',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Manager',
      2 => 'Partner',
      3 => 'Publisher',
      4 => 'Webmaster',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
