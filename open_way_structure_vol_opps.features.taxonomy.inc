<?php
/**
 * @file
 * open_way_structure_vol_opps.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function open_way_structure_vol_opps_taxonomy_default_vocabularies() {
  return array(
    'ow_opportunity_audience' => array(
      'name' => 'Opportunity Audience',
      'machine_name' => 'ow_opportunity_audience',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'ow_opportunity_town' => array(
      'name' => 'Opportunity Town',
      'machine_name' => 'ow_opportunity_town',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'ow_opportunity_type' => array(
      'name' => 'Opportunity Type',
      'machine_name' => 'ow_opportunity_type',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
