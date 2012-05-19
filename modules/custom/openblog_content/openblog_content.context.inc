<?php
/**
 * @file
 * openblog_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openblog_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'openblog_sitewide';
  $context->description = 'A sitewide context for OpenBlog.';
  $context->tag = 'theme';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-homepage-block_1' => array(
          'module' => 'views',
          'delta' => 'homepage-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('A sitewide context for OpenBlog.');
  t('theme');
  $export['openblog_sitewide'] = $context;

  return $export;
}
