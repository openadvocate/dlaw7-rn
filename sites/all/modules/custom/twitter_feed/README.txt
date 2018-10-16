INSTALLATION
============

Go to https://dev.twitter.com/apps, create a twitter app and generate these four
values:

  - Consumer Key (API Key)
  - Consumer Secret (API Secret)
  - Access Token
  - Access Token Secret

and add these lines at the end of your settings.php:

$conf['twitter_feed_cfg'] = array(
  'consumer_key' => "<value>",
  'consumer_secret' => "<value>",
  'oauth_access_token' => "<value>",
  'oauth_access_token_secret' => "<value>",
);
