<?php
/**
 * @file
 * dco_base.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dco_base_default_rules_configuration() {
  $items = array();
  $items['rules_new_comment_posted'] = entity_import('rules_config', '{ "rules_new_comment_posted" : {
      "LABEL" : "New comment posted",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "dco" ],
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : [ "comment_insert" ],
      "DO" : [
        { "component_rules_notify_admin_of_new_content" : {
            "author" : [ "comment:author" ],
            "content" : [ "comment:subject" ],
            "content_url" : [ "comment:url" ],
            "content_type" : "comment",
            "content_created" : [ "comment:created" ]
          }
        }
      ]
    }
  }');
  $items['rules_new_content_posted'] = entity_import('rules_config', '{ "rules_new_content_posted" : {
      "LABEL" : "New content posted",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "dco" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "DO" : [
        { "component_rules_notify_admin_of_new_content" : {
            "author" : [ "node:author" ],
            "content" : [ "node:title" ],
            "content_url" : [ "node:url" ],
            "content_type" : [ "node:type" ],
            "content_created" : [ "node:created" ]
          }
        }
      ]
    }
  }');
  $items['rules_notify_admin_of_new_content'] = entity_import('rules_config', '{ "rules_notify_admin_of_new_content" : {
      "LABEL" : "Notify Admin of New Content",
      "PLUGIN" : "rule",
      "TAGS" : [ "dco" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "author" : { "label" : "Author", "type" : "user" },
        "content" : { "label" : "Content", "type" : "text" },
        "content_url" : { "label" : "Content URL", "type" : "uri" },
        "content_type" : { "label" : "Content Type", "type" : "token" },
        "content_created" : { "label" : "Content Created", "type" : "date" }
      },
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "author" ],
            "roles" : { "value" : { "4" : "4", "7" : "7", "5" : "5", "3" : "3", "6" : "6", "9" : "9" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "3" : "3" } },
            "subject" : "[[site:name]] New [content_type:value] content",
            "message" : "New content is available for spam review posted by [author:name] (mail: [author:mail]) on [content_created:value] at [site:url].\\r\\n\\r\\n- Subject: [content:value]\\r\\n- URL: [content_url:value]\\r\\n\\r\\nYou are recieving this message because you have the \\u0022site administrator\\u0022 role on [site:name].",
            "from" : "no-reply@drupalcampohio.org"
          }
        }
      ]
    }
  }');
  return $items;
}
