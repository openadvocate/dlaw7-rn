<?php

/**
 * @file
 * Code for blocks.
 */

/**
 * Implements hook_block_info().
 */
function tcvlan_refnet_block_info() {
  $blocks = array();

  $blocks['tcvlan_refnet_add_content'] = array(
    'info' => t('RefNet: Add Content'),
  );

  $blocks['tcvlan_refnet_org_members'] = array(
    'info' => t('RefNet: Org members'),
    'cache' => DRUPAL_CACHE_PER_USER,
  );

  $blocks['tcvlan_refnet_join_requests'] = array(
    'info' => t('RefNet: Join Requests'),
  );

  $blocks['tcvlan_refnet_new_users'] = array(
    'info' => t('RefNet: Recently Added Users'),
  );

  $blocks['tcvlan_refnet_active_users'] = array(
    'info' => t('RefNet: Recently Logged-in Users'),
  );

  $blocks['tcvlan_refnet_active_orgs'] = array(
    'info' => t('RefNet: Recently Edited Organizations'),
  );

  $blocks['tcvlan_refnet_age_user_login'] = array(
    'info' => t('RefNet: Age of user last login'),
  );

  $blocks['tcvlan_refnet_org_updated'] = array(
    'info' => t('RefNet: Org updated'),
  );

  $blocks['tcvlan_refnet_report_2col_a'] = array(
    'info' => t('RefNet: Report 2col A'),
  );

  $blocks['tcvlan_org_dash_out_ref'] = array(
    'info' => t('Org Dashboard: Outgoing Referrals'),
  );

  $blocks['tcvlan_org_dash_out_prog'] = array(
    'info' => t('Org Dashboard: Outgoing In-Progress'),
  );

  $blocks['tcvlan_org_dash_out_referred'] = array(
    'info' => t('Org Dashboard: Outgoing Referred'),
  );

  $blocks['tcvlan_org_dash_out_closed'] = array(
    'info' => t('Org Dashboard: Outgoing Closed'),
  );

  $blocks['tcvlan_org_dash_in_ref'] = array(
    'info' => t('Org Dashboard: Incoming Referrals'),
  );

  $blocks['tcvlan_org_dash_in_prog'] = array(
    'info' => t('Org Dashboard: Incoming In-Progress'),
  );

  $blocks['tcvlan_org_dash_in_referred'] = array(
    'info' => t('Org Dashboard: Incoming Referred'),
  );

  $blocks['tcvlan_org_dash_in_closed'] = array(
    'info' => t('Org Dashboard: Incoming Closed'),
  );

  $blocks['tcvlan_referral_parties'] = array(
    'info' => t('Referral: Parties'),
    'cache' => DRUPAL_CACHE_PER_USER,
  );

  $blocks['tcvlan_referral_actions'] = array(
    'info' => t('Referral: Actions'),
    'cache' => DRUPAL_CACHE_PER_USER,
  );

  return $blocks;
}

/**
 * Implements hook_block_view().
 */
function tcvlan_refnet_block_view($delta = '') {
  $function = $delta . '_block';
  if (function_exists($function)) {
    return $function();
  }
}

function tcvlan_refnet_add_content_block() {
  $content =<<<OUT
    <a class="btn btn-lg btn-add-org" href="/node/add/partner?destination=admin/dashboard/refnet">
      <i class="fa fa-sitemap"></i> Add Organization
    </a>
OUT;

  return array('subject' => '', 'content' => $content);
}

function tcvlan_refnet_org_members_block() {
  global $user;

  $can_see_team = user_access('create partner content');

  if (!$can_see_team) {
    $loaded_user = user_load($user->uid);

    if (!empty($loaded_user->field_user_organization[LANGUAGE_NONE][0]['target_id'])) {
      $can_see_team = user_access('edit any partner content') && arg(1) == $loaded_user->field_user_organization[LANGUAGE_NONE][0]['target_id'];
    }
  }

  if ($org = menu_get_object() and $can_see_team) {
    $query = db_select('field_data_field_user_organization', 'o');
    $query->join('users', 'u', 'o.entity_id = u.uid');
    $query->fields('u', array('uid', 'name'));
    $query->condition('o.field_user_organization_target_id', $org->nid);
    $query->orderBy('u.name');
    $result = $query->execute();

    $list = array();
    foreach ($result as $row) {
      $name = $row->name;

      $prim_cont = '';
      if (!empty($org->field_partner_contact[LANGUAGE_NONE][0]['target_id'])) {
        if ($org->field_partner_contact[LANGUAGE_NONE][0]['target_id'] == $row->uid) {
          $prim_cont = ' (Primary contact)';
        }
      }

      $list[] = l($name, "user/$row->uid") . $prim_cont;
    }

    $content = theme('item_list', array('items' => $list));

    return array('subject' => 'Team', 'content' => $content);
  }
}

function tcvlan_refnet_join_requests_block() {
  // New User Requests
  $webform_nid = variable_get('dlaw_partner_request_form_nid', 0);

  $query = db_select('webform_submissions', 's');
  $query->fields('s');

  $query->join('users', 'u', 's.uid = u.uid');
  $query->fields('u', array('name'));

  $query->leftJoin('webform_submitted_data', 'd1', 's.sid = d1.sid AND d1.cid = ' . TCVLAN_USER_NAME);
  $query->addField('d1', 'data', 'temp_name');

  $query->leftJoin('webform_submitted_data', 'd2', 's.sid = d2.sid AND d2.cid = ' . TCVLAN_USER_ORG);
  $query->addField('d2', 'data', 'org_name');

  $query->condition('s.nid', $webform_nid);
  $query->condition('s.uid', 0);
  $query->orderBy('sid', 'DESC');
  $query->range(0, 10);

  $result = $query->execute();

  $rows = array();
  foreach ($result as $row) {
    $rows[] = array(
      l($row->temp_name, "node/$webform_nid/submission/$row->sid", array(
        'query' => drupal_get_destination()
      )),
      $row->org_name,
      format_interval(REQUEST_TIME - $row->submitted, 1) . ' ago',
    );
  }

  $content = array();
  $content[] = theme('table', array('header' => [], 'rows' => $rows, 'empty' => 'No new submissions to process.'));

  // New Organization Requests
  $webform_nid = variable_get('dlaw_partner_org_request_form_nid', 0);

  $query = db_select('webform_submissions', 's');
  $query->fields('s');

  $query->leftJoin('webform_submitted_data', 'd1', 's.sid = d1.sid AND d1.cid = ' . TCVLAN_ORG_NAME);
  $query->addField('d1', 'data', 'your_name');

  $query->leftJoin('webform_submitted_data', 'd2', 's.sid = d2.sid AND d2.cid = ' . TCVLAN_ORG_ORG_NAME);
  $query->addField('d2', 'data', 'org_name');

  $query->leftJoin('webform_submitted_data', 'd3', 's.sid = d3.sid AND d3.cid = ' . TCVLAN_ORG_ORG_ID);
  $query->addField('d3', 'data', 'org_id');

  $query->condition('s.nid', $webform_nid);
  $query->condition('d3.data', '');
  $query->orderBy('sid', 'DESC');
  $query->range(0, 10);

  $result = $query->execute();

  $rows = array();
  foreach ($result as $row) {
    $rows[] = array(
      $row->your_name,
      l($row->org_name, "node/$webform_nid/submission/$row->sid", array(
        'query' => drupal_get_destination()
      )),
      format_interval(REQUEST_TIME - $row->submitted, 1) . ' ago',
    );
  }

  $content[] = '<br>';
  $content[] = '<h2><i class="fa fa-users"></i> New Organization Requests</h2>';
  $content[] = theme('table', array('header' => [], 'rows' => $rows, 'empty' => 'No new submissions to process.'));

  $title = '<i class="fa fa-user"></i> New User Requests';

  return array('subject' => $title, 'content' => join("\n", $content));
}

function tcvlan_refnet_new_users_block() {
  $query = db_select('users', 'u');
  $query->fields('u', array('uid', 'name', 'created'));

  $query->leftJoin('field_data_field_user_organization', 'fo', 'u.uid = fo.entity_id');
  $query->leftJoin('node', 'org', 'fo.field_user_organization_target_id = org.nid');
  $query->addField('org', 'nid', 'org_nid');
  $query->addField('org', 'title', 'org_name');

  $query->condition('u.uid', 1, '>');

  $query->orderBy('u.uid', 'DESC');
  $query->range(0, 5);

  $result = $query->execute();

  $rows = array();
  foreach ($result as $row) {
    $rows[] = array(
      l($row->name, "user/{$row->uid}"),
      l($row->org_name, "node/{$row->org_nid}"),
      format_interval(REQUEST_TIME - $row->created, 1) . ' ago',
    );
  }

  $content = theme('table', array('header' => [], 'rows' => $rows, 'empty' => 'No entries.'));

  $title = '<i class="fa fa-users"></i> Recently Added Users';

  return array('subject' => $title, 'content' => $content);
}

function tcvlan_refnet_active_users_block() {
  $query = db_select('users', 'u');
  $query->fields('u', array('uid', 'name', 'access'));

  $query->leftJoin('field_data_field_user_organization', 'fo', 'u.uid = fo.entity_id');
  $query->leftJoin('node', 'org', 'fo.field_user_organization_target_id = org.nid');
  $query->addField('org', 'nid', 'org_nid');
  $query->addField('org', 'title', 'org_name');

  $query->condition('u.uid', 1, '>');

  $query->orderBy('u.access', 'DESC');
  $query->range(0, 5);

  $result = $query->execute();

  $rows = array();
  foreach ($result as $row) {
    $rows[] = array(
      l($row->name, "user/{$row->uid}"),
      l($row->org_name, "node/{$row->org_nid}"),
      format_interval(REQUEST_TIME - $row->access, 1) . ' ago',
    );
  }

  $content = theme('table', array('header' => [], 'rows' => $rows, 'empty' => 'No entries.'));

  $title = '<i class="fa fa-star"></i> Recently Logged-in Users';

  return array('subject' => $title, 'content' => $content);
}

function tcvlan_refnet_active_orgs_block() {
  $query = db_select('node', 'n');
  $query->fields('n', array('nid', 'title', 'changed'));

  $query->condition('n.type', 'partner');

  $query->orderBy('n.changed', 'DESC');
  $query->range(0, 5);

  $result = $query->execute();

  $rows = array();
  foreach ($result as $row) {
    $rows[] = array(
      l($row->title, "node/{$row->nid}"),
      format_interval(REQUEST_TIME - $row->changed, 1) . ' ago',
    );
  }

  $content = theme('table', array('header' => [], 'rows' => $rows, 'empty' => 'No entries.'));

  $title = '<i class="fa fa-list"></i> Recently Edited Organizations';

  return array('subject' => $title, 'content' => $content);
}

function tcvlan_refnet_age_user_login_block() {
  $title = '<i class="fa fa-bar-chart-o"></i> Age of user last login';
  $content = '<img src="https://via.placeholder.com/600x300/eee?text=Graph+to+come">';

  return array('subject' => $title, 'content' => $content);
}

function tcvlan_refnet_org_updated_block() {
  $title = '<i class="fa fa-bar-chart-o"></i> Org updated';
  $content = '<img src="https://via.placeholder.com/600x300/eee?text=Graph+to+come">';

  return array('subject' => $title, 'content' => $content);
}

function tcvlan_refnet_report_2col_a_block() {
  $content =<<<OUT
    <div class="row">
      <div class="col-sm-6">
        <div class="dashboard__card">
          <h2 class="panel-title">
            <i class="fa fa-bar-chart-o"></i> Accepting Referrals
          </h2>
          <img src="https://via.placeholder.com/300x300/eee?text=Graph+to+come">
        </div>
      </div>
      <div class="col-sm-6">
        <div class="dashboard__card">
          <h2 class="panel-title">
            <i class="fa fa-bar-chart-o"></i> Network Partners
          </h2>
          <img src="https://via.placeholder.com/300x300/eee?text=Graph+to+come">
        </div>
      </div>
    </div>
OUT;

  return array('subject' => '', 'content' => $content);
}

function tcvlan_org_dash_out_ref_block() {
  $result = tcvlan_org_dash_query_for_origin(array(
    TCVLAN_REF_STATUS_POSTED,
    TCVLAN_REF_STATUS_INVITED,
    TCVLAN_REF_STATUS_ACCEPTED,
  ), 100);

  $rows = array();
  foreach ($result as $row) {
    $inv_count = '';
    if ($row->status == TCVLAN_REF_STATUS_INVITED) {
      $inv_count = $row->invites . ' ';
    }

    $rows[] = array(
      l("#$row->nid $row->title", "node/$row->nid")
      . "<div class=\"text-muted\"><em>{$row->target_org}</em></div>",
      tcvlan_format_interval($row->changed),
      $inv_count . tcvlan_color_code_status($row->status),
      tcvlan_action_for_status_origin($row->nid, $row->status),
    );
  }

  $header = array('Referral', 'Updated', 'Status', 'Action');

  $content = theme('table', array('header' => $header, 'rows' => $rows, 'empty' => 'No entries.'));

  return array('subject' => 'Outgoing Referrals', 'content' => $content);
}

function tcvlan_org_dash_out_prog_block() {
  $result = tcvlan_org_dash_query_for_origin(TCVLAN_REF_STATUS_CERTIFIED, 100);

  $rows = array();
  foreach ($result as $row) {
    $rows[] = array(
      l("#$row->nid $row->title", "node/$row->nid")
      . "<div class=\"text-muted\"><em>{$row->target_org}</em></div>",
      tcvlan_format_interval($row->changed),
      tcvlan_color_code_status($row->status),
      tcvlan_action_for_status_origin($row->nid, $row->status),
    );
  }

  $header = array('Referral', 'Updated', 'Status', 'Action');

  $content = theme('table', array('header' => $header, 'rows' => $rows, 'empty' => 'No entries.'));

  return array('subject' => 'Outgoing In-Progress', 'content' => $content);
}

function tcvlan_org_dash_out_referred_block() {
  $result = tcvlan_org_dash_query_for_origin(TCVLAN_REF_STATUS_REFERRED, 100);

  $rows = array();
  foreach ($result as $row) {
    if (!empty($row->docs_sent_at)) {
      $time = tcvlan_format_interval($row->docs_sent_at) . ' (Docs sent)';
    }
    else {
      $time = tcvlan_format_interval($row->changed) . ' (Updated)';
    }

    $rows[] = array(
      l("#$row->nid $row->title", "node/$row->nid")
      . "<div class=\"text-muted\"><em>{$row->target_org}</em></div>",
      $time,
    );
  }

  $content = theme('table', array('header' => [], 'rows' => $rows, 'empty' => 'No entries.'));

  return array('subject' => 'Outgoing Referred', 'content' => $content);
}

function tcvlan_org_dash_out_closed_block() {
  $result = tcvlan_org_dash_query_for_origin(TCVLAN_REF_STATUS_CLOSED, 5);

  $rows = array();
  foreach ($result as $row) {
    if (!empty($row->closed_at)) {
      $time = tcvlan_format_interval($row->closed_at);
    }
    else {
      $time = '(Time unknown)';
    }

    $rows[] = array(
      l("#$row->nid $row->title", "node/$row->nid")
      . "<div class=\"text-muted\"><em>{$row->target_org}</em></div>",
      $time,
      tcvlan_refnet_list_label('field_ref_outcome', $row->outcome),
    );
  }

  $content = theme('table', array('header' => [], 'rows' => $rows, 'empty' => 'No entries.'));

  return array('subject' => 'Outgoing Closed', 'content' => $content);
}

function tcvlan_org_dash_in_ref_block() {
  $org = tcvlan_get_org_object();;

  $result = tcvlan_org_dash_query_for_target(array(
    TCVLAN_REF_STATUS_POSTED,
    TCVLAN_REF_STATUS_INVITED,
    TCVLAN_REF_STATUS_ACCEPTED,
  ), 100);

  $rows = array();
  foreach ($result as $row) {
    // If state is Accepted and the target org is not the current org, skip it.
    if ($row->status == TCVLAN_REF_STATUS_ACCEPTED and $row->target_org_id != $org->nid) {
      continue;
    }

    $rows[] = array(
      l("#$row->nid $row->title", "node/$row->nid")
      . "<div class=\"text-muted\"><em>From: {$row->origin_org}</em></div>",
      tcvlan_format_interval($row->changed),
      tcvlan_refnet_list_label('field_ref_status', $row->status),
      tcvlan_refnet_action_for_status_target($row->nid, $row->status),
    );
  }

  $header = array('Referral', 'Updated', 'Status', 'Action');

  $content = theme('table', array('header' => $header, 'rows' => $rows, 'empty' => 'No entries.'));

  return array('subject' => 'Incoming Referrals', 'content' => $content);
}

function tcvlan_org_dash_in_prog_block() {
  $result = tcvlan_org_dash_query_for_target(TCVLAN_REF_STATUS_CERTIFIED, 100);

  $rows = array();
  foreach ($result as $row) {
    $rows[] = array(
      l("#$row->nid $row->title", "node/$row->nid")
      . "<div class=\"text-muted\"><em>From: {$row->origin_org}</em></div>",
      tcvlan_format_interval($row->changed),
      tcvlan_refnet_list_label('field_ref_status', $row->status),
      tcvlan_refnet_action_for_status_target($row->nid, $row->status),
    );
  }

  $header = array('Referral', 'Updated', 'Status', 'Action');

  $content = theme('table', array('header' => $header, 'rows' => $rows, 'empty' => 'No entries.'));

  return array('subject' => 'Incoming In-Progress', 'content' => $content);
}

function tcvlan_org_dash_in_referred_block() {
  $result = tcvlan_org_dash_query_for_target(TCVLAN_REF_STATUS_REFERRED, 100);

  $rows = array();
  foreach ($result as $row) {
    $rows[] = array(
      l("#$row->nid $row->title", "node/$row->nid")
      . "<div class=\"text-muted\"><em>From: {$row->origin_org}</em></div>",
      tcvlan_format_interval($row->changed),
      'Active',
      l('Close', "node/$row->nid"),
    );
  }

  $header = array('Referral', 'Updated', 'Status', 'Action');

  $content = theme('table', array('header' => $header, 'rows' => $rows, 'empty' => 'No entries.'));

  return array('subject' => 'Incoming Referred', 'content' => $content);
}

function tcvlan_org_dash_in_closed_block() {
  $result = tcvlan_org_dash_query_for_target(TCVLAN_REF_STATUS_CLOSED, 5);

  $rows = array();
  foreach ($result as $row) {
    if (!empty($row->closed_at)) {
      $time = tcvlan_format_interval($row->closed_at);
    }
    else {
      $time = '(Time unknown)';
    }

    $rows[] = array(
      l("#$row->nid $row->title", "node/$row->nid")
      . "<div class=\"text-muted\"><em>From: {$row->origin_org}</em></div>",
      $time,
      tcvlan_refnet_list_label('field_ref_outcome', $row->outcome),
    );
  }

  $content = theme('table', array('header' => [], 'rows' => $rows, 'empty' => 'No entries.'));

  return array('subject' => 'Incoming Closed', 'content' => $content);
}


// Helper functions ************************************************************
function tcvlan_org_dash_query_for_origin($status, $limit) {
  $org = tcvlan_get_org_object();

  $query = db_select('node', 'n');
  $query->fields('n', array('nid', 'title', 'changed'));

  $query->join('field_data_field_ref_origin_org', 'oorg', 'n.nid = oorg.entity_id AND oorg.field_ref_origin_org_target_id = ' . (!empty($org->nid) ? $org->nid : 0));

  $query->leftJoin('field_data_field_ref_target_org', 'torg', 'n.nid = torg.entity_id');
  $query->leftJoin('node', 'n2', 'torg.field_ref_target_org_target_id = n2.nid');
  $query->addField('n2', 'title', 'target_org');

  $query->leftJoin('field_data_field_ref_invites', 'inv', 'n.nid = inv.entity_id');
  $query->addExpression('COUNT(inv.field_ref_invites_value)', 'invites');

  $query->leftJoin('field_data_field_ref_status', 'rs', 'n.nid = rs.entity_id');
  $query->addField('rs', 'field_ref_status_value', 'status');

  $query->leftJoin('field_data_field_ref_outcome', 'oc', 'n.nid = oc.entity_id');
  $query->addField('oc', 'field_ref_outcome_value', 'outcome');

  $query->leftJoin('field_data_field_ref_docs_sent_at', 'doc', 'n.nid = doc.entity_id');
  $query->addField('doc', 'field_ref_docs_sent_at_value', 'docs_sent_at');

  $query->leftJoin('field_data_field_ref_closed_at', 'cls', 'n.nid = cls.entity_id');
  $query->addField('cls', 'field_ref_closed_at_value', 'closed_at');

  $query->condition('n.type', 'referral');
  $query->condition('rs.field_ref_status_value', $status);
  $query->groupBy('n.nid');
  $query->orderBy('n.nid');
  $query->range(0, $limit);
  $result = $query->execute();

  return $result;
}

function tcvlan_org_dash_query_for_target($status, $limit) {
  $org = tcvlan_get_org_object();

  $query = db_select('node', 'n');
  $query->distinct()->fields('n', array('nid', 'title', 'changed'));

  // During Invited status, target org is not set, so check in invites field.
  if (is_array($status) and in_array(TCVLAN_REF_STATUS_INVITED, $status)) {
    $query->join('field_data_field_ref_invites', 'inv', 'n.nid = inv.entity_id');
    $query->join('field_data_field_inv_org', 'iorg', 'inv.field_ref_invites_value = iorg.entity_id AND iorg.field_inv_org_target_id = ' . (!empty($org->nid) ? $org->nid : 0));
  }
  // After Accepted state, target org is set.
  else {
    $query->join('field_data_field_ref_target_org', 'torg', 'n.nid = torg.entity_id AND torg.field_ref_target_org_target_id = ' . (!empty($org->nid) ? $org->nid : 0));
  }

  $query->leftJoin('field_data_field_ref_origin_org', 'oorg', 'n.nid = oorg.entity_id');
  $query->leftJoin('node', 'n2', 'oorg.field_ref_origin_org_target_id = n2.nid');
  $query->addField('n2', 'title', 'origin_org');

  $query->leftJoin('field_data_field_ref_target_org', 'torg', 'n.nid = torg.entity_id');
  $query->addField('torg', 'field_ref_target_org_target_id', 'target_org_id');

  $query->leftJoin('field_data_field_ref_status', 'rs', 'n.nid = rs.entity_id');
  $query->addField('rs', 'field_ref_status_value', 'status');

  $query->leftJoin('field_data_field_ref_outcome', 'oc', 'n.nid = oc.entity_id');
  $query->addField('oc', 'field_ref_outcome_value', 'outcome');

  $query->leftJoin('field_data_field_ref_docs_sent_at', 'doc', 'n.nid = doc.entity_id');
  $query->addField('doc', 'field_ref_docs_sent_at_value', 'docs_sent_at');

  $query->leftJoin('field_data_field_ref_closed_at', 'cls', 'n.nid = cls.entity_id');
  $query->addField('cls', 'field_ref_closed_at_value', 'closed_at');

  $query->condition('n.type', 'referral');
  $query->condition('rs.field_ref_status_value', $status);
  $query->orderBy('n.nid');
  $query->range(0, $limit);
  $result = $query->execute();

  return $result;
}

/**
 * Helper to load Org object. Normally menu_get_object() is used, but does not
 * seem to work in paneled page.
 */
function tcvlan_get_org_object() {
  static $org;

  if (!$org) {
    $org = node_load(arg(1));
  }

  return $org;
}

function tcvlan_format_interval($timestamp) {
  $interval = REQUEST_TIME - $timestamp;

  // Round up to 1 hour if less than an hour.
  if ($interval < 3600) {
    $interval = 3600;
  }

  if ($interval < 3600*24*7) {
    $bs_color_code = 'text-success';
  }
  elseif ($interval < 3600*24*28) {
    $bs_color_code = 'text-warning';
  }
  else {
    $bs_color_code = 'text-danger';
  }

  return "<span class=\"{$bs_color_code}\">" . format_interval($interval, 1) . '</span>';
}

function tcvlan_color_code_status($status) {
  switch ($status) {
    case TCVLAN_REF_STATUS_POSTED:
      $color = 'text-muted';
      break;
    case TCVLAN_REF_STATUS_ACCEPTED:
    case TCVLAN_REF_STATUS_CERTIFIED:
      $color = 'text-success';
      break;
    default:
      $color = '';
  }

  $label = tcvlan_refnet_list_label('field_ref_status', $status);

  return "<span class=\"{$color}\">{$label}</span>";
}

function tcvlan_action_for_status_origin($nid, $status) {
  switch ($status) {
    case TCVLAN_REF_STATUS_POSTED:
      $action = l('Invite', "node/$nid");
      break;
    case TCVLAN_REF_STATUS_INVITED:
      $action = l('Invite more', "node/$nid");
      break;
    case TCVLAN_REF_STATUS_ACCEPTED:
      $action = '<span class="text-muted">(Waiting)</span>';
      break;
    case TCVLAN_REF_STATUS_CERTIFIED:
      $action = l('Send documents', "node/$nid");
      break;
    default:
      $action = '';
  }

  return $action;
}

function tcvlan_refnet_action_for_status_target($nid, $status) {
  switch ($status) {
    case TCVLAN_REF_STATUS_INVITED:
      $action = l('Review', "node/$nid");
      break;
    case TCVLAN_REF_STATUS_ACCEPTED:
      $action = l('Check conflict', "node/$nid");
      break;
    case TCVLAN_REF_STATUS_CERTIFIED:
      $action = 'Waiting for documents';
      break;
    default:
      $action = '';
  }

  return $action;
}

/**
 * Helper to look up list field label.
 */
function tcvlan_refnet_list_label($field_name, $value) {
  static $list;

  if (!isset($list[$field_name])) {
    $field = field_info_field($field_name);

    $list[$field_name] = list_allowed_values($field);
  }

  return isset($list[$field_name][$value]) ? $list[$field_name][$value] : NULL;
}
