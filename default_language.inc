<?php

/*
 * @file default_language.inc
 * 
 * Implementation functions for language selector
 */

/**
 * Figure out the language from the path
 */
function default_language_language_getter($languages) {
  $default_lang = variable_get('default_language_prefix', 'fr');
  foreach ($languages as &$lang) {
    if ($lang->language == $default_lang) {
      return $lang->language;
    }
  }
  return FALSE;
}