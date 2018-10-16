<?php

/**
 * @file
 * Code for Referral actions block.
 */

function tcvlan_referral_parties_block() {
  $user = user_load($GLOBALS['user']->uid);
  $referral = menu_get_object();

  if ($referral and tcvlan_refnet_user_can_see_parties($user, $referral)) {
    $client = field_view_field('node', $referral, 'field_ref_client');
    $client[0]['#markup'] = nl2br($client[0]['#markup']);

    $adversary = field_view_field('node', $referral, 'field_ref_adverse_party');
    $adversary[0]['#markup'] = nl2br($adversary[0]['#markup']);
    $adversary['#weight'] = 1;

    $content = array(
      'client' => $client,
      'adversary' => $adversary,
    );

    return array('subject' => 'Parties', 'content' => $content);
  }
}

function tcvlan_referral_actions_block() {
  $user = user_load($GLOBALS['user']->uid);
  $referral = menu_get_object();

  $title = '';
  $content = 'Referral actions available for the members of referring and receiving organizations.';

  if (tcvlan_refnet_user_owns_referral($user, $referral)) {
    switch ($referral->field_ref_status[LANGUAGE_NONE][0]['value']) {
      case TCVLAN_REF_STATUS_POSTED:
      case TCVLAN_REF_STATUS_INVITED:
      case TCVLAN_REF_STATUS_ACCEPTED:
        $title = 'Invite';
        $content = tcvlan_referral_action_invite($user, $referral);
        break;
      case TCVLAN_REF_STATUS_CERTIFIED:
        $title = 'Referral Placed';
        $content = tcvlan_referral_action_send_docs($user, $referral);
        break;
      case TCVLAN_REF_STATUS_REFERRED:
        $title = 'Documents Sent';
        $content = tcvlan_referral_action_referred($user, $referral);
        break;
      case TCVLAN_REF_STATUS_CLOSED:
        $title = 'Closed';
        $content = tcvlan_referral_action_closed($user, $referral);
        break;
    }
  }
  elseif (tcvlan_refnet_user_targeted_by_referral($user, $referral)) {
    switch ($referral->field_ref_status[LANGUAGE_NONE][0]['value']) {
      case TCVLAN_REF_STATUS_POSTED:
      case TCVLAN_REF_STATUS_INVITED:
        $title = 'Accept';
        $content = tcvlan_referral_action_accept($user, $referral);
        break;
      case TCVLAN_REF_STATUS_ACCEPTED:
        $title = 'Confirm No Conflict';
        $content = tcvlan_referral_action_certify($user, $referral);
        break;
      case TCVLAN_REF_STATUS_CERTIFIED:
        $title = 'Waiting for Documents';
        $content = tcvlan_referral_action_wait_for_docs($user, $referral);
        break;
      case TCVLAN_REF_STATUS_REFERRED:
        $title = 'Close';
        $content = tcvlan_referral_action_close($user, $referral);
        break;
      case TCVLAN_REF_STATUS_CLOSED:
        $title = 'Closed';
        $content = tcvlan_referral_action_close($user, $referral, TRUE);
        break;
    }
  }

  return array('subject' => $title, 'content' => $content);
}

function tcvlan_referral_action_invite($user, $referral) {
  $form = drupal_get_form('tcvlan_referral_action_invite_form', $referral);

  return $form;
}

function tcvlan_referral_action_send_docs($user, $referral) {
  $form = drupal_get_form('tcvlan_referral_action_send_docs_form', $referral);

  return $form;
}

function tcvlan_referral_action_referred($user, $referral) {
  $form = drupal_get_form('tcvlan_referral_action_send_docs_form', $referral);

  $form['submit']['#access'] = FALSE;

  $date = date('F j, Y - g:i a', $referral->field_ref_docs_sent_at[LANGUAGE_NONE][0]['value']);

  $output =<<<OUT
    <p>This Referrral was marked as "documents sent" on $date. The Referral will be closed by the target organization and there is no more actions for you to take.</p>
OUT;

  $form['note'] = array(
    '#markup' => $output,
  );

  return $form;
}

function tcvlan_referral_action_closed($user, $referral) {
  $form = drupal_get_form('tcvlan_referral_action_send_docs_form', $referral);

  $form['submit']['#access'] = FALSE;

  $date = date('F j, Y - g:i a', $referral->field_ref_closed_at[LANGUAGE_NONE][0]['value']);

  $outcome = '';
  if (!empty($referral->field_ref_outcome)) {
    $value = $referral->field_ref_outcome[LANGUAGE_NONE][0]['value'];
    $outcome = tcvlan_refnet_list_label('field_ref_outcome', $value);
    $outcome = " with the outcome, <em>$outcome</em>";
  }

  $output =<<<OUT
    <p>This Referrral was closed on {$date}{$outcome}.</p>
OUT;

  $form['note'] = array(
    '#markup' => $output,
  );

  return $form;
}

function tcvlan_referral_action_accept($user, $referral) {
  $form = drupal_get_form('tcvlan_referral_action_accept_form', $referral);

  return $form;
}

function tcvlan_referral_action_certify($user, $referral) {
  $form = drupal_get_form('tcvlan_referral_action_certify_form', $referral);

  return $form;
}

function tcvlan_referral_action_wait_for_docs($user, $referral) {
  $form = drupal_get_form('tcvlan_referral_action_close_form', $referral);

  if (isset($form['docs'])) {
    $form['docs']['#access'] = FALSE;
  }

  $form['outcome']['#access'] = FALSE;
  $form['submit']['#access'] = FALSE;

  return $form;
}

function tcvlan_referral_action_close($user, $referral, $closed = FALSE) {
  $form = drupal_get_form('tcvlan_referral_action_close_form', $referral);

  if ($closed) {
    $form['docs']['#access']    = FALSE;
    $form['outcome']['#access'] = FALSE;
    $form['submit']['#access']  = FALSE;

    $date = date('F j, Y - g:i a', $referral->field_ref_closed_at[LANGUAGE_NONE][0]['value']);

    $outcome = '';
    if (!empty($referral->field_ref_outcome)) {
      $value = $referral->field_ref_outcome[LANGUAGE_NONE][0]['value'];
      $outcome = tcvlan_refnet_list_label('field_ref_outcome', $value);
      $outcome = " with the outcome, <em>$outcome</em>";
    }

    $output =<<<OUT
      <p>This Referrral was closed on {$date}{$outcome}.</p>
OUT;

    $form['note'] = array(
      '#markup' => $output,
    );
  }

  return $form;
}


// Forms and submit handlers ***************************************************

function tcvlan_referral_action_invite_form($form, $form_state, $referral) {
  $ntt = entity_metadata_wrapper('node', $referral);

  // Exclude origin Org and ones already invited.
  $invited_exclude = array($ntt->field_ref_origin_org->nid->value());

  // List of invited Org.
  $invited_orgs = array();
  foreach ($ntt->field_ref_invites->value() as $row) {
    $fc_ntt = entity_metadata_wrapper('field_collection_item', $row);
    $org = $fc_ntt->field_inv_org->value();

    $accept = '';
    if ($accepted_at = $fc_ntt->field_inv_accepted_at->value()) {
      $accept = ' (<strong class="text-success">Accepted</strong> '
              . format_interval(REQUEST_TIME - $accepted_at, 1)
              . ' ago)';
    }

    $invited_orgs[] = array(
      l($org->title, "node/{$org->nid}") . $accept,
      format_interval(REQUEST_TIME - $fc_ntt->field_inv_created_at->value(), 1) . ' ago',
      // $fc_ntt->field_inv_created_by->value()->name,
    );

    $invited_exclude[] = $fc_ntt->field_inv_org->value()->nid;
  }

  if ($invited_orgs) {
    $form['invited'] = array(
      '#type' => 'item',
      '#title' => 'Invited Organization(s)',
      '#markup' => theme('table', array('header' => [], 'rows' => $invited_orgs)),
    );
  }

  // Select Orgs that can be invited; i.e. accepts referrals and has members.
  // Also exclude origin Org and ones already invited.
  $query = db_select('node', 'n');
  $query->join('field_data_field_partner_accepting_ref', 'r', 'n.nid = r.entity_id');
  $query->join('field_revision_field_user_organization', 'u', 'n.nid = u.field_user_organization_target_id');
  $query->distinct()->fields('n', array('nid', 'title'))
    ->condition('n.type', 'partner')
    ->condition('n.status', 1)
    ->condition('n.nid', $invited_exclude, 'NOT IN')
    ->orderBy('n.title');

  $options = array();
  foreach ($query->execute() as $row) {
    $options[$row->nid] = $row->title;
  }

  $form['org'] = array(
    '#type' => 'select',
    '#title' => 'Select Organization to invite',
    '#options' => $options,
    '#required' => TRUE,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Invite',
    '#attributes' => array('class' => array('btn', 'btn-primary'))
  );

  $list = tcvlan_get_recommended_orgs($options, $referral);
  $list = $list ? $list : '<div><em>No recommended Orgs found. If not already done, set categories on the Referral to find matches.</em></div>';

  $form['recommend'] = array(
    '#type' => 'item',
    '#title' => 'Invite Recommendations',
    '#markup' => $list,
    '#prefix' => '<hr>',
  );

  return $form;
}

function tcvlan_get_recommended_orgs($orgs, $referral) {
  $referral_terms = array();
  $referral_fields = array(
    'field_ref_legal_services',
    'field_ref_non_legal_services',
    'field_ref_direct_services',
    'field_ref_service_area',
    'field_ref_cities',
    'field_ref_population'
  );

  foreach ($referral_fields as $field) {
    if (!empty($referral->{$field}[LANGUAGE_NONE])) {
      foreach ($referral->{$field}[LANGUAGE_NONE] as $term) {
        $referral_terms[] = $term['tid'];
      }
    }
  }

  $match_score = array();
  $org_fields = array(
    'field_partner_legal_services',
    'field_partner_non_legal_services',
    'field_partner_direct_services',
    'field_partner_county',
    'field_partner_city'
  );

  // Get match scores.
  foreach ($orgs as $nid => $org_name) {
    $org = node_load($nid);

    $org_terms = array();
    foreach ($org_fields as $field) {
      if (!empty($org->{$field}[LANGUAGE_NONE])) {
        foreach ($org->{$field}[LANGUAGE_NONE] as $term) {
          $org_terms[] = $term['tid'];
        }
      }
    }

    $match_score[$nid] = count(array_intersect($referral_terms, $org_terms));
  }

  // Sort with high scores at top keeping keys (nid).
  arsort($match_score);
  // Remove entries with zero score.
  $match_score = array_filter($match_score);
  // Get top 5.
  $match_score = array_slice($match_score, 0, 5, TRUE);

  $ordered_list = array();
  foreach ($match_score as $nid => $score) {
    $ordered_list[] = '<li>' . l($orgs[$nid], "node/$nid", array('attributes' => array('target' => '_blank'))) . '</li>';
  }

  return $ordered_list ? '<ol>' . join("\n", $ordered_list) . '</ol>' : '';
}

function tcvlan_referral_action_invite_form_submit($form, $form_state) {
  global $user;

  $referral = menu_get_object();

  $fc_item = entity_create('field_collection_item', array('field_name' => 'field_ref_invites'));

  $fc_item->setHostEntity('node', $referral);

  $fc_wrapper = entity_metadata_wrapper('field_collection_item', $fc_item);

  $fc_wrapper->field_inv_created_at->set(REQUEST_TIME);
  $fc_wrapper->field_inv_created_by->set($user->uid);
  $fc_wrapper->field_inv_org->set($form_state['values']['org']);

  if ($referral->field_ref_status[LANGUAGE_NONE][0]['value'] == TCVLAN_REF_STATUS_POSTED) {
    $referral->field_ref_status[LANGUAGE_NONE][0]['value'] = TCVLAN_REF_STATUS_INVITED;
  }

  node_save($referral);

  $org = node_load($form_state['values']['org']);
  drupal_set_message(t('Organization %org has been invited successfully.', array('%org' => $org->title)));

  // Send notification using PET module.
  if (module_exists('pet') and $contact = tcvlan_refnet_get_org_contact($org)) {
    $pet = pet_load('referral_organization_invited');
    $params = array(
      'pet_from' => variable_get('site_mail', ''),
      'pet_to' => $contact->mail,
      'pet_nid' => $referral->nid,
    );

    pet_send_one_mail($pet, $params);
  }
}

function tcvlan_referral_action_send_docs_form($form, $form_state, $referral) {
  $target_org = node_load($referral->field_ref_target_org[LANGUAGE_NONE][0]['target_id']);

  $org_info = '<h3>' . l($target_org->title, "node/{$target_org->nid}") . '</h3>';

  $ntt = entity_metadata_wrapper('node', $referral);

  foreach ($ntt->field_ref_invites->value() as $fc_item) {
    $fc_ntt = entity_metadata_wrapper('field_collection_item', $fc_item);

    if ($fc_ntt->field_inv_org->value()->nid == $target_org->nid) {
      $certifier_uid = $fc_ntt->field_inv_certified_by->value()->uid;
      break;
    }
  }

  $mems = array();
  if (!empty($certifier_uid)) {
    $mem = user_load($certifier_uid);

    $phone = !empty($mem->field_user_phone)
           ? $mem->field_user_phone[LANGUAGE_NONE][0]['value'] : '';

    $mems[] = array(
      l($mem->name, "user/{$certifier_uid}"),
      l($mem->mail, "mailto:$mem->mail"),
      l($phone, "tel:$phone"),
    );
  }
  else {
    $mems[] = array(
      'Certifying user not found.'
    );
  }

  if ($mems) {
    $form['members'] = array(
      '#type' => 'item',
      '#markup' => $org_info . theme('table', array('header' => [], 'rows' => $mems)),
    );
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Documents Sent',
    '#description' => "Click once you've sent documents to the other Organization.",
    '#attributes' => array('class' => array('pull-right', 'btn', 'btn-primary')),
    '#suffix' => '<div class="clearfix"></div>',
  );

  return $form;
}

function tcvlan_referral_action_send_docs_form_submit($form, $form_state) {
  $referral = menu_get_object();

  $referral->field_ref_status[LANGUAGE_NONE][0]['value'] = TCVLAN_REF_STATUS_REFERRED;

  $referral->field_ref_docs_sent_at[LANGUAGE_NONE][0]['value'] = REQUEST_TIME;

  node_save($referral);

  drupal_set_message('The Referral has marked as documents sent.');
}

function tcvlan_referral_action_accept_form($form, $form_state, $referral) {
  $form['note'] = array(
    '#markup' => '<p>Your Organization has been invited to this Referral. Accept the Referral to see the party names for conflict review.</p>'
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Accept',
    '#attributes' => array('class' => array('btn', 'btn-primary')),
  );

  return $form;
}

function tcvlan_referral_action_accept_form_submit($form, $form_state) {
  $user = user_load($GLOBALS['user']->uid);
  $referral = menu_get_object();

  $ntt = entity_metadata_wrapper('node', $referral);

  $user_org_nid = $user->field_user_organization[LANGUAGE_NONE][0]['target_id'];

  foreach ($ntt->field_ref_invites->value() as $invite) {
    $fc_item = entity_metadata_wrapper('field_collection_item', $invite);

    if ($fc_item->field_inv_org->value()->nid == $user_org_nid) {
      $fc_item->field_inv_accepted_at = REQUEST_TIME;
      $fc_item->field_inv_accepted_by = $user->uid;
      $fc_item->save();

      $referral->field_ref_status[LANGUAGE_NONE][0]['value'] = TCVLAN_REF_STATUS_ACCEPTED;
      $referral->field_ref_target_org[LANGUAGE_NONE][0]['target_id'] = $user_org_nid;
      node_save($referral);

      // Send notification using PET module.
      $origin_org_id = $referral->field_ref_origin_org[LANGUAGE_NONE][0]['target_id'];
      $origin_org = node_load($origin_org_id);
      if (module_exists('pet') and $contact = tcvlan_refnet_get_org_contact($origin_org)) {
        $pet = pet_load('referral_organization_accepted');
        $params = array(
          'pet_from' => variable_get('site_mail', ''),
          'pet_to' => $contact->mail,
          'pet_nid' => $referral->nid,
        );

        pet_send_one_mail($pet, $params);
      }

      break;
    }
  }
}

function tcvlan_referral_action_certify_form($form, $form_state, $referral) {
  $user = user_load($GLOBALS['user']->uid);

  $client = field_view_field('node', $referral, 'field_ref_client');
  $client[0]['#markup'] = nl2br($client[0]['#markup']);

  $adversary = field_view_field('node', $referral, 'field_ref_adverse_party');
  $adversary[0]['#markup'] = nl2br($adversary[0]['#markup']);
  $adversary['#weight'] = 1;

  $content = array(
    'client' => $client,
    'adversary' => $adversary,
  );

  $form['parties'] = array(
    '#type' => 'item',
    '#markup' => render($content),
  );

  $form['instruction'] = array(
    '#markup' => "<p>If you confirm no party conflicts, accept the referral.</p>",
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Accept Referral',
    '#attributes' => array('class' => array('btn', 'btn-success')),
  );

  $form['decline'] = array(
    '#type' => 'submit',
    '#value' => 'Decline Referral',
    '#attributes' => array(
      'class' => array('btn', 'btn-danger'),
      'onclick' => "javascript:return confirm('Are you sure to decline the referral?')",
    ),
  );

  $accept_time = (int)tcvlan_refnet_get_accept_time($user, $referral);
  $seconds_ago = REQUEST_TIME - $accept_time;
  if ($seconds_ago > 3600*72) {
    $text_color = 'text-danger';
    $msg = "Past due: Please confirm immediately.";
  }
  else {
    $text_color = '';
    $msg = 'Please confirm within next ' . format_plural(round((3600*72 - $seconds_ago)/3600), '1 hour', '@count hours') .  '.';
  }

  $form['confirm_urge'] = array(
    '#markup' => "<div class=\"{$text_color}\" style=\"margin-top: 0.5em\">{$msg}</div>",
  );

  return $form;
}

function tcvlan_referral_action_certify_form_submit($form, $form_state) {
  $user = user_load($GLOBALS['user']->uid);
  $referral = menu_get_object();
  $ntt = entity_metadata_wrapper('node', $referral);
  $user_org_nid = $user->field_user_organization[LANGUAGE_NONE][0]['target_id'];

  if ($form_state['clicked_button']['#value'] == 'Accept Referral') {
    foreach ($ntt->field_ref_invites->value() as $invite) {
      $fc_item = entity_metadata_wrapper('field_collection_item', $invite);

      if ($fc_item->field_inv_org->value()->nid == $user_org_nid) {
        $fc_item->field_inv_certified_at = REQUEST_TIME;
        $fc_item->field_inv_certified_by = $user->uid;
        $fc_item->save();

        $referral->field_ref_status[LANGUAGE_NONE][0]['value'] = TCVLAN_REF_STATUS_CERTIFIED;
        node_save($referral);

        // Send notification using PET module.
        $origin_org_id = $referral->field_ref_origin_org[LANGUAGE_NONE][0]['target_id'];
        $origin_org = node_load($origin_org_id);
        if (module_exists('pet') and $contact = tcvlan_refnet_get_org_contact($origin_org)) {
          $pet = pet_load('referral_organization_certified');
          $params = array(
            'pet_from' => variable_get('site_mail', ''),
            'pet_to' => $contact->mail,
            'pet_nid' => $referral->nid,
          );

          pet_send_one_mail($pet, $params);
        }

        break;
      }
    }
  }
  elseif ($form_state['clicked_button']['#value'] == 'Decline Referral') {
    foreach ($ntt->field_ref_invites->value() as $invite) {
      $fc_item = entity_metadata_wrapper('field_collection_item', $invite);

      if ($fc_item->field_inv_org->value()->nid == $user_org_nid) {
        foreach ($referral->field_ref_invites[LANGUAGE_NONE] as $key => $invite_item) {
          if ($invite_item['value'] == $invite->item_id) {
            unset($referral->field_ref_invites[LANGUAGE_NONE][$key]);
            unset($referral->field_ref_target_org[LANGUAGE_NONE]);
            $referral->field_ref_status[LANGUAGE_NONE][0]['value'] = TCVLAN_REF_STATUS_INVITED;

            node_save($referral);

            drupal_goto("node/{$user_org_nid}/dashboard");
          }
        }
      }
    }
  }
}

function tcvlan_referral_action_close_form($form, $form_state, $referral) {
  $origin_org = node_load($referral->field_ref_origin_org[LANGUAGE_NONE][0]['target_id']);

  $org_info = '<h3>' . l($origin_org->title, "node/{$origin_org->nid}") . '</h3>';

  $uids = db_select('field_data_field_user_organization', 'o')
    ->fields('o', array('entity_id'))
    ->condition('field_user_organization_target_id', $origin_org->nid)
    ->execute()
    ->fetchCol();

  $mems = array();
  foreach ($uids as $uid) {
    if ($uid == $referral->uid) {
      $mem = user_load($uid);

      $primary = '';
      if (!empty($origin_org->field_partner_contact) and
          $origin_org->field_partner_contact[LANGUAGE_NONE][0]['target_id'] == $uid)
      {
        $primary = ' *';
      }

      $phone = !empty($mem->field_user_phone)
             ? $mem->field_user_phone[LANGUAGE_NONE][0]['value'] : '';

      $mems[] = array(
        l($mem->name, "user/{$uid}") . $primary,
        l($mem->mail, "mailto:$mem->mail"),
        l($phone, "tel:$phone"),
      );

      break;
    }
  }

  if ($mems) {
    $form['members'] = array(
      '#type' => 'item',
      '#markup' => $org_info . theme('table', array('header' => [], 'rows' => $mems)),
    );
  }

  if (!empty($referral->field_ref_docs_sent_at)) {
    $form['docs'] = array(
      '#markup' => "<p>The origin organization sent the documents on " . date('F j, Y - g:i a', $referral->field_ref_docs_sent_at[LANGUAGE_NONE][0]['value']) . '.</p>',
    );
  }

  $form['outcome'] = array(
    '#type' => 'select',
    '#title' => 'Outcome',
    '#options' => field_info_field('field_ref_outcome')['settings']['allowed_values'],
    '#required' => TRUE,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Close',
    '#description' => "Click once the case is resolved.",
    '#attributes' => array('class' => array('pull-right', 'btn', 'btn-primary')),
    '#suffix' => '<div class="clearfix"></div>',
  );

  return $form;
}

function tcvlan_referral_action_close_form_submit($form, $form_state) {
  $user = user_load($GLOBALS['user']->uid);
  $referral = menu_get_object();

  $referral->field_ref_status[LANGUAGE_NONE][0]['value'] = TCVLAN_REF_STATUS_CLOSED;
  $referral->field_ref_outcome[LANGUAGE_NONE][0]['value'] = $form_state['values']['outcome'];
  $referral->field_ref_closed_at[LANGUAGE_NONE][0]['value'] = REQUEST_TIME;

  node_save($referral);
}


// Helper functions ************************************************************

function tcvlan_refnet_user_owns_referral($user, $referral) {
  if (!empty($user->field_user_organization[LANGUAGE_NONE][0]['target_id'])) {
    if (!empty($referral->field_ref_origin_org[LANGUAGE_NONE][0]['target_id'])) {
      return $user->field_user_organization[LANGUAGE_NONE][0]['target_id'] == $referral->field_ref_origin_org[LANGUAGE_NONE][0]['target_id'];
    }
  }

  return FALSE;
}

function tcvlan_refnet_user_targeted_by_referral($user, $referral) {
  if (!empty($user->field_user_organization[LANGUAGE_NONE][0]['target_id'])) {
    if (!empty($referral->field_ref_target_org[LANGUAGE_NONE][0]['target_id'])) {
      return $user->field_user_organization[LANGUAGE_NONE][0]['target_id'] == $referral->field_ref_target_org[LANGUAGE_NONE][0]['target_id'];
    }

    $ntt = entity_metadata_wrapper('node', $referral);
    $user_org_nid = $user->field_user_organization[LANGUAGE_NONE][0]['target_id'];

    foreach ($ntt->field_ref_invites->value() as $fc_item) {
      $fc_ntt = entity_metadata_wrapper('field_collection_item', $fc_item);

      if ($fc_ntt->field_inv_org->value()->nid == $user_org_nid) {
        return TRUE;
      }
    }
  }

  return FALSE;
}

function tcvlan_refnet_user_can_see_parties($user, $referral) {
  if (user_access('administer nodes')) {
    return TRUE;
  }
  elseif (!empty($user->field_user_organization[LANGUAGE_NONE][0]['target_id'])) {
    if (!empty($referral->field_ref_target_org[LANGUAGE_NONE][0]['target_id'])) {
      $targeted = $user->field_user_organization[LANGUAGE_NONE][0]['target_id'] == $referral->field_ref_target_org[LANGUAGE_NONE][0]['target_id'];

      $status_ok = $referral->field_ref_status[LANGUAGE_NONE][0]['value'] >= TCVLAN_REF_STATUS_ACCEPTED;

      return $targeted && $status_ok;
    }
  }

  return FALSE;
}

function tcvlan_refnet_user_can_see_referral() {
  $user = user_load($GLOBALS['user']->uid);
  $referral = menu_get_object();

  if (user_access('administer nodes')) {
    return TRUE;
  } elseif (!user_is_anonymous() and $referral->type == 'referral') {
    return tcvlan_refnet_user_owns_referral($user, $referral) or
           tcvlan_refnet_user_targeted_by_referral($user, $referral);
  }

  return FALSE;
}

function tcvlan_refnet_get_accept_time($user, $referral) {
  $ntt = entity_metadata_wrapper('node', $referral);
  $user_org_nid = $user->field_user_organization[LANGUAGE_NONE][0]['target_id'];

  foreach ($ntt->field_ref_invites->value() as $row) {
    $fc_ntt = entity_metadata_wrapper('field_collection_item', $row);

    if ($user_org_nid == $fc_ntt->field_inv_org->value()->nid) {
      return $fc_ntt->field_inv_accepted_at->value();
    }
  }
}
