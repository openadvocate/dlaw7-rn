<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>

<div class="contact-details">
  <div class="contact_row_1">
    <?php if (!empty($fields['field_contact_address']->content)): ?>    
      <div class="field_contact_address lead"><?php print render($fields['field_contact_address']->content); ?></div>
    <?php endif ?>
  </div>
  <div class="contact_row_2">
    <?php if (!empty($fields['field_contact_phone']->content)): ?>    
      <div class="field_contact_phone lead"><?php print render($fields['field_contact_phone']->content); ?></div>
    <?php endif ?>
    <?php if (!empty($fields['field_contact_fax']->content)): ?>    
      <div class="field_contact_fax lead"><?php print render($fields['field_contact_fax']->content); ?></div>
    <?php endif ?>
    <?php if (!empty($fields['field_contact_url']->content)): ?>    
      <div class="field_contact_url lead"><?php print render($fields['field_contact_url']->content); ?></div>
    <?php endif ?>
    <?php if (!empty($fields['field_email']->content)): ?>    
      <div class="field_email lead"><?php print render($fields['field_email']->content); ?></div>
    <?php endif ?>
  </div>
</div>