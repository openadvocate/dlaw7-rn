<?php

/**
 * @file
 * Code for blocks.
 */

/**
 * Implements hook_block_info().
 */
function dlaw_partner_block_info() {
  $blocks = array();

  $blocks['dlaw_partner_accepting_referrals'] = array(
    'info' => t('Accepting referrals'),
  );

  $blocks['dlaw_partner_have_elig_criteria'] = array(
    'info' => t('Have eligibility criteria?'),
  );

  $blocks['dlaw_partner_recently_joined'] = array(
    'info' => t('Recently joined partners'),
  );

  $blocks['dlaw_partner_languages'] = array(
    'info' => t('Languages supported'),
  );

  $blocks['dlaw_partner_language_method'] = array(
    'info' => t('Language service method'),
  );

  $blocks['dlaw_partner_who_serve'] = array(
    'info' => t('Who we serve'),
  );

  $blocks['dlaw_partner_branch_offices'] = array(
    'info' => t('Branch offices'),
  );

  $blocks['dlaw_partner_network_partner'] = array(
    'info' => t('Network partner'),
  );

  $blocks['dlaw_partner_reset_find_help'] = array(
    'info' => t('Reset find help search'),
  );

  return $blocks;
}

/**
 * Implements hook_block_view().
 */
function dlaw_partner_block_view($delta = '') {
  $function = $delta . '_block';
  if (function_exists($function)) {
    return $function();
  }
}

function dlaw_partner_accepting_referrals_block() {
  if ($node = menu_get_object() and isset($node->field_partner_accepting_ref)) {
    $accepting_date = '';

    if (!empty($node->field_partner_accepting_ref['und'][0]['value'])) {
      $referral = '';
    }
    else {

      $referral = '';
      if (!empty($node->field_partner_accepting_date['und'][0]['value'])) {
        $accepting_date = 'Will start accepting referrals on '
                        . date('F j, Y', strtotime($node->field_partner_accepting_date['und'][0]['value']));
        $referral = $accepting_date;
      }else{
        $referral = 'Not accepting referrals at this time';
      }

    }

    $content =<<<OUT
      <div class="panel-pane pane-entity-field pane-node-field-partner-accepting-ref">
        <div class="pane-content">
          <div class="field field-name-field-partner-accepting-ref field-label-above">
            <div class="field-label">{$referral}</div>
          </div>
        </div>
      </div>
OUT;

    return array('subject' => '', 'content' => $content);
  }
}

function dlaw_partner_have_elig_criteria_block() {
  if ($node = menu_get_object() and isset($node->field_partner_elig_criteria)) {
    if (!empty($node->field_partner_elig_criteria['und'][0]['value'])) {
      $elig_criteria = 'Eligibility criteria apply';
    }
    else {
      $elig_criteria = '';
    }

    $content =<<<OUT
      <div class="panel-pane pane-entity-field pane-node-field-partner-elig-criteria">
      <h3 class="pane-title">{$elig_criteria}</h3>
        <div class="pane-content">
          <div class="field field-name-field-partner-elig-criteria field-label-above">
            <div class="field-label"></div>
          </div>
        </div>
      </div>
OUT;

    return array('subject' => '', 'content' => $content);
  }
}

function dlaw_partner_recently_joined_block() {
  // Get latest 5 user names and timestamps for partner submission.
  $result = db_query(
   "SELECT ws.*, wd.data AS name, u.name AS username, u.created
    FROM webform_submissions ws
      INNER JOIN webform_submitted_data wd ON ws.sid = wd.sid AND wd.cid = 1
      LEFT JOIN users u ON ws.uid = u.uid
    WHERE wd.nid = (
      SELECT nid FROM node WHERE type = 'webform' AND title = 'Join request' LIMIT 1
    )
    ORDER BY sid DESC
    LIMIT 5");

  $rows = array();
  foreach ($result as $row) {
    $rows[] = array(
      $row->username ? l($row->username, "user/$row->uid") : $row->name,
      date('m/d/y - g:ia', $row->submitted),
      $row->created ? date('m/d/y - g:ia', $row->created) : ''
    );
  }

  $new_req_count = db_query("SELECT COUNT(sid) FROM webform_submissions WHERE uid = 0")->fetchField();

  $header = array('User', 'Submitted', 'Approved');

  $content = theme('table', array('header' => $header, 'rows' => $rows))
           . '<div class="lead">' . l("$new_req_count New Join Request(s)", 'node/87/webform-results') . '</div>';

  return array('subject' => 'Recently Joined Partners', 'content' => $content);
}

function dlaw_partner_languages_block() {
  if ($node = menu_get_object()) {
    $ntt = entity_metadata_wrapper('node', $node);
    $languages = '';

    $languages_total_num = sizeof($ntt->field_partner_lang);
    $i = 0;
    $comma = ',';

    foreach ($ntt->field_partner_lang as $lang) {
      $i++;

      $tid = $lang->getIdentifier();
      $name = $lang->label();

      if ($name == 'Other') {
        $name .= ' (' . $ntt->field_partner_lang_other->value() . ')';
      }

      if ( $i == $languages_total_num) {
        $comma = '';
      }
      $languages .= "<div class=\"field-item\">{$name}". $comma ." </div> ";
    }

    if (!empty(sizeof($ntt->field_partner_lang))) {
      
    $content =<<<OUT
      <div class="">
      <h3 class="pane-title">Intake Hours</h3>
        <div class="field-label"></div>
        <div class="field-items">
          $languages
        </div>
      </div>
OUT;
    }else{
      $content ='';
    }

    return array('subject' => '', 'content' => $content);
  }
}

function dlaw_partner_language_method_block() {
  if ($node = menu_get_object()) {
    $ntt = entity_metadata_wrapper('node', $node);
    $methods = '';

    foreach ($ntt->field_partner_lang_method as $lang) {
      $tid = $lang->getIdentifier();
      $name = $lang->label();

      if ($name == 'Other') {
        $name .= ' (' . $ntt->field_partner_lang_method_other->value() . ')';
      }

      $methods .= "<div class=\"field-item\">{$name}</div>";
    }

if (!empty(sizeof($ntt->field_partner_lang_method))) {
    $content =<<<OUT
      <div class="">
      <h3 class="pane-title">Language Service Method:&nbsp;</h3>
        <div class="field-label"></div>
        <div class="field-items">
          $methods
        </div>
      </div>
OUT;
}else{
  $content = "";
}
    return array('subject' => '', 'content' => $content);
  }
}

function dlaw_partner_who_serve_block() {
  if ($node = menu_get_object()) {
    $ntt = entity_metadata_wrapper('node', $node);
    $whos = '';

    $who_total_num = sizeof($ntt->field_partner_pop_served);
    $i = 0;
    $comma = ',';
    foreach ($ntt->field_partner_pop_served as $who) {
      $i++;

      $tid = $who->getIdentifier();
      $name = $who->label();

      if ($name == 'Other') {
        $name .= ' (' . $ntt->field_partner_pop_served_other->value() . ')';
      }

      if ( $i == $who_total_num) {
        $comma = '';
      }

      $whos .= "<div class=\"field-item\">{$name}". $comma ." </div>";
    }

if (!empty(sizeof($ntt->field_partner_pop_served))) {
    $content =<<<OUT
    <h3 class="pane-title">Who we serve:&nbsp;</h3>
      <div class="">
        <div class="field-items">
          $whos
        </div>
      </div>
OUT;
}else{
  $content = "";
}
    return array('subject' => '', 'content' => $content);
  }
}

function dlaw_partner_branch_offices_block() {
  if ($node = menu_get_object()) {
    $ntt = entity_metadata_wrapper('node', $node);
    $branches = '';

    foreach ($ntt->field_partner_branch as $branch) {
      $nid = $branch->getIdentifier();

      $branches .= '<div class="field-item">' . l($branch->label(), "node/$nid") . '</div>';
    }

    $content =<<<OUT
      <div class="">
        <div class="field-label">Branch Offices:&nbsp;</div>
        <div class="field-items">
          $branches
        </div>
      </div>
OUT;

    return array('subject' => '', 'content' => $content);
  }
}

function dlaw_partner_network_partner_block() {
  if ($node = menu_get_object()) {
    if (!empty($node->field_partner_network['und'][0]['value'])) {
      $content =<<<OUT
        <span class="label label-default" style="font-size: 16px; padding: 0.5em 0.9em;"><i class="fa fa-university" style="" title="Network Partner"></i> Network Partner </span>
OUT;

      return array('subject' => '', 'content' => $content);
    }
  }
}

function dlaw_partner_reset_find_help_block() {
  $content = '<a href="/find-help/" class="btn btn-default">Reset Search</a>';

  return array('subject' => '', 'content' => $content);
}
