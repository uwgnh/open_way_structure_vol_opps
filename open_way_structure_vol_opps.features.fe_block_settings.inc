<?php
/**
 * @file
 * open_way_structure_vol_opps.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function open_way_structure_vol_opps_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facetapi-FZhtQQkNNSFElcu3JD7jokcKEObDlHeE'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'FZhtQQkNNSFElcu3JD7jokcKEObDlHeE',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'open_way_2015' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'open_way_2015',
        'weight' => '1',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Type',
    'visibility' => '0',
  );

  $export['facetapi-RimxBktMq06lHyRRpXA6NycVjoAvVIXf'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'RimxBktMq06lHyRRpXA6NycVjoAvVIXf',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'open_way_2015' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'open_way_2015',
        'weight' => '3',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Audience',
    'visibility' => '0',
  );

  $export['facetapi-UZ39JVD0PwyD27uWpfJWxgqh1o9rtJnv'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'UZ39JVD0PwyD27uWpfJWxgqh1o9rtJnv',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'open_way_2015' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'open_way_2015',
        'weight' => '4',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Partner',
    'visibility' => '0',
  );

  $export['facetapi-W9u5Mipjz06jfsj4qaLicOhfcTBlDVjO'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'W9u5Mipjz06jfsj4qaLicOhfcTBlDVjO',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'open_way_2015' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'open_way_2015',
        'weight' => '2',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => 'TOWN',
    'visibility' => '0',
  );

  $export['views-0c781cd9192dfec58dfcf286301d677c'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '0c781cd9192dfec58dfcf286301d677c',
    'module' => 'views',
    'node_types' => array(
      0 => 'ow_volunteer_opportunity',
    ),
    'pages' => '*/edit',
    'roles' => array(),
    'themes' => array(
      'open_way_2015' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'open_way_2015',
        'weight' => '8',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['views-2b3cb8f0b58ca50c2cfeb3fc95f03e53'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '2b3cb8f0b58ca50c2cfeb3fc95f03e53',
    'module' => 'views',
    'node_types' => array(
      0 => 'ow_volunteer_opportunity',
    ),
    'pages' => '*/edit',
    'roles' => array(),
    'themes' => array(
      'open_way_2015' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'open_way_2015',
        'weight' => '7',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['views-7746984982508b637fc1e2c09596ea4e'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '7746984982508b637fc1e2c09596ea4e',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'profile-*
user*',
    'roles' => array(
      'Administrator' => '16',
      'Contributor' => '20',
      'Editor' => '19',
      'Manager' => '17',
      'Partner' => '22',
      'Publisher' => '18',
      'Webmaster' => '15',
    ),
    'themes' => array(
      'open_way_2015' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'open_way_2015',
        'weight' => '23',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  return $export;
}
