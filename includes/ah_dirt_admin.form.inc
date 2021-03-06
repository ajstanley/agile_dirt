<?php

/**
 * @file
 * ah_admin.form.inc
 */

/**
 * Admin form.
 *
 * @return array
 *   Returns admin form.
 */
function ah_dirt_admin() {
  $form = array();
  $form['ah_dhcommons_api_key'] = array(
    '#type' => 'textfield',
    '#title' => t('API Key'),
    '#default_value' => variable_get('ah_dhcommons_api_key', ''),
    '#description' => t('API Key to access DH Commons'),
  );
  $form['ah_dirt_project_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Project Count'),
    '#default_value' => variable_get('ah_dirt_project_count', 5),
    '#description' => t('Maximum number of projects to be shown in Projects Tab on term view.'),
  );
  $form['ah_dirt_dhcommons_url'] = array(
    '#type' => 'textfield',
    '#title' => t('DHCommons URL'),
    '#default_value' => variable_get('ah_dirt_dhcommons_url', 'http://dev.dhcommons.org'),
    '#description' => t('URL of DHCommons site.'),
  );
  $form['ah_dirt_dhcommons_rest_path'] = array(
    '#type' => 'textfield',
    '#title' => t('REST Path'),
    '#default_value' => variable_get('ah_dirt_dhcommons_rest_path', 'rest'),
    '#description' => t('rest path - as provided by DHCommon administrator'),
  );
  $form['ah_dirt_dhcommons_alias'] = array(
    '#type' => 'textfield',
    '#title' => t('Alias'),
    '#default_value' => variable_get('ah_dirt_dhcommons_alias', 'project'),
    '#description' => t('alias - as provided by DHCommon administrator'),
  );
  return system_settings_form($form);
}
