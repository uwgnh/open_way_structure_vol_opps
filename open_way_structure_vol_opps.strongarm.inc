<?php
/**
 * @file
 * open_way_structure_vol_opps.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function open_way_structure_vol_opps_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_volunteer_opportunities';
  $strongarm->value = 1;
  $export['enable_revisions_page_volunteer_opportunities'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feedapi_settings_volunteer_opportunities';
  $strongarm->value = array(
    'enabled' => 0,
    'refresh_on_create' => 0,
    'update_existing' => 1,
    'skip' => 0,
    'items_delete' => '0',
    'parsers' => array(
      'parser_simplepie' => array(
        'enabled' => FALSE,
        'weight' => 0,
      ),
      'parser_common_syndication' => array(
        'enabled' => FALSE,
        'weight' => 0,
      ),
    ),
    'processors' => array(
      'feedapi_node' => array(
        'enabled' => 0,
        'weight' => '0',
        'content_type' => 'webform',
        'node_date' => 'feed',
        'promote' => '3',
        'x_dedupe' => '0',
      ),
      'feedapi_inherit' => array(
        'enabled' => FALSE,
        'weight' => 0,
        'inherit_taxonomy' => TRUE,
      ),
    ),
  );
  $export['feedapi_settings_volunteer_opportunities'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feedapi_volunteer_opportunities';
  $strongarm->value = array(
    0 => 'update_existing',
    1 => 'parsers',
    2 => 'processors',
  );
  $export['feedapi_volunteer_opportunities'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ow_volunteer_opportunity';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'media_gallery_block' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '11',
        ),
        'metatags' => array(
          'weight' => '13',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '12',
        ),
        'redirect' => array(
          'weight' => '10',
        ),
        'scheduler_settings' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__ow_volunteer_opportunity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ow_volunteer_opportunity';
  $strongarm->value = array();
  $export['menu_options_ow_volunteer_opportunity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ow_volunteer_opportunity';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ow_volunteer_opportunity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ow_volunteer_opportunity';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_ow_volunteer_opportunity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ow_volunteer_opportunity';
  $strongarm->value = '1';
  $export['node_preview_ow_volunteer_opportunity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ow_volunteer_opportunity';
  $strongarm->value = 0;
  $export['node_submitted_ow_volunteer_opportunity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ow_volunteer_opportunity_pattern';
  $strongarm->value = 'volunteer/opportunity/[node:title]';
  $export['pathauto_node_ow_volunteer_opportunity_pattern'] = $strongarm;

  return $export;
}
