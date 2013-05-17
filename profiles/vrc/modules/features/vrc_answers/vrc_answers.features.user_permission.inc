<?php
/**
 * @file
 * vrc_answers.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vrc_answers_user_default_permissions() {
  $permissions = array();

  // Exported permission: create answer content.
  $permissions['create answer content'] = array(
    'name' => 'create answer content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'no email' => 'no email',
    ),
    'module' => 'node',
  );

  // Exported permission: create field_question_pending.
  $permissions['create field_question_pending'] = array(
    'name' => 'create field_question_pending',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_tool.
  $permissions['create field_tool'] = array(
    'name' => 'create field_tool',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'support' => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_toolbox_categories.
  $permissions['create field_toolbox_categories'] = array(
    'name' => 'create field_toolbox_categories',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'support' => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create long_answer content.
  $permissions['create long_answer content'] = array(
    'name' => 'create long_answer content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create matching content.
  $permissions['create matching content'] = array(
    'name' => 'create matching content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create multichoice content.
  $permissions['create multichoice content'] = array(
    'name' => 'create multichoice content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create question content.
  $permissions['create question content'] = array(
    'name' => 'create question content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'no email' => 'no email',
    ),
    'module' => 'node',
  );

  // Exported permission: create scale content.
  $permissions['create scale content'] = array(
    'name' => 'create scale content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create short_answer content.
  $permissions['create short_answer content'] = array(
    'name' => 'create short_answer content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create truefalse content.
  $permissions['create truefalse content'] = array(
    'name' => 'create truefalse content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any answer content.
  $permissions['delete any answer content'] = array(
    'name' => 'delete any answer content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any long_answer content.
  $permissions['delete any long_answer content'] = array(
    'name' => 'delete any long_answer content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any matching content.
  $permissions['delete any matching content'] = array(
    'name' => 'delete any matching content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any multichoice content.
  $permissions['delete any multichoice content'] = array(
    'name' => 'delete any multichoice content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any question content.
  $permissions['delete any question content'] = array(
    'name' => 'delete any question content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any scale content.
  $permissions['delete any scale content'] = array(
    'name' => 'delete any scale content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any short_answer content.
  $permissions['delete any short_answer content'] = array(
    'name' => 'delete any short_answer content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any truefalse content.
  $permissions['delete any truefalse content'] = array(
    'name' => 'delete any truefalse content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own answer content.
  $permissions['delete own answer content'] = array(
    'name' => 'delete own answer content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'no email' => 'no email',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own long_answer content.
  $permissions['delete own long_answer content'] = array(
    'name' => 'delete own long_answer content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own matching content.
  $permissions['delete own matching content'] = array(
    'name' => 'delete own matching content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own multichoice content.
  $permissions['delete own multichoice content'] = array(
    'name' => 'delete own multichoice content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own question content.
  $permissions['delete own question content'] = array(
    'name' => 'delete own question content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'no email' => 'no email',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own scale content.
  $permissions['delete own scale content'] = array(
    'name' => 'delete own scale content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own short_answer content.
  $permissions['delete own short_answer content'] = array(
    'name' => 'delete own short_answer content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own truefalse content.
  $permissions['delete own truefalse content'] = array(
    'name' => 'delete own truefalse content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any answer content.
  $permissions['edit any answer content'] = array(
    'name' => 'edit any answer content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any long_answer content.
  $permissions['edit any long_answer content'] = array(
    'name' => 'edit any long_answer content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any matching content.
  $permissions['edit any matching content'] = array(
    'name' => 'edit any matching content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any multichoice content.
  $permissions['edit any multichoice content'] = array(
    'name' => 'edit any multichoice content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any question content.
  $permissions['edit any question content'] = array(
    'name' => 'edit any question content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any scale content.
  $permissions['edit any scale content'] = array(
    'name' => 'edit any scale content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any short_answer content.
  $permissions['edit any short_answer content'] = array(
    'name' => 'edit any short_answer content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any truefalse content.
  $permissions['edit any truefalse content'] = array(
    'name' => 'edit any truefalse content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit field_question_pending.
  $permissions['edit field_question_pending'] = array(
    'name' => 'edit field_question_pending',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_tool.
  $permissions['edit field_tool'] = array(
    'name' => 'edit field_tool',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'support' => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_toolbox_categories.
  $permissions['edit field_toolbox_categories'] = array(
    'name' => 'edit field_toolbox_categories',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'support' => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own answer content.
  $permissions['edit own answer content'] = array(
    'name' => 'edit own answer content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'no email' => 'no email',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own field_question_pending.
  $permissions['edit own field_question_pending'] = array(
    'name' => 'edit own field_question_pending',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_tool.
  $permissions['edit own field_tool'] = array(
    'name' => 'edit own field_tool',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'support' => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_toolbox_categories.
  $permissions['edit own field_toolbox_categories'] = array(
    'name' => 'edit own field_toolbox_categories',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'support' => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own long_answer content.
  $permissions['edit own long_answer content'] = array(
    'name' => 'edit own long_answer content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own matching content.
  $permissions['edit own matching content'] = array(
    'name' => 'edit own matching content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own multichoice content.
  $permissions['edit own multichoice content'] = array(
    'name' => 'edit own multichoice content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own question content.
  $permissions['edit own question content'] = array(
    'name' => 'edit own question content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'no email' => 'no email',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own scale content.
  $permissions['edit own scale content'] = array(
    'name' => 'edit own scale content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own short_answer content.
  $permissions['edit own short_answer content'] = array(
    'name' => 'edit own short_answer content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own truefalse content.
  $permissions['edit own truefalse content'] = array(
    'name' => 'edit own truefalse content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: view field_question_pending.
  $permissions['view field_question_pending'] = array(
    'name' => 'view field_question_pending',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_tool.
  $permissions['view field_tool'] = array(
    'name' => 'view field_tool',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'no email' => 'no email',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_toolbox_categories.
  $permissions['view field_toolbox_categories'] = array(
    'name' => 'view field_toolbox_categories',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'no email' => 'no email',
      'support' => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_question_pending.
  $permissions['view own field_question_pending'] = array(
    'name' => 'view own field_question_pending',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_tool.
  $permissions['view own field_tool'] = array(
    'name' => 'view own field_tool',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'no email' => 'no email',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_toolbox_categories.
  $permissions['view own field_toolbox_categories'] = array(
    'name' => 'view own field_toolbox_categories',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'no email' => 'no email',
      'support' => 'support',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
