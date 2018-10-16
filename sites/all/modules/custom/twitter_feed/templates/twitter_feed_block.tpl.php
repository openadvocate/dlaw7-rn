<?php $tweets = _dlaw_pull_twitter_feed($twitter_user, $number_of_tweets); ?>

<?php if (count($tweets)) : ?>
<div id="custom-block-twitter">
  <div class="twitter-feeds-container">
    <ul>
    <?php foreach ($tweets as $twt) : ?>
      <li>
        <div class="text"><?php echo $twt['text']; ?></div>
        <div class="datetime"><?php echo $twt['time']; ?></div>
      </li>
    <?php endforeach; ?>
    </ul>
  </div>

  <div class="twitter_followers"><span id="followers"><?php if (isset($tweets[0])) : echo $tweets[0]['total_followers']; else : echo 0; endif; ?></span> Followers</div>

  <div class="bottom">
  <a href="http://twitter.com/<?php print $twitter_user; ?>" class="follow-twitter"><?php echo t('See More Tweets'); ?></a>
  </div>
</div>

<?php else: ?>
  <div class="no-content">No tweets to display. Check the configuration.</div>
<?php endif; ?>
