
This module is based on Drupal core's Dashboard module to provide same drag and drop experience.

** OLD **
Dashboard module (and thus this module) has a bug. It does not reliably handle module names that contain underscore as reported in https://drupal.org/node/936798. Applying the patch at https://drupal.org/node/936798#comment-6344936 fixed the issue.

** NEW **
- Case 39634
- 2014-04-01
- kkim
Old method described above still failed, because frontlayout module struggled to identify block deltas as well as module names that contain underscore (_) or hyphen (-). The patch only concerned with module names also could not deal with the situation where block delta name happes to match a module name, either its own or others.

I wrote a helper function frontlayout_load_blocks() and used it in frontlayout_update() to cope with the situation.

Ki