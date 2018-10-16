<?php
/**
 * @file
 * feedbacks.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feedbacks_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rate_widgets';
  $strongarm->value = array(
    1 => (object) array(
      'name' => 'feedback',
      'tag' => 'vote',
      'title' => 'Feedback',
      'node_types' => array(
        0 => 'page',
      ),
      'comment_types' => array(),
      'options' => array(
        0 => array(
          0 => '1',
          1 => 'Not helpful',
        ),
        1 => array(
          0 => '2',
          1 => 'Somewhat helpful',
        ),
        2 => array(
          0 => '3',
          1 => 'Very helpful',
        ),
      ),
      'template' => 'custom',
      'node_display' => '2',
      'teaser_display' => FALSE,
      'comment_display' => '2',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        1 => 0,
        2 => 0,
        4 => 0,
        3 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '1',
      'displayed' => '2',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '0',
      'use_source_translation' => TRUE,
      'value_type' => 'option',
      'translate' => FALSE,
    ),
  );
  $export['rate_widgets'] = $strongarm;

  return $export;
}
