<?php
/**
 * @file
 * pro_101_about_feature_v.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pro_101_about_feature_v_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about';
  $context->description = '';
  $context->tag = 'Section';
  $context->conditions = array(
    'defaultcontent' => array(
      'values' => array(
        'about' => 'about',
      ),
    ),
    'menu' => array(
      'values' => array(
        'about' => 'about',
      ),
    ),
    'path' => array(
      'values' => array(
        'about' => 'about',
      ),
    ),
    'views' => array(
      'values' => array(
        'Professionals:page_1' => 'Professionals:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-about' => array(
          'module' => 'boxes',
          'delta' => 'about',
          'region' => 'content',
          'weight' => '-24',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Section');
  $export['about'] = $context;

  return $export;
}
