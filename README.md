# DLAW-RN
DLAW is a Drupal distribution for building public information websites. DLAW is developed and maintained by Urban Insight, Inc. (http://urbaninsight.com). Development of the DLAW has been supported by Legal Service Corporation (LSC) Technology Initiative Grants. For more information see http://openadvocate.org

This edition of DLAW7-RN is customized to be used as a referral network. All features of DLAW7 remain the same with the exception of the "Contacts" feature which is disabled and replaced by the Referral Network (RN) functionality. It features a directory of organization profiles that can be edited by organization users who can create referrals, invite other organizations to review the referral, and place the referral with an organization that accepts the referral.

## Installation guide:
- Download or git clone DLAW-RN distribution.
- Install with DLAW installation profile.
- Start configuring the site at /admin/dashboard
- All the DLAW configurations are under /admin/dashboard/. Only user 1 needs to administer the site with Drupal configurations beyond DLAW settings.

## Configurations and Settings
- At /admin/structure/pages, enable "Node template" and "Taxonomy term template"
- At /admin/config/system/site-information, set default front page to /home
- At /admin/config/system/quarkfield, set "Content type to generate QR code for" as "page" and set "Image Field to save generated QR code" as "page -- field_qr_url"

### Referral Network feature specific Modules to enable
Most of RN features are contained in these modules
- DLAW Organization (dlaw_partner)
- DLAW Referral Network (tcvlan_refnet)

## Recommended blocks for dashboard

### Dashboard (main)
- Manage content
- View: Dashboard: Recently edited
- View: Dashboard: Unpublished

### Dashboard (sidebar)
- DLAW Notification
- Google Analytics
- Site Summary

## Recommended blocks for Home Page Builder
- Slides banner: start adding pages to the slide and slideshow will appear
- Mission: Add a mission statement and it will appear
- Upcmoning Events
- Latest News
- Twitter Feed
- You can also create custom blocks
