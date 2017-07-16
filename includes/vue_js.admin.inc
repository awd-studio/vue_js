<?php

/**
 * @file
 * Admin page form
 */
function vue_js_page_callback($form, &$form_state) {
  $options = array(
    VUEJS_VERSION_DEV => t('Development version'),
    VUEJS_VERSION_MIN => t('Production version'),
    VUEJS_VERSION_CDN => t('CDN'),
  );

  $form['vue_js_version'] = array(
    '#type'          => 'select',
    '#title'         => t('Vue.js version to use'),
    '#options'       => $options,
    '#default_value' => variable_get('vue_js_version', VUEJS_VERSION_CDN),
  );

  return (system_settings_form($form));
}
