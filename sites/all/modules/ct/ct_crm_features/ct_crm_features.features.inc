<?php
/**
 * @file
 * ct_crm_features.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ct_crm_features_node_info() {
  $items = array(
    'ct_crm_customer' => array(
      'name' => t('客户信息'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('客户姓名/称谓'),
      'help' => '',
    ),
  );
  return $items;
}
