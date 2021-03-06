<?php
/**
 * @file
 * open_way_structure_vol_opps.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function open_way_structure_vol_opps_content_defaults() {
  $content = array();

  $content['ow_opportunity_contact_form'] = (object) array(
    'webform' => array(
      'confirmation' => '<p>Your email has been sent.</p>
',
      'teaser' => '0',
      'submit_text' => 'Submit Request for Information',
      'submit_limit' => '-1',
      'submit_interval' => '-1',
      'email' => NULL,
      'email_from_name' => NULL,
      'email_from_address' => NULL,
      'email_subject' => NULL,
      'additional_validate' => NULL,
      'additional_submit' => NULL,
      'confirmation_format' => '1',
      'submit_notice' => '0',
      'allow_draft' => '0',
      'redirect_url' => 'node/%get[nid]',
      'block' => '0',
      'status' => '1',
      'auto_save' => '0',
      'total_submit_limit' => '-1',
      'total_submit_interval' => '-1',
      'webform_ajax' => '0',
      'record_exists' => TRUE,
      'roles' => array(
        0 => '1',
        1 => '2',
      ),
      'emails' => array(
        1 => array(
          'nid' => '13596',
          'eid' => '1',
          'email' => '6',
          'subject' => 'Volunteer Info Request: %get[title]',
          'from_name' => 'default',
          'from_address' => 'no-reply@uwgnh.org',
          'template' => 'Submitted on %date
Submitted values are:
%email_values
',
          'excluded_components' => array(),
          'html' => '0',
          'attachments' => '0',
        ),
        2 => array(
          'nid' => '13596',
          'eid' => '2',
          'email' => '1',
          'subject' => 'Thank You for Reaching Out to Volunteer',
          'from_name' => 'default',
          'from_address' => 'default',
          'template' => 'Thank you for reaching out volunteer. An email has been sent to %get[contact_email].

Want to learn about more ways to give, volunteer and advocate? 

Signup for notices from United Way: http://eepurl.com/l2LYf',
          'excluded_components' => array(),
          'html' => '0',
          'attachments' => '0',
        ),
        3 => array(
          'nid' => '13596',
          'eid' => '3',
          'email' => 'webmaster@uwgnh.org',
          'subject' => 'default',
          'from_name' => 'default',
          'from_address' => 'default',
          'template' => 'default',
          'excluded_components' => array(),
          'html' => '0',
          'attachments' => '0',
        ),
        4 => array(
          'nid' => '13596',
          'eid' => '4',
          'email' => 'volunteer-referrals@uwgnh.org',
          'subject' => 'default',
          'from_name' => 'default',
          'from_address' => 'default',
          'template' => 'default',
          'excluded_components' => array(),
          'html' => '0',
          'attachments' => '0',
        ),
      ),
      'components' => array(
        0 => array(
          'pid' => '0',
          'form_key' => 'opportunity_agency_name',
          'name' => 'Agency Name',
          'type' => 'textfield',
          'value' => '%get[agency_name]',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 1,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '12',
          'page_num' => 1,
        ),
        1 => array(
          'pid' => '0',
          'form_key' => 'opportunity_title',
          'name' => 'Opportunity Title',
          'type' => 'textfield',
          'value' => '%get[opportunity_title]',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 1,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '13',
          'page_num' => 1,
        ),
        2 => array(
          'pid' => '0',
          'form_key' => 'contact_email',
          'name' => 'Opportunity Contact Email',
          'type' => 'email',
          'value' => '%get[contact_email]',
          'extra' => array(
            'title_display' => 'before',
            'private' => 1,
            'disabled' => 1,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '14',
          'page_num' => 1,
        ),
        3 => array(
          'pid' => '0',
          'form_key' => 'volunteer_email',
          'name' => 'Your Email',
          'type' => 'email',
          'value' => '%useremail',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'width' => '25',
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '15',
          'page_num' => 1,
        ),
        4 => array(
          'pid' => '0',
          'form_key' => 'company_or_group',
          'name' => 'Company or Group',
          'type' => 'fieldset',
          'value' => '',
          'extra' => array(
            'description' => 'Looking to volunteer with a company or group? These additional questions will help us serve you.',
            'title_display' => 0,
            'private' => 0,
            'collapsible' => 1,
            'collapsed' => 1,
            'conditional_operator' => '=',
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '16',
          'page_num' => 1,
        ),
        5 => array(
          'pid' => '2',
          'form_key' => 'company_or_group_name',
          'name' => 'Company or Group Name',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'width' => '30',
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '6',
          'page_num' => 1,
        ),
        6 => array(
          'pid' => '2',
          'form_key' => 'approximately_how_many_people',
          'name' => 'Approximately How Many People',
          'type' => 'number',
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'type' => 'textfield',
            'disabled' => 0,
            'decimals' => '',
            'separator' => ',',
            'point' => '.',
            'unique' => 0,
            'integer' => 0,
            'conditional_operator' => '=',
            'excludezero' => 0,
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'min' => '',
            'max' => '',
            'step' => '',
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '7',
          'page_num' => 1,
        ),
        7 => array(
          'pid' => '0',
          'form_key' => 'volunteer_message',
          'name' => 'Message',
          'type' => 'textarea',
          'value' => 'Please tell me more about %get[opportunity_title]',
          'extra' => array(
            'title_display' => 0,
            'private' => 0,
            'resizable' => 1,
            'disabled' => 0,
            'conditional_operator' => '=',
            'cols' => '',
            'rows' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '17',
          'page_num' => 1,
        ),
      ),
    ),
    'exported_path' => 'form/volunteer-opportunity-contact',
    'title' => 'Volunteer Opportunity Contact',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'webform',
    'language' => 'und',
    'created' => '1428961685',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'ow_opportunity_contact_form',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Please put in your email and any message you wish to send to the contact person for this volunteer opportunity.</p>
',
          'summary' => '',
          'format' => '1',
          'safe_value' => '<p>Please put in your email and any message you wish to send to the contact person for this volunteer opportunity.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
