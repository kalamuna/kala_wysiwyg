<?php
/**
 * @file
 * kala_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kala_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format kala_fullhtml_text'.
  $permissions['use text format kala_fullhtml_text'] = array(
    'name' => 'use text format kala_fullhtml_text',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
