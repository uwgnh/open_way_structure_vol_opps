<?php
/**
 * @file
 * open_way_structure_vol_opps.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function open_way_structure_vol_opps_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ow_opportunities-cf_education_income_health-ow_terms_type';
  $feeds_tamper->importer = 'ow_opportunities';
  $feeds_tamper->source = 'cf_education_income_health';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '; ',
    'limit' => '',
    'real_separator' => '; ',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'EIH Terms';
  $export['ow_opportunities-cf_education_income_health-ow_terms_type'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ow_opportunities-geo_cities-explode';
  $feeds_tamper->importer = 'ow_opportunities';
  $feeds_tamper->source = 'geo_cities';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '; ',
    'limit' => '',
    'real_separator' => '; ',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['ow_opportunities-geo_cities-explode'] = $feeds_tamper;

  return $export;
}
