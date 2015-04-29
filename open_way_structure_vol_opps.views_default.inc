<?php
/**
 * @file
 * open_way_structure_vol_opps.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function open_way_structure_vol_opps_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'opportunity_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Volunteer Opportunities Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Volunteer Opportunities by Location';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'gmap';
  $handler->display->display_options['style_options']['macro'] = '[gmap |width=750px |height=600px ]';
  $handler->display->display_options['style_options']['markertype'] = 'small red';
  $handler->display->display_options['style_options']['latfield'] = 'title';
  $handler->display->display_options['style_options']['lonfield'] = 'title';
  $handler->display->display_options['style_options']['markerfield'] = 'title';
  $handler->display->display_options['style_options']['geofield'] = 'title';
  $handler->display->display_options['style_options']['enablermt'] = 0;
  $handler->display->display_options['style_options']['rmtfield'] = 'title';
  $handler->display->display_options['style_options']['rmtfieldraw'] = 1;
  $handler->display->display_options['style_options']['animation'] = '0';
  $handler->display->display_options['style_options']['tooltipfield'] = 'title';
  $handler->display->display_options['style_options']['bubbletextenabled'] = 1;
  $handler->display->display_options['style_options']['bubbletextfield'] = 'nothing';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p><strong><a href="/volunteer/find">Find</a></strong> /&nbsp;<strong><a href="/volunteer/map">Map</a></strong> /&nbsp;<strong><a href="/volunteer/calendar">Calendar</a> </strong>&nbsp;</p>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'ow_partner_profile' => 'ow_partner_profile',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Profile: Agency Name */
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['id'] = 'field_ow_nonprofit_name';
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['table'] = 'field_data_field_ow_nonprofit_name';
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['field'] = 'field_ow_nonprofit_name';
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['label'] = '';
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Opportunity Location */
  $handler->display->display_options['fields']['field_ow_opportunity_location']['id'] = 'field_ow_opportunity_location';
  $handler->display->display_options['fields']['field_ow_opportunity_location']['table'] = 'field_data_field_ow_opportunity_location';
  $handler->display->display_options['fields']['field_ow_opportunity_location']['field'] = 'field_ow_opportunity_location';
  $handler->display->display_options['fields']['field_ow_opportunity_location']['label'] = '';
  $handler->display->display_options['fields']['field_ow_opportunity_location']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Bubble Text';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3><br>
[field_ow_nonprofit_name]
';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ow_volunteer_opportunity' => 'ow_volunteer_opportunity',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'volunteer/map';
  $export['opportunity_map'] = $view;

  $view = new view();
  $view->name = 'ow_nonprofit_opportunities_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Nonprofit Profile for Opportunities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Agency Information';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'ow_partner_profile' => 'ow_partner_profile',
  );
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['relationship'] = 'profile';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user']['separator'] = '';
  /* Field: Profile: Logo */
  $handler->display->display_options['fields']['field_ow_nonprofit_logo']['id'] = 'field_ow_nonprofit_logo';
  $handler->display->display_options['fields']['field_ow_nonprofit_logo']['table'] = 'field_data_field_ow_nonprofit_logo';
  $handler->display->display_options['fields']['field_ow_nonprofit_logo']['field'] = 'field_ow_nonprofit_logo';
  $handler->display->display_options['fields']['field_ow_nonprofit_logo']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_ow_nonprofit_logo']['label'] = '';
  $handler->display->display_options['fields']['field_ow_nonprofit_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_ow_nonprofit_logo']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['field_ow_nonprofit_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ow_nonprofit_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ow_nonprofit_logo']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Profile: Agency Name */
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['id'] = 'field_ow_nonprofit_name';
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['table'] = 'field_data_field_ow_nonprofit_name';
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['field'] = 'field_ow_nonprofit_name';
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['label'] = '';
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['alter']['path'] = 'profile-ow_partner_profile/[user]';
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = TRUE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Opportunity Agency Info Block */
  $handler = $view->new_display('block', 'Opportunity Agency Info Block', 'block');
  $export['ow_nonprofit_opportunities_profile'] = $view;

  $view = new view();
  $view->name = 'ow_opportunities_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_ow_opportunities_index';
  $view->human_name = 'Opportunities Search ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search  Volunteer Opportunities ';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '[promote]';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p><strong><a href="/volunteer/find">Find</a></strong> /&nbsp;<strong><a href="/volunteer/map">Map</a></strong> /&nbsp;<strong><a href="/volunteer/calendar">Calendar</a> </strong>&nbsp;</p>';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No results. Try another search or submit a search with no text to return to the list sorted by last updated</p>';
  $handler->display->display_options['empty']['area']['format'] = '2';
  /* Relationship: Indexed Node: Author */
  $handler->display->display_options['relationships']['author']['id'] = 'author';
  $handler->display->display_options['relationships']['author']['table'] = 'search_api_index_ow_opportunities_index';
  $handler->display->display_options['relationships']['author']['field'] = 'author';
  /* Relationship: User: Nonprofit Partner Profile profile */
  $handler->display->display_options['relationships']['profile_ow_partner_profile']['id'] = 'profile_ow_partner_profile';
  $handler->display->display_options['relationships']['profile_ow_partner_profile']['table'] = 'entity_user';
  $handler->display->display_options['relationships']['profile_ow_partner_profile']['field'] = 'profile_ow_partner_profile';
  $handler->display->display_options['relationships']['profile_ow_partner_profile']['relationship'] = 'author';
  $handler->display->display_options['relationships']['profile_ow_partner_profile']['label'] = 'Partner Nonprofit profile';
  /* Field: Indexed Node: Promoted to frontpage */
  $handler->display->display_options['fields']['promote']['id'] = 'promote';
  $handler->display->display_options['fields']['promote']['table'] = 'search_api_index_ow_opportunities_index';
  $handler->display->display_options['fields']['promote']['field'] = 'promote';
  $handler->display->display_options['fields']['promote']['label'] = '';
  $handler->display->display_options['fields']['promote']['exclude'] = TRUE;
  $handler->display->display_options['fields']['promote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['promote']['type'] = 'custom';
  $handler->display->display_options['fields']['promote']['type_custom_true'] = 'promoted';
  $handler->display->display_options['fields']['promote']['type_custom_false'] = 'not-promoted';
  $handler->display->display_options['fields']['promote']['not'] = 0;
  $handler->display->display_options['fields']['promote']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_ow_opportunities_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Profile: Agency Name */
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['id'] = 'field_ow_nonprofit_name';
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['table'] = 'entity_profile2';
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['field'] = 'field_ow_nonprofit_name';
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['relationship'] = 'profile_ow_partner_profile';
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['label'] = '';
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['element_class'] = 'nonprofit-name';
  $handler->display->display_options['fields']['field_ow_nonprofit_name']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_ow_opportunities_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Indexed Node: Date changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'search_api_index_ow_opportunities_index';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Node: Promoted to frontpage */
  $handler->display->display_options['sorts']['promote']['id'] = 'promote';
  $handler->display->display_options['sorts']['promote']['table'] = 'search_api_index_ow_opportunities_index';
  $handler->display->display_options['sorts']['promote']['field'] = 'promote';
  $handler->display->display_options['sorts']['promote']['order'] = 'DESC';
  /* Sort criterion: Indexed Node: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_ow_opportunities_index';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Indexed Node: Opportunity Type */
  $handler->display->display_options['filters']['field_ow_opportunity_type']['id'] = 'field_ow_opportunity_type';
  $handler->display->display_options['filters']['field_ow_opportunity_type']['table'] = 'search_api_index_ow_opportunities_index';
  $handler->display->display_options['filters']['field_ow_opportunity_type']['field'] = 'field_ow_opportunity_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'volunteer/find';
  $export['ow_opportunities_search'] = $view;

  $view = new view();
  $view->name = 'ow_opportunities_upcomming';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Upcomming Volunteer Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'More Upcoming Volunteer Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Opportunity Date -  start date (field_ow_opportunity_date) */
  $handler->display->display_options['sorts']['field_ow_opportunity_date_value']['id'] = 'field_ow_opportunity_date_value';
  $handler->display->display_options['sorts']['field_ow_opportunity_date_value']['table'] = 'field_data_field_ow_opportunity_date';
  $handler->display->display_options['sorts']['field_ow_opportunity_date_value']['field'] = 'field_ow_opportunity_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ow_volunteer_opportunity' => 'ow_volunteer_opportunity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Opportunity Date -  start date (field_ow_opportunity_date) */
  $handler->display->display_options['filters']['field_ow_opportunity_date_value']['id'] = 'field_ow_opportunity_date_value';
  $handler->display->display_options['filters']['field_ow_opportunity_date_value']['table'] = 'field_data_field_ow_opportunity_date';
  $handler->display->display_options['filters']['field_ow_opportunity_date_value']['field'] = 'field_ow_opportunity_date_value';
  $handler->display->display_options['filters']['field_ow_opportunity_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_ow_opportunity_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ow_opportunity_date_value']['granularity'] = 'month';
  $handler->display->display_options['filters']['field_ow_opportunity_date_value']['default_date'] = '+6 month';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['ow_opportunities_upcomming'] = $view;

  $view = new view();
  $view->name = 'ow_opportunity_calendar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Volunteer Opportunity Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['calendar_date_link'] = 'ow_volunteer_opportunity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'taxonomy';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'blog' => '#ffffff',
    'ow_display' => '#ffffff',
    'ow_event' => '#ffffff',
    'ow_files' => '#ffffff',
    'ow_fundraising_form_template' => '#ffffff',
    'ow_fundraising_page' => '#ffffff',
    'ow_landing_page' => '#ffffff',
    'ow_page' => '#ffffff',
    'partner' => '#ffffff',
    'media_gallery' => '#ffffff',
    'audio' => '#ffffff',
    'poll' => '#ffffff',
    'press' => '#ffffff',
    'ow_press_release' => '#ffffff',
    'ow_program' => '#ffffff',
    'ow_slide' => '#ffffff',
    'ow_story' => '#ffffff',
    'ow_volunteer_opportunity' => '#ffffff',
    'webform' => '#ffffff',
    'page' => '#ffffff',
    'landing_page' => '#ffffff',
    'program' => '#ffffff',
  );
  $handler->display->display_options['row_options']['colors']['taxonomy_field'] = 'field_ow_event_section';
  $handler->display->display_options['row_options']['colors']['calendar_colors_vocabulary'] = array(
    'field_ow_event_section' => '23',
  );
  $handler->display->display_options['row_options']['colors']['calendar_colors_taxonomy'] = array(
    1451 => '#ff9600',
    1446 => '#649cd3',
    1531 => '#ffffff',
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p><strong><a href="/volunteer/find">Find</a></strong> /&nbsp;<strong><a href="/volunteer/map">Map</a></strong> /&nbsp;<strong><a href="/volunteer/calendar">Calendar</a> </strong>&nbsp;</p>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['content'] = '<h2>Volunteer Events This Month</h2>';
  $handler->display->display_options['header']['area_1']['format'] = '2';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Event Section */
  $handler->display->display_options['fields']['field_ow_event_section']['id'] = 'field_ow_event_section';
  $handler->display->display_options['fields']['field_ow_event_section']['table'] = 'field_data_field_ow_event_section';
  $handler->display->display_options['fields']['field_ow_event_section']['field'] = 'field_ow_event_section';
  $handler->display->display_options['fields']['field_ow_event_section']['label'] = '';
  $handler->display->display_options['fields']['field_ow_event_section']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ow_event_section']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_ow_event_date']['id'] = 'field_ow_event_date';
  $handler->display->display_options['fields']['field_ow_event_date']['table'] = 'field_data_field_ow_event_date';
  $handler->display->display_options['fields']['field_ow_event_date']['field'] = 'field_ow_event_date';
  $handler->display->display_options['fields']['field_ow_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_ow_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ow_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '90';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Opportunity Date */
  $handler->display->display_options['fields']['field_ow_opportunity_date']['id'] = 'field_ow_opportunity_date';
  $handler->display->display_options['fields']['field_ow_opportunity_date']['table'] = 'field_data_field_ow_opportunity_date';
  $handler->display->display_options['fields']['field_ow_opportunity_date']['field'] = 'field_ow_opportunity_date';
  $handler->display->display_options['fields']['field_ow_opportunity_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Opportunity Date -  start date (field_ow_opportunity_date) */
  $handler->display->display_options['sorts']['field_ow_opportunity_date_value']['id'] = 'field_ow_opportunity_date_value';
  $handler->display->display_options['sorts']['field_ow_opportunity_date_value']['table'] = 'field_data_field_ow_opportunity_date';
  $handler->display->display_options['sorts']['field_ow_opportunity_date_value']['field'] = 'field_ow_opportunity_date_value';
  $handler->display->display_options['sorts']['field_ow_opportunity_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Opportunity Date -  start date (field_ow_opportunity_date) */
  $handler->display->display_options['arguments']['field_ow_opportunity_date_value']['id'] = 'field_ow_opportunity_date_value';
  $handler->display->display_options['arguments']['field_ow_opportunity_date_value']['table'] = 'field_data_field_ow_opportunity_date';
  $handler->display->display_options['arguments']['field_ow_opportunity_date_value']['field'] = 'field_ow_opportunity_date_value';
  $handler->display->display_options['arguments']['field_ow_opportunity_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ow_opportunity_date_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_ow_opportunity_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ow_opportunity_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ow_opportunity_date_value']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Volunteer Opportunity Calendar';
  $handler->display->display_options['path'] = 'volunteer/calendar';

  /* Display: Mini Calendar of Events */
  $handler = $view->new_display('block', 'Mini Calendar of Events', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['calendar_date_link'] = 'ow_event';
  $handler->display->display_options['row_options']['colors']['legend'] = 'taxonomy';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'blog' => '#ffffff',
    'ow_display' => '#ffffff',
    'ow_event' => '#ffffff',
    'ow_files' => '#ffffff',
    'ow_fundraising_form_template' => '#ffffff',
    'ow_fundraising_page' => '#ffffff',
    'ow_landing_page' => '#ffffff',
    'ow_page' => '#ffffff',
    'partner' => '#ffffff',
    'media_gallery' => '#ffffff',
    'audio' => '#ffffff',
    'press' => '#ffffff',
    'ow_press_release' => '#ffffff',
    'ow_program' => '#ffffff',
    'ow_slide' => '#ffffff',
    'ow_story' => '#ffffff',
    'webform' => '#ffffff',
    'page' => '#ffffff',
    'post' => '#ffffff',
    'landing_page' => '#ffffff',
    'program' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['calendar_date_link'] = 'ow_event';
  $handler->display->display_options['row_options']['colors']['legend'] = 'taxonomy';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'blog' => '#ffffff',
    'ow_display' => '#ffffff',
    'ow_event' => '#ffffff',
    'ow_files' => '#ffffff',
    'ow_fundraising_form_template' => '#ffffff',
    'ow_fundraising_page' => '#ffffff',
    'ow_landing_page' => '#ffffff',
    'ow_page' => '#ffffff',
    'partner' => '#ffffff',
    'media_gallery' => '#ffffff',
    'audio' => '#ffffff',
    'press' => '#ffffff',
    'ow_press_release' => '#ffffff',
    'ow_program' => '#ffffff',
    'ow_slide' => '#ffffff',
    'ow_story' => '#ffffff',
    'webform' => '#ffffff',
    'page' => '#ffffff',
    'post' => '#ffffff',
    'landing_page' => '#ffffff',
    'program' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'events/day/%';
  $export['ow_opportunity_calendar'] = $view;

  $view = new view();
  $view->name = 'ow_opportunity_contact_form';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Opportunity Contact Form';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Opportunity Contact Form';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Opportunity Contact */
  $handler->display->display_options['fields']['field_ow_opportunity_contact']['id'] = 'field_ow_opportunity_contact';
  $handler->display->display_options['fields']['field_ow_opportunity_contact']['table'] = 'field_data_field_ow_opportunity_contact';
  $handler->display->display_options['fields']['field_ow_opportunity_contact']['field'] = 'field_ow_opportunity_contact';
  $handler->display->display_options['fields']['field_ow_opportunity_contact']['label'] = '';
  $handler->display->display_options['fields']['field_ow_opportunity_contact']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ow_opportunity_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ow_opportunity_contact']['type'] = 'email_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a class="node-readmore" href="/form/volunteer-opportunity-contact?opportunity_title=[title] &contact_email=[field_ow_opportunity_contact]&nid=[nid]">Contact Agency</a>
';
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'node-readmore colorbox-node';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ow_volunteer_opportunity' => 'ow_volunteer_opportunity',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['ow_opportunity_contact_form'] = $view;

  $view = new view();
  $view->name = 'ow_partner_opportunity_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Partner opportunity Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Partner opportunity Listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ow_volunteer_opportunity' => 'ow_volunteer_opportunity',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['ow_partner_opportunity_listing'] = $view;

  return $export;
}
