<?php
/**
 * @file
 * ct_crm_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ct_crm_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ct_crm_customer content.
  $permissions['create ct_crm_customer content'] = array(
    'name' => 'create ct_crm_customer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any ct_crm_customer content.
  $permissions['delete any ct_crm_customer content'] = array(
    'name' => 'delete any ct_crm_customer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own ct_crm_customer content.
  $permissions['delete own ct_crm_customer content'] = array(
    'name' => 'delete own ct_crm_customer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any ct_crm_customer content.
  $permissions['edit any ct_crm_customer content'] = array(
    'name' => 'edit any ct_crm_customer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own ct_crm_customer content.
  $permissions['edit own ct_crm_customer content'] = array(
    'name' => 'edit own ct_crm_customer content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
