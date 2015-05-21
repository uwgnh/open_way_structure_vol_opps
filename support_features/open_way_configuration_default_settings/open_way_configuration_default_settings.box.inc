<?php
/**
 * @file
 * open_way_configuration_default_settings.box.inc
 */

/**
 * Implements hook_default_box().
 */
function open_way_configuration_default_settings_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ow_admin_theme_tweaks';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Tweaks for admin theme';
  $box->options = array(
    'body' => array(
      'value' => '<style content="text/css">

.form-item-sticky
{display:none;}

.page-admin-structure-block-manage-boxes-ow-gav-actionboxes-2012 #edit-regions, .page-admin-structure-block-manage-boxes-ow-gav-actionboxes-2012 #edit-visibility-title, .page-admin-structure-block-manage-boxes-ow-gav-actionboxes-2012 .vertical-tabs
{
display:none;
}

.page-admin-structure-block-manage-boxes-ow-gav-actionboxes-2012 #edit-regions, .page-admin-structure-block-manage-boxes-ow-gav-actionboxes-2012 #edit-visibility-title, .page-admin-structure-block-manage-boxes-ow-gav-actionboxes-2012 .vertical-tabs
{
display:none;
}


.page-admin-structure-block-manage-boxes-ow-navigation-donation-button #edit-regions, .page-admin-structure-block-manage-boxes-ow-navigation-donation-button #edit-visibility-title, .page-admin-structure-block-manage-boxes-ow-navigation-donation-button .vertical-tabs
{
display:none;
}

.page-admin-structure-block-manage-boxes-ow-social-media-buttons-box #edit-regions, .page-admin-structure-block-manage-boxes-ow-social-media-buttons-box #edit-visibility-title, .page-admin-structure-block-manage-boxes-ow-social-media-buttons-box .vertical-tabs
{
display:none;
}
.page-admin-structure-block-manage-boxes-ow-cc-email-signup #edit-regions, .page-admin-structure-block-manage-boxes-ow-cc-email-signup #edit-visibility-title, .page-admin-structure-block-manage-boxes-ow-cc-email-signup .vertical-tabs
{
display:none;
}
.page-admin-structure-block-manage-boxes-ow-eih-welcome #edit-regions, .page-admin-structure-block-manage-boxes-ow-eih-welcome #edit-visibility-title, .page-admin-structure-block-manage-boxes-ow-eih-welcome .vertical-tabs
{
display:none;
}

.error
{
display:none;
}
</style>',
      'format' => 'html_code',
    ),
    'additional_classes' => '',
  );
  $export['ow_admin_theme_tweaks'] = $box;

  return $export;
}
