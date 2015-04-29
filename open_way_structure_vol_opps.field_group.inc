<?php
/**
 * @file
 * open_way_structure_vol_opps.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function open_way_structure_vol_opps_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categorization|node|ow_volunteer_opportunity|default';
  $field_group->group_name = 'group_categorization';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ow_volunteer_opportunity';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorization ',
    'weight' => '5',
    'children' => array(
      0 => 'field_ow_opportunity_type',
      1 => 'field_ow_opportunity_audience',
      2 => 'field_ow_opportunity_town',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Categorization ',
      'instance_settings' => array(
        'classes' => 'group-categorization field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_categorization|node|ow_volunteer_opportunity|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_and_time|node|ow_volunteer_opportunity|form';
  $field_group->group_name = 'group_date_and_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ow_volunteer_opportunity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Set a Date and Time',
    'weight' => '6',
    'children' => array(
      0 => 'field_ow_opportunity_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Set a Date and Time',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-date-and-time field-group-fieldset',
        'description' => 'Setting a date and time for your event will add it the calendar.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_date_and_time|node|ow_volunteer_opportunity|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_filters|node|ow_volunteer_opportunity|form';
  $field_group->group_name = 'group_filters';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ow_volunteer_opportunity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Search Filters',
    'weight' => '8',
    'children' => array(
      0 => 'field_ow_opportunity_type',
      1 => 'field_ow_opportunity_audience',
      2 => 'field_ow_opportunity_town',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Search Filters',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-filters field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_filters|node|ow_volunteer_opportunity|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|ow_volunteer_opportunity|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ow_volunteer_opportunity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Set a Location',
    'weight' => '5',
    'children' => array(
      0 => 'field_ow_opportunity_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Set a Location',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-location field-group-fieldset',
        'description' => 'Adding a location will display your opportunity on the the map of all opportunities and add a small Google map to your listing.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_location|node|ow_volunteer_opportunity|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ow_opportunity_office_use|node|ow_volunteer_opportunity|form';
  $field_group->group_name = 'group_ow_opportunity_office_use';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ow_volunteer_opportunity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Office Use',
    'weight' => '13',
    'children' => array(
      0 => 'field_ow_opp_agency_import',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Office Use',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ow-opportunity-office-use field-group-fieldset',
        'description' => 'Fields used by United Way staff during initial agency import to system',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ow_opportunity_office_use|node|ow_volunteer_opportunity|form'] = $field_group;

  return $export;
}
