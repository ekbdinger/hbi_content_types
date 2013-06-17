<?php
/**
 * @file
 * hbi_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function hbi_content_types_node_info() {
  $items = array(
    'ebo_documentation' => array(
      'name' => t('Documentation'),
      'base' => 'node_content',
      'description' => t('Documentation (PDFs) for the eBO/HBI Department'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ebo_video' => array(
      'name' => t('eBO Video'),
      'base' => 'node_content',
      'description' => t('Videos from the eBO/HBI Team'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
