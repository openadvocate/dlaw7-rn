<?php
/**
 * @file
 * Provides the GAFeed object type and associated methods.
 */

$version = variable_get('google_analytics_reports_api_version', 'v3');

include_once "GAFeed{$version}.lib.inc";
