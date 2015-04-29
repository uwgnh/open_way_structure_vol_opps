<?php
/**
 * @file
 * open_way_structure_vol_opps.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function open_way_structure_vol_opps_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ow_nonprofit_user';
  $feeds_importer->config = array(
    'name' => 'Agency User',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => '|',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          22 => '22',
          15 => 0,
          16 => 0,
          17 => 0,
          18 => 0,
          19 => 0,
          20 => 0,
          21 => 0,
          10 => 0,
          14 => 0,
          13 => 0,
          12 => 0,
          9 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'agency_name_sort_key',
            'target' => 'name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'agency_name',
            'target' => 'profile2:ow_partner_profile:field_ow_nonprofit_name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'agency_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'email',
            'target' => 'mail',
            'unique' => 0,
          ),
          4 => array(
            'source' => 'directions',
            'target' => 'profile2:ow_partner_profile:field_ow_nonprofit_directions',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'purpose',
            'target' => 'profile2:ow_partner_profile:field_ow_nonprofit_description',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => '1',
        'skip_hash_check' => 0,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['ow_nonprofit_user'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ow_opportunities';
  $feeds_importer->config = array(
    'name' => 'Volunteer Opportunities',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'agency_name',
            'target' => 'field_ow_opp_agency_import',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'headline',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'restrictions',
            'target' => 'field_ow_opportunity_requirement',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'geo_cities',
            'target' => 'field_ow_opportunity_town',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          5 => array(
            'source' => 'email',
            'target' => 'field_ow_opportunity_contact',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'cf_education_income_health',
            'target' => 'field_ow_opportunity_type',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          7 => array(
            'source' => 'opp_id',
            'target' => 'guid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => '1',
        'skip_hash_check' => 0,
        'bundle' => 'ow_volunteer_opportunity',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['ow_opportunities'] = $feeds_importer;

  return $export;
}
