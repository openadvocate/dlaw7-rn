<?php

/**
 * @file
 * Code for forms.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function tcvlan_refnet_form_referral_node_form_alter(&$form, &$form_state, $form_id) {
  // global $user is not fully loaded with fields, so use user_load().
  $user = user_load($GLOBALS['user']->uid);

  if (!user_access('bypass node access')) {
    if (empty($user->field_user_organization[LANGUAGE_NONE][0]['target_id'])) {
      drupal_set_message("You don't have a home Organization and may not create a Referral.", 'error');
      $form['actions']['submit']['#attributes']['disabled'] = TRUE;
    }
    elseif (empty($form['field_ref_origin_org'][LANGUAGE_NONE]['#default_value'])) {
      $form['field_ref_origin_org'][LANGUAGE_NONE]['#default_value'] =
        $user->field_user_organization[LANGUAGE_NONE][0]['target_id'];
    }

    if (empty($form['#node']->nid)) {
      $form['field_ref_status'][LANGUAGE_NONE]['#default_value'] = TCVLAN_REF_STATUS_POSTED;
    }

    // Placeholder text.
    $form['field_ref_client'][LANGUAGE_NONE][0]['value']['#attributes']['placeholder'] = 'First Middle Last';
    $form['field_ref_adverse_party'][LANGUAGE_NONE][0]['value']['#attributes']['placeholder'] = 'First Middle Last';
    $form['body'][LANGUAGE_NONE][0]['value']['#attributes']['placeholder'] = 'Do not include publicly identifiable information';

    // Hide fields not to be edited by user. To be updated in code.
    $form['field_ref_origin_org']['#access']    =
    $form['field_ref_target_org']['#access']    =
    $form['field_ref_invites']['#access']       =
    $form['field_ref_status']['#access']        =
    $form['field_ref_outcome']['#access']       =
    $form['field_ref_docs_sent_at']['#access']  =
    $form['field_ref_closed_at']['#access']     =
    $form['field_ref_log']['#access']           = FALSE;
  }

  // Explicitly set not to show [Save as draft] button.
  // @see editor_config_form_node_form_alter().
  $form['actions']['save_draft']['#access'] = FALSE;

  // Setting the submit button text would be overwritten
  // in editor_config_form_node_form_alter(). Added check there.
  if (empty($form['#node']->nid)) {
    $form['actions']['submit']['#value'] = 'Create Referral';
  }
}

/**
 * Implements hook_node_presave().
 */
function tcvlan_refnet_node_presave($node) {
  // TODO: Log when Referral is created.
  // TOOD: Log when things get udpated.
}
