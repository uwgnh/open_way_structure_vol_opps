<?php
/**
 * @file
 * open_way_structure_volunteer_opportunities.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function open_way_structure_volunteer_opportunities_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function open_way_structure_volunteer_opportunities_node_info() {
  $items = array(
    'ow_volunteer_opportunity' => array(
      'name' => t('Volunteer Opportunity'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_profile2_type().
 */
function open_way_structure_volunteer_opportunities_default_profile2_type() {
  $items = array();
  $items['ow_partner_profile'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "ow_partner_profile",
    "label" : "Nonprofit Partner Profile",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 0 }
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function open_way_structure_volunteer_opportunities_default_search_api_index() {
  $items = array();
  $items['ow_opportunities_index'] = entity_import('search_api_index', '{
    "name" : "Opportunities ",
    "machine_name" : "ow_opportunities_index",
    "description" : null,
    "server" : "ow_opportunities_db",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "25",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "field_ow_opportunity_audience" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_ow_opportunity_date:value" : { "type" : "date" },
        "field_ow_opportunity_town" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_ow_opportunity_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "promote" : { "type" : "boolean" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text", "boost" : "2.0" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : { "ow_volunteer_opportunity" : "ow_volunteer_opportunity" }
          }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_ow_opportunity_type" : true,
              "field_ow_opportunity_audience" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function open_way_structure_volunteer_opportunities_default_search_api_server() {
  $items = array();
  $items['ow_opportunities_db'] = entity_import('search_api_server', '{
    "name" : "opportunities",
    "machine_name" : "ow_opportunities_db",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 0,
      "indexes" : { "ow_opportunities_index" : {
          "changed" : {
            "table" : "search_api_db_ow_opportunities_index",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_ow_opportunities_index",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_ow_opportunities_index_text",
            "column" : "title",
            "type" : "text",
            "boost" : "2.0"
          },
          "body:value" : {
            "table" : "search_api_db_ow_opportunities_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_ow_opportunity_type" : {
            "table" : "search_api_db_ow_opportunities_index_field_ow_opportunity_type",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_ow_opportunity_audience" : {
            "table" : "search_api_db_ow_opportunities_index_field_ow_opportunity_audi",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_ow_opportunity_town" : {
            "table" : "search_api_db_ow_opportunities_index_field_ow_opportunity_town",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_ow_opportunities_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "promote" : {
            "table" : "search_api_db_ow_opportunities_index",
            "column" : "promote",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "field_ow_opportunity_date:value" : {
            "table" : "search_api_db_ow_opportunities_index",
            "column" : "field_ow_opportunity_date_value",
            "type" : "date",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1"
  }');
  return $items;
}
