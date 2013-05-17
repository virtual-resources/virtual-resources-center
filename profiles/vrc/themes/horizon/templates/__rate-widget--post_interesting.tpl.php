<div class="post-interesting">
  <?php if (!user_is_logged_in()): // If user is not logged in ?>
    <?php if ($display_options['description']): ?>
      <?php print '<span class="rate-description">' . $display_options['description'] . '</span>'; ?>
    <?php endif; ?>
  <?php else: ?>
    <?php if (!$just_voted): ?>
      <?php if ($display_options['description']): ?>
        <?php print '<span class="rate-description">' . $display_options['description'] . '</span>'; ?>
      <?php endif; ?>
      <?php
        print theme('rate_button', array('text' => $links[0]['text'],'href' => $links[0]['href'],'class' => "yes"));
        print theme('rate_button', array('text' => $links[1]['text'],'href' => $links[1]['href'],'class' => "no"));
      ?>
    <?php else: ?>
        <span><?php print t('Thank you for your feedback.');?></span>
    <?php endif; ?>
  <?php endif; ?>
</div>
