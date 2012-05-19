<?php
/**
 * @file
 * openblog_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openblog_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function openblog_content_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openblog_content_node_info() {
  $items = array(
    'post' => array(
      'name' => t('Post'),
      'base' => 'node_content',
      'description' => t('A blog post'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
