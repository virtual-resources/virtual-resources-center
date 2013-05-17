<?php
/**
 * @file
 * vrc_default_content_en.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function vrc_default_content_en_content_defaults() {
  $content = array();

  $content['vrc_default_answer_anon_phone_1'] = (object) array(
    'title' => 'Response to What is the best way to collaborate anonymously over the phone?',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'answer',
    'language' => 'und',
    'created' => '1339597440',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_answer_anon_phone_1',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>You can us SMS 007 or CryptoSMS.</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>You can us SMS 007 or CryptoSMS.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_answer_question' => array(
      'und' => array(
        0 => array(
          'machine_name' => 'vrc_default_question_anon_phone',
        ),
      ),
    ),
  );

  $content['vrc_default_answer_facebook_chat_1'] = (object) array(
    'title' => 'Response to Is facebook chat secure?',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'answer',
    'language' => 'und',
    'created' => '1339600185',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_answer_facebook_chat_1',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>nope</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>nope</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_answer_question' => array(
      'und' => array(
        0 => array(
          'machine_name' => 'vrc_default_question_facebook_chat',
        ),
      ),
    ),
  );

  $content['vrc_default_answer_https_1'] = (object) array(
    'title' => 'Response to What are good methods to improve password management?',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'answer',
    'language' => 'und',
    'created' => '1340030135',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_answer_https_1',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>May favorite approach is this:<br><br>Every password of mine is a combination of a complicated part and a service dependent part:<br><br>&lt;complicated-part&gt;&lt;service-part&gt;<br>For example, the complicated part is !85HeLoN%9. The service part is the name of the website or service I use. For Facebook it would be !85HeLoN%9facebook then.<br><br>Remembering the complicated part is easy as you use it always in every password, so typing it gets a routine. The service part is obvious. You don\'t really need to remember your password.<br><br>One way to improve this is to have two versions of your complicated part, e.g. 85helon9 without capital letters and without special characters. When the service does not transfer your password via a secured connection, you still don\'t expose your real password and thus your really important accounts like online banking are still safe.</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>May favorite approach is this:<br /><br />Every password of mine is a combination of a complicated part and a service dependent part:<br /><br />&lt;complicated-part&gt;&lt;service-part&gt;<br />For example, the complicated part is !85HeLoN%9. The service part is the name of the website or service I use. For Facebook it would be !85HeLoN%9facebook then.<br /><br />Remembering the complicated part is easy as you use it always in every password, so typing it gets a routine. The service part is obvious. You don\'t really need to remember your password.<br /><br />One way to improve this is to have two versions of your complicated part, e.g. 85helon9 without capital letters and without special characters. When the service does not transfer your password via a secured connection, you still don\'t expose your real password and thus your really important accounts like online banking are still safe.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_answer_question' => array(
      'und' => array(
        0 => array(
          'machine_name' => 'vrc_default_question_https',
        ),
      ),
    ),
  );

  $content['vrc_default_answer_https_2'] = (object) array(
    'title' => 'Response to What are good methods to improve password management?',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'answer',
    'language' => 'und',
    'created' => '1340030157',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_answer_https_2',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>One solution, described by Joel Spolsky, is to use a combination of PasswordSafe and Dropbox. There are alternatives to PasswordSafe, particularly for platforms other than Windows, but Dropbox can automatically sync the (encrypted) password file to a PC on any platform (and it is backed-up in the cloud). PasswordSafe can generate secure passwords for you, so that you only need to remember one master password.</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>One solution, described by Joel Spolsky, is to use a combination of PasswordSafe and Dropbox. There are alternatives to PasswordSafe, particularly for platforms other than Windows, but Dropbox can automatically sync the (encrypted) password file to a PC on any platform (and it is backed-up in the cloud). PasswordSafe can generate secure passwords for you, so that you only need to remember one master password.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_answer_question' => array(
      'und' => array(
        0 => array(
          'machine_name' => 'vrc_default_question_https',
        ),
      ),
    ),
  );

  $content['vrc_default_answer_malware_1'] = (object) array(
    'title' => 'Response to Best tool to get rid of malware',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'answer',
    'language' => 'und',
    'created' => '1339599669',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_answer_malware_1',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Avira</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Avira</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_answer_question' => array(
      'und' => array(
        0 => array(
          'machine_name' => 'vrc_default_question_malware',
        ),
      ),
    ),
  );

  $content['vrc_default_answer_malware_2'] = (object) array(
    'title' => 'Response to Best tool to get rid of malware',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'answer',
    'language' => 'und',
    'created' => '1339599681',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_answer_malware_2',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>ClamWin</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>ClamWin</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_answer_question' => array(
      'und' => array(
        0 => array(
          'machine_name' => 'vrc_default_question_malware',
        ),
      ),
    ),
  );

  $content['vrc_default_answer_malware_3'] = (object) array(
    'title' => 'Response to Best tool to get rid of malware',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'answer',
    'language' => 'und',
    'created' => '1339599694',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_answer_malware_3',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>AVG</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>AVG</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_answer_question' => array(
      'und' => array(
        0 => array(
          'machine_name' => 'vrc_default_question_malware',
        ),
      ),
    ),
  );

  $content['vrc_default_answer_tor_relay_1'] = (object) array(
    'title' => 'Response to Looking for Tor relay',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'answer',
    'language' => 'und',
    'created' => '1339678912',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_answer_tor_relay_1',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Another way to find public bridge addresses is to send mail to bridges@torproject.org with the line "get bridges" by itself in the body of the mail. You\'ll need to send this request from a gmail account, though — otherwise we make it too easy for an attacker to make a lot of email addresses and learn about all the bridges. Almost instantly, you\'ll receive a reply that includes:</p><p>Here are your bridge relays:</p><p>&nbsp;- bridge 60.16.182.53:9001</p><p>&nbsp;- bridge 87.237.118.139:444</p><div>&nbsp;- bridge 60.63.97.221:443</div><div>&nbsp;</div><div><hr><p>&nbsp;</p></div><div>Once you\'ve received the email with bridge information, you can continue the Vidalia configuration steps outlined above.&nbsp;</div><div>&nbsp;</div><div>See&nbsp;https://www.torproject.org/docs/bridges</div>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Another way to find public bridge addresses is to send mail to <a href="mailto:bridges@torproject.org">bridges@torproject.org</a> with the line "get bridges" by itself in the body of the mail. You\'ll need to send this request from a gmail account, though — otherwise we make it too easy for an attacker to make a lot of email addresses and learn about all the bridges. Almost instantly, you\'ll receive a reply that includes:</p>
<p>Here are your bridge relays:</p>
<p> - bridge 60.16.182.53:9001</p>
<p> - bridge 87.237.118.139:444</p>
<div> - bridge 60.63.97.221:443</div>
<div> </div>
<div>
<p> </p>
</div>
<div>Once you\'ve received the email with bridge information, you can continue the Vidalia configuration steps outlined above. </div>
<div> </div>
<div>See <a href="https://www.torproject.org/docs/bridges">https://www.torproject.org/docs/bridges</a></div>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_answer_question' => array(
      'und' => array(
        0 => array(
          'machine_name' => 'vrc_default_question_tor_relay',
        ),
      ),
    ),
  );

  $content['vrc_default_article_freedomfone'] = (object) array(
    'title' => 'Article related to Freedom Fone',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'article',
    'language' => 'und',
    'created' => '1339057730',
    'comment' => '2',
    'translate' => '0',
    'machine_name' => 'vrc_default_article_freedomfone',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>The LIRNEasia and Sarvodaya conducted feasibility study to integrate the Freedom Fone Interactive Voice Response (IVR) System with the Sahana Disaster Management System was presented at the Communicating with Disaster Affected Communities (CDAC) technology fair. The congregation took place in London, UK, March 22 &amp; 23.</p><p>http://lirneasia.net/wp-content/uploads/2012/03/CDAC-LIRNEasia-FF-case-study.pdf</p><p>In the Freedom Fone version of the case study, Brenda elaborates: “The lessons to date are promising for integrating voice for emergency communication; especially to bridge the last-mile with incident management hubs. Moreover, it is a particularly effective way to enable ICTs for low computer literate non-English working language community-based disaster management organizations in developing countries. Sahana Foundation and Freedom Fone are keen to pursue the integration of the two platforms. If successful, this would position the integrated voice-enabled disaster communication system, for wider adoption, especially, with community-based emergency management and response organisations.”</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>The LIRNEasia and Sarvodaya conducted feasibility study to integrate the Freedom Fone Interactive Voice Response (IVR) System with the Sahana Disaster Management System was presented at the Communicating with Disaster Affected Communities (CDAC) technology fair. The congregation took place in London, UK, March 22 &amp; 23.</p>
<p><a href="http://lirneasia.net/wp-content/uploads/2012/03/CDAC-LIRNEasia-FF-case-study.pdf">http://lirneasia.net/wp-content/uploads/2012/03/CDAC-LIRNEasia-FF-case-s...</a></p>
<p>In the Freedom Fone version of the case study, Brenda elaborates: “The lessons to date are promising for integrating voice for emergency communication; especially to bridge the last-mile with incident management hubs. Moreover, it is a particularly effective way to enable ICTs for low computer literate non-English working language community-based disaster management organizations in developing countries. Sahana Foundation and Freedom Fone are keen to pursue the integration of the two platforms. If successful, this would position the integrated voice-enabled disaster communication system, for wider adoption, especially, with community-based emergency management and response organisations.”</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_tool' => array(
      'und' => array(
        0 => array(
          'tid' => '67',
        ),
      ),
    ),
  );

  $content['vrc_default_article_iran'] = (object) array(
    'title' => 'Internet in Iran',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'article',
    'language' => 'und',
    'created' => '1339668715',
    'comment' => '2',
    'translate' => '0',
    'machine_name' => 'vrc_default_article_iran',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Iranians are already used to censors blocking Facebook, Gmail and foreign news sites, and being spied on with surveillance software purchased from Western companies.</p><p>But the ambitious plans would go much further, blocking access to foreign-based social media sites and email. Instead, there will be an Iranian version of Facebook and a new email service, to be called Iran Mail. Users will have to register their home address and social security number with police.</p><p><span style="font-family: comic sans ms,cursive;">The plans have received the backing of the Supreme Leader Ayatollah Ali Khamenei, the most powerful man in Iran, who has denounced the internet as sinful and a means for the West to wage "soft war" by invading Iranian culture.</span></p><p>But his real target is anti-regime activists who have relied on the internet since the failure of the "Green Revolution" which followed the disputed 2009 election. Since then security has been so tight on Iran\'s streets that protests are broken up almost as soon as they start.</p><p>When the system, called Halal internet or National Internet by the regime, is introduced this summer only a few approved and carefully monitored businesses and government departments will have access to the World Wide Web. In effect Iran will have a giant, country-wide intranet, with cyber police blocking websites that are not approved.<br>The Iranian regime has been badly shaken by the use made of the internet by its own opponents and then by revolutionaries during the Arab Spring last year.</p><h3 style="color: blue;">In particular mobile phone footage of a young woman called Neda Agha-Soltani, shot dead by government thugs in Tehran in 2009, spread rapidly on the internet, providing a powerful image to the world of the regime\'s brutality.</h3><p>Amir Bayani, of anti-censorship group Article 19, said: "The government doesn\'t want video of another Neda going viral, so controlling the internet is a priority for them.</p><p>"People rely on the internet for information now. Nobody trusts official government news sources. The only uncensored information comes from blogs and Facebook, and that is under threat.</p><p>"Businesses are worried the new system may hurt their profits, and I can only hope that their opposition will be enough to shelve these plans."</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Iranians are already used to censors blocking Facebook, Gmail and foreign news sites, and being spied on with surveillance software purchased from Western companies.</p>
<p>But the ambitious plans would go much further, blocking access to foreign-based social media sites and email. Instead, there will be an Iranian version of Facebook and a new email service, to be called Iran Mail. Users will have to register their home address and social security number with police.</p>
<p>The plans have received the backing of the Supreme Leader Ayatollah Ali Khamenei, the most powerful man in Iran, who has denounced the internet as sinful and a means for the West to wage "soft war" by invading Iranian culture.</p>
<p>But his real target is anti-regime activists who have relied on the internet since the failure of the "Green Revolution" which followed the disputed 2009 election. Since then security has been so tight on Iran\'s streets that protests are broken up almost as soon as they start.</p>
<p>When the system, called Halal internet or National Internet by the regime, is introduced this summer only a few approved and carefully monitored businesses and government departments will have access to the World Wide Web. In effect Iran will have a giant, country-wide intranet, with cyber police blocking websites that are not approved.<br />The Iranian regime has been badly shaken by the use made of the internet by its own opponents and then by revolutionaries during the Arab Spring last year.</p>
<p>In particular mobile phone footage of a young woman called Neda Agha-Soltani, shot dead by government thugs in Tehran in 2009, spread rapidly on the internet, providing a powerful image to the world of the regime\'s brutality.
</p><p>Amir Bayani, of anti-censorship group Article 19, said: "The government doesn\'t want video of another Neda going viral, so controlling the internet is a priority for them.</p>
<p>"People rely on the internet for information now. Nobody trusts official government news sources. The only uncensored information comes from blogs and Facebook, and that is under threat.</p>
<p>"Businesses are worried the new system may hurt their profits, and I can only hope that their opposition will be enough to shelve these plans."</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_original_article' => array(
      'und' => array(
        0 => array(
          'url' => 'http://www.telegraph.co.uk/news/worldnews/middleeast/iran/9233390/Iran-planning-to-cut-internet-access-to-rest-of-world.html',
          'title' => 'Internet in Iran',
          'attributes' => array(),
        ),
      ),
    ),
    'field_toolbox_categories' => array(
      'und' => array(
        0 => array(
          'tid' => '22',
        ),
        1 => array(
          'tid' => '31',
        ),
      ),
    ),
  );

  $content['vrc_default_article_malware'] = (object) array(
    'title' => 'Toolbox for learning machine learning and data science',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'article',
    'language' => 'und',
    'created' => '1339670247',
    'comment' => '2',
    'translate' => '0',
    'machine_name' => 'vrc_default_article_malware',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Recently I jumped in and taught myself how to do medium-sized data exploration and machine learning. (Excel-sized &lt; <strong>My Data Set</strong> &lt; Big Data)<br>If you are a real data scientist or expert, skip this. It isn’t for you. But if you have a good data set and want to start playing with it and learning some of the tools of modern data analytics, perhaps this can save you some time.</p><h1>Matlab vs. R vs. Python</h1><p>If you work at a university or big company, maybe you have access to Matlab, which is apparently great, but expensive. I didn’t.<br><br>A physicist I was working with knew and used R. Apparently it is incredibly powerful and has many of the most cutting edge algorithms. BUT, I found the syntax baffling, the documentation copious, but written for mathematicians instead of hackers, and overall difficult and frustrating.<br><br>Python, on the other hand, is a dream. The language is easy. The documentation is copious and comprehensible. The online community is awesome. And in addition to all the analysis, you can do data munging as well. Python was my pick, and I think it was the right one.<br><br>The next step is picking the packages to support Python.</p><h1>Python Packages for Analysis</h1><p>I’m sure there are a lot of different choices with pluses and minuses, but this set served me very well, came after reasonable research, and never let me down. So it’s a good starting point.</p><ul><li><a href="http://wiki.python.org/moin/Python2orPython3">Python 2.7 (vs. 3.x)</a> – It feels weird to use an older version, but all the packages work with 2.x, and some might not work with 3.x, so I went with 2.x and never had a problem.</li><li><a href="http://numpy.scipy.org/">NumPy </a>&amp; <a href="http://www.scipy.org/">SciPy </a>– these are the core packages for scientific computation, array manipulation, etc. They are the base.</li><li><a href="http://matplotlib.sourceforge.net/">Matplotlib </a>– this allows you to do lots of easy visual analysis, charting, etc. Very powerful, but also easy for easy things. A histogram is a couple of lines.</li><li><a href="http://ipython.org/">iPython </a>– this is the base interactive shell for python scientific computing. The key is you can easily run commands from the shell as you experiment. I played with others, but I wish I had switched to iPython sooner.</li><li><a href="http://sourceforge.net/projects/console/">Console2 </a>(windows) – If you use Windows, get the free Console2 and <a href="http://wiki.ipython.org/Cookbook/Using_IPython_with_Console2">hook iPython (and Git, and cygwin, etc.) up to it</a>.</li><li><a href="http://pandas.pydata.org/">Pandas </a>– Pandas implements R’s “dataframe” concept in python. Basically it wraps Numpy arrays so you can reference rows and columns by labels instead of just numbers. Overall, I was mixed on Pandas. It’s undoubtedly powerful, and when you are good at it, you can do things simply and elegantly. But I also found that the vast majority of my debugging and tinkering was in Pandas. So I guess I’d say skip it at the start, but know its out there in case you feel you need it.</li><li><a href="http://statsmodels.sourceforge.net/">Statsmodels </a>– This is a statistics package that did the trick for my limited usage.</li><li><a href="http://scikit-learn.org/stable/">Scikit-learn</a>- A great package with lots of machine learning algorithms, easy to use, and great documentation.<ul><li><a href="http://orange.biolab.si/">Orange </a>– Orange is another ML package which is very highly recommended, and also has a GUI. But I found it very un-pythonic to my novice eyes. I was trying to figure out how to read in a dict of my features and got lost in a seemingly endless list of Orange classes. When I loooked at Sklearn, it was a one liner. So Sklearn was great for me, but you might want to check out Orange.</li></ul></li><li><a href="http://nltk.org/">NLTK </a>– Natural Language Toolkit – useful for some base machine learning (though sklearn is better), but good if you are doing any NLP.</li><li>Excel – Don’t forget Excel! I would often do my analysis in Python, then dump some results into Excel for quick, easy data exploration. If you are really good with the above tools, you probably don’t need it. But Excel is SO easy, that I found it a really valuable tool.</li></ul><p>While I’m at it, here are some good documentation sources I used:</p><ul><li>Python – the Python tutorial - <a href="http://docs.python.org/tutorial/">http://docs.python.org/tutorial/</a></li><li>NLP – NLTK.org -<a href="http://nltk.org/"> http://nltk.org/</a></li><li>Machine learning – Scikit-learn -<a href="http://scikit-learn.org/stable/"> http://scikit-learn.org/stable/</a></li><li>Machine learning – getting a feel for the algorithms themselves - <a href="http://www.manning.com/pharrington/">http://www.manning.com/pharrington/</a> - I didn’t do an extensive search for books, but this one is good, and uses Python instead of R.</li><li>Google / StackOverflow – They are your friends – use them liberally.</li></ul><p><br>Also, if you need to clean up your data to get it into a usable state, you might try <a href="http://vis.stanford.edu/wrangler/">Data Wrangler </a>or&nbsp; <a href="http://code.google.com/p/google-refine/">Google Refine</a>. I love the concept of both (and Wrangler is wicked-cool), but they were both buggy for me and if you are good with Python, just use it.<br><br>Happy data exploring!<br><br>(Updates)<br><br>Some good comments on Hacker News<br>Especially this one:<br>If you are going to use python for ML. Use the python package from Entthought [http://www.enthought.com/products/epd_free.php]&nbsp; It has most of the libraries, out of the box.</p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p>Recently I jumped in and taught myself how to do medium-sized data exploration and machine learning. (Excel-sized &lt; <strong>My Data Set</strong> &lt; Big Data)<br />If you are a real data scientist or expert, skip this. It isn’t for you. But if you have a good data set and want to start playing with it and learning some of the tools of modern data analytics, perhaps this can save you some time.</p>
<h1>Matlab vs. R vs. Python</h1>
<p>If you work at a university or big company, maybe you have access to Matlab, which is apparently great, but expensive. I didn’t.<br /><br />A physicist I was working with knew and used R. Apparently it is incredibly powerful and has many of the most cutting edge algorithms. BUT, I found the syntax baffling, the documentation copious, but written for mathematicians instead of hackers, and overall difficult and frustrating.<br /><br />Python, on the other hand, is a dream. The language is easy. The documentation is copious and comprehensible. The online community is awesome. And in addition to all the analysis, you can do data munging as well. Python was my pick, and I think it was the right one.<br /><br />The next step is picking the packages to support Python.</p>
<h1>Python Packages for Analysis</h1>
<p>I’m sure there are a lot of different choices with pluses and minuses, but this set served me very well, came after reasonable research, and never let me down. So it’s a good starting point.</p>
<ul><li><a href="http://wiki.python.org/moin/Python2orPython3">Python 2.7 (vs. 3.x)</a> – It feels weird to use an older version, but all the packages work with 2.x, and some might not work with 3.x, so I went with 2.x and never had a problem.</li>
<li><a href="http://numpy.scipy.org/">NumPy </a>&amp; <a href="http://www.scipy.org/">SciPy </a>– these are the core packages for scientific computation, array manipulation, etc. They are the base.</li>
<li><a href="http://matplotlib.sourceforge.net/">Matplotlib </a>– this allows you to do lots of easy visual analysis, charting, etc. Very powerful, but also easy for easy things. A histogram is a couple of lines.</li>
<li><a href="http://ipython.org/">iPython </a>– this is the base interactive shell for python scientific computing. The key is you can easily run commands from the shell as you experiment. I played with others, but I wish I had switched to iPython sooner.</li>
<li><a href="http://sourceforge.net/projects/console/">Console2 </a>(windows) – If you use Windows, get the free Console2 and <a href="http://wiki.ipython.org/Cookbook/Using_IPython_with_Console2">hook iPython (and Git, and cygwin, etc.) up to it</a>.</li>
<li><a href="http://pandas.pydata.org/">Pandas </a>– Pandas implements R’s “dataframe” concept in python. Basically it wraps Numpy arrays so you can reference rows and columns by labels instead of just numbers. Overall, I was mixed on Pandas. It’s undoubtedly powerful, and when you are good at it, you can do things simply and elegantly. But I also found that the vast majority of my debugging and tinkering was in Pandas. So I guess I’d say skip it at the start, but know its out there in case you feel you need it.</li>
<li><a href="http://statsmodels.sourceforge.net/">Statsmodels </a>– This is a statistics package that did the trick for my limited usage.</li>
<li><a href="http://scikit-learn.org/stable/">Scikit-learn</a>- A great package with lots of machine learning algorithms, easy to use, and great documentation.
<ul><li><a href="http://orange.biolab.si/">Orange </a>– Orange is another ML package which is very highly recommended, and also has a GUI. But I found it very un-pythonic to my novice eyes. I was trying to figure out how to read in a dict of my features and got lost in a seemingly endless list of Orange classes. When I loooked at Sklearn, it was a one liner. So Sklearn was great for me, but you might want to check out Orange.</li>
</ul></li>
<li><a href="http://nltk.org/">NLTK </a>– Natural Language Toolkit – useful for some base machine learning (though sklearn is better), but good if you are doing any NLP.</li>
<li>Excel – Don’t forget Excel! I would often do my analysis in Python, then dump some results into Excel for quick, easy data exploration. If you are really good with the above tools, you probably don’t need it. But Excel is SO easy, that I found it a really valuable tool.</li>
</ul><p>While I’m at it, here are some good documentation sources I used:</p>
<ul><li>Python – the Python tutorial - <a href="http://docs.python.org/tutorial/">http://docs.python.org/tutorial/</a></li>
<li>NLP – NLTK.org -<a href="http://nltk.org/"> http://nltk.org/</a></li>
<li>Machine learning – Scikit-learn -<a href="http://scikit-learn.org/stable/"> http://scikit-learn.org/stable/</a></li>
<li>Machine learning – getting a feel for the algorithms themselves - <a href="http://www.manning.com/pharrington/">http://www.manning.com/pharrington/</a> - I didn’t do an extensive search for books, but this one is good, and uses Python instead of R.</li>
<li>Google / StackOverflow – They are your friends – use them liberally.</li>
</ul><p><br />Also, if you need to clean up your data to get it into a usable state, you might try <a href="http://vis.stanford.edu/wrangler/">Data Wrangler </a>or  <a href="http://code.google.com/p/google-refine/">Google Refine</a>. I love the concept of both (and Wrangler is wicked-cool), but they were both buggy for me and if you are good with Python, just use it.<br /><br />Happy data exploring!<br /><br />(Updates)<br /><br />Some good comments on Hacker News<br />Especially this one:<br />If you are going to use python for ML. Use the python package from Entthought [<a href="http://www.enthought.com/products/epd_free.php] ">http://www.enthought.com/products/epd_free.php] </a> It has most of the libraries, out of the box.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_original_article' => array(
      'und' => array(
        0 => array(
          'url' => 'http://k2company.com/blog/2012/09/06/toolbox-for-learning-machine-learning-and-data-science/',
          'title' => 'Ross\'s Blog: Toolbox for learning machine learning and data science',
          'attributes' => array(),
        ),
      ),
    ),
    'field_toolbox_categories' => array(
      'und' => array(
        0 => array(
          'tid' => '42',
        ),
      ),
    ),
  );

  $content['vrc_default_article_simurgh'] = (object) array(
    'title' => 'Keylogging version of anti-censorship software Simurgh found',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'article',
    'language' => 'und',
    'created' => '1339599587',
    'comment' => '2',
    'translate' => '0',
    'machine_name' => 'vrc_default_article_simurgh',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Simurgh is an Iranian stand-alone proxy software for Microsoft Windows. It has been used mainly by Iranian users to bypass censorship since 2009. The downloadable file is less than 1 MB and can be downloaded within a reasonable amount of time even with a slow internet connection, which makes it convenient for many users in Iran. Simurgh runs without prior installation or administrator privileges on the computer and therefore, can be copied and used from a USB flash drive on any shared computer (i.e Internet cafes).<br><br>Simurgh is available for free download from its official website https://simurghesabz.net. After running the executable file, a user interface (see below) opens. When the user clicks “Start”, Simurgh will attempt to establish a secure connection. The web browser will then open a new window to provide users with a test page, confirming their secure connection originating from a different country.<br><img src="http://citizenlab.org/wp-content/uploads/2012/05/simurgh1.png" style="float: right;"><br>It has recently come to our attention that this software is being recommended and circulated among Syrian Internet users for bypassing censorship in their country. This information led to the discovery and analysis of a back-doored version of this software.<br><br>The malicious copy will install the Simurgh software, but will also install an undesirable backdoor on the victim’s computer. This software is distributed as “Simurgh-setup.zip” and is identifiable via the following md5 and sha256 hashes:<br><br>5e2a714fdfc2309af843056e8c5ae7d3 Simurgh-setup.zip<br>9c1a238d87e3bad41708c2e98f753442a224ed9df994e1a34083b2bf336047e5 Simurgh-setup.zip<br><br>When you unzip this file you are presented with Simurgh-setup.exe<br><br>379480c807812f3521466f7ff5ffa273 Simurgh-setup.exe<br>e20438a4cf90b67dab613451cc5b3bc35256413461dafdfc35425429d8d478df Simurgh-setup.exe<br><br>The installer from the most recent legitimate version of Simurgh looks like this:<br><br><img src="http://citizenlab.org/wp-content/uploads/2012/05/simurgh2.png"><br><br>Executing the malicious version starts an installation dialogue which looks like this:<br><br><img src="http://citizenlab.org/wp-content/uploads/2012/05/simurgh3.png"><br><br>In addition to creating a copy of Simurgh in:<br><br>C:\\Program Files\\Simurgh\\Simurgh.exe<br><br>The malicious GUI installer drops 4 binaries in C:\\windows\\system32\\drivers:<br><br>MSINET.OCX – 73da54b69911bdd08ea8bbbd508f815ef7cfa59c4684d75c1c602252ec88ee31<br>richtx32.ocx – 318cc48cbcfaba9592956e4298886823cc5f37626c770d6dadbcd224849680c5<br>shdocvw.dll – fdae6764d190bf265dbc2df352174ccdcc97b1680545e348f1ee1111b0808693<br>lsass.exe – 9320d247dd94f610f31037df8eda75fe79991f126d2e55d35a9532d09ff79896<br><br>The first three files are legitimate Microsoft system files which appear to be dependencies of the fourth, ‘lsass.exe’. This file is VB6 native code and is installed as an implant to allow persistent access to the victim’s computer and to provide data exfiltration capabilities.<br><br>As part of the installation the following registry entry is written which ensures the running of the Trojan on logon:<br><br>HKLM\\software\\microsoft\\windows nt\\currentversion\\winlogon\\shell explorer.exe C:\\WINDOWS\\system32\\drivers\\lsass.exe REG_SZ 0<br><br>On startup, ‘lsass.exe’ deletes ‘C:\\WINDOWS\\Media\\Windows XP Start.wav’. This file is the ‘navigation’ sound in Explorer, IE, and other applications based on a common set of controls. Since ‘lsass.exe’ uses several of these controls, this is presumably done to prevent ‘clicking’ sounds during the operation of the implant. However, this will also lead to a lack of navigation sounds in other applications, where they would be expected.<br><br>In addition to ensuring persistence, ‘lsass.exe’ enumerates basic details of the system (IP address, hostname, victim username) and provides keylogging functionality. This binary contains three javascript files which are written out as the text files:<br><br>C:\\WINDOWS\\system32\\win.txt<br>C:\\WINDOWS\\system32\\1.txt<br>C:\\WINDOWS\\system32\\2.txt<br><br>These act as basic HTML templates for data mined from the victim’s system (such as keystrokes). Processing of ‘win.txt’ renames it to ‘upl.htm’ which is then sent via HTTP post request to a remote site registered with a Saudi Arabian ISP.<br><br>If this Trojan is found to be installed on a computer one must consider all online accounts (E-mail, banking, etc.) to have been compromised and it is advised that all online passwords be changed as soon as possible. While this Trojan is detected by most anti-virus software as malicious, AV software cannot always be guaranteed to clean up an infected system and a full re-install is suggested.<br><br>This Trojan has been specifically crafted to target people attempting to evade government censorship. Given the intended purpose of this software, users must be very careful if they have been infected by this Trojan. Additionally, they should be cautious about installing software, especially circumvention software, from untrusted sources. Where possible, software should be downloaded from trusted official websites over HTTPS. If checksums or cryptographic signatures are provided by the software vendor, these should be checked prior to installation.<br><br><br>UPDATED: May 30, 2012<br><br>Since our report was published, the Simurgh team has taken several important steps to warn their users about this threat.<br><br>The Simurgh team warns their users directly on the website https://simurghesabz.net/with a prominent message in Arabic, Farsi and English about the malicious versions of the software.&nbsp; They post MD5 checksums of the official binaries and malicious packages, as well as instructions for how to check MD5 checksums against downloaded software.&nbsp; If you use Simurgh you should immediately compare your installer against the checksums posted on the official site.<br>You can also find these checksums below:<br><br>Official binaries<br>- simurgh120.20100910.exe – 07855ead46bb15718ee73d513bdb9678<br>- simurgh120beta.20100326.exe – ddecf8ac6c96c148cc7c42183d25baa9<br><br>Malicious installer packages<br>- Simurgh-setup.zip – 5e2a714fdfc2309af843056e8c5ae7d3<br>- Simurgh-setup.exe – 379480c807812f3521466f7ff5ffa273<br>- Simurgh-setup.exe – 300b0d061dfb9c9c6d7bdeecc74169f1<br>- simurgh[homs-sin.ibda3.org].exe – c8c8817af66312cfcfcb1ddf952f9d98<br><br>As Sophos has pointed out in a recent blog post on Naked Security http://nakedsecurity.sophos.com/2012/05/29/spying-trojan-targets-iranian-web-surfers-dissidents/, the splash page that loads when Simurgh is initialized to show the users’ IP has been configured to warn users who may be compromised.&nbsp; If you see a warning you should immediately run an antivirus program to remove the software or for greater assurance, reinstall your operating system.<br>In addition to the steps Simurgh has taken, we have made outreach to and notified the provider that was hosting the malicious version of Simurgh and they have now taken down the malicious package.</p><p><img src="http://citizenlab.org/wp-content/uploads/2012/05/simurghcompromised.png"></p><p>&nbsp;</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Simurgh is an Iranian stand-alone proxy software for Microsoft Windows. It has been used mainly by Iranian users to bypass censorship since 2009. The downloadable file is less than 1 MB and can be downloaded within a reasonable amount of time even with a slow internet connection, which makes it convenient for many users in Iran. Simurgh runs without prior installation or administrator privileges on the computer and therefore, can be copied and used from a USB flash drive on any shared computer (i.e Internet cafes).<br /><br />Simurgh is available for free download from its official website <a href="https://simurghesabz.net">https://simurghesabz.net</a>. After running the executable file, a user interface (see below) opens. When the user clicks “Start”, Simurgh will attempt to establish a secure connection. The web browser will then open a new window to provide users with a test page, confirming their secure connection originating from a different country.<br /><br />It has recently come to our attention that this software is being recommended and circulated among Syrian Internet users for bypassing censorship in their country. This information led to the discovery and analysis of a back-doored version of this software.<br /><br />The malicious copy will install the Simurgh software, but will also install an undesirable backdoor on the victim’s computer. This software is distributed as “Simurgh-setup.zip” and is identifiable via the following md5 and sha256 hashes:<br /><br />5e2a714fdfc2309af843056e8c5ae7d3 Simurgh-setup.zip<br />9c1a238d87e3bad41708c2e98f753442a224ed9df994e1a34083b2bf336047e5 Simurgh-setup.zip<br /><br />When you unzip this file you are presented with Simurgh-setup.exe<br /><br />379480c807812f3521466f7ff5ffa273 Simurgh-setup.exe<br />e20438a4cf90b67dab613451cc5b3bc35256413461dafdfc35425429d8d478df Simurgh-setup.exe<br /><br />The installer from the most recent legitimate version of Simurgh looks like this:<br /><br /><br /><br />Executing the malicious version starts an installation dialogue which looks like this:<br /><br /><br /><br />In addition to creating a copy of Simurgh in:<br /><br />C:\\Program Files\\Simurgh\\Simurgh.exe<br /><br />The malicious GUI installer drops 4 binaries in C:\\windows\\system32\\drivers:<br /><br />MSINET.OCX – 73da54b69911bdd08ea8bbbd508f815ef7cfa59c4684d75c1c602252ec88ee31<br />richtx32.ocx – 318cc48cbcfaba9592956e4298886823cc5f37626c770d6dadbcd224849680c5<br />shdocvw.dll – fdae6764d190bf265dbc2df352174ccdcc97b1680545e348f1ee1111b0808693<br />lsass.exe – 9320d247dd94f610f31037df8eda75fe79991f126d2e55d35a9532d09ff79896<br /><br />The first three files are legitimate Microsoft system files which appear to be dependencies of the fourth, ‘lsass.exe’. This file is VB6 native code and is installed as an implant to allow persistent access to the victim’s computer and to provide data exfiltration capabilities.<br /><br />As part of the installation the following registry entry is written which ensures the running of the Trojan on logon:<br /><br />HKLM\\software\\microsoft\\windows nt\\currentversion\\winlogon\\shell explorer.exe C:\\WINDOWS\\system32\\drivers\\lsass.exe REG_SZ 0<br /><br />On startup, ‘lsass.exe’ deletes ‘C:\\WINDOWS\\Media\\Windows XP Start.wav’. This file is the ‘navigation’ sound in Explorer, IE, and other applications based on a common set of controls. Since ‘lsass.exe’ uses several of these controls, this is presumably done to prevent ‘clicking’ sounds during the operation of the implant. However, this will also lead to a lack of navigation sounds in other applications, where they would be expected.<br /><br />In addition to ensuring persistence, ‘lsass.exe’ enumerates basic details of the system (IP address, hostname, victim username) and provides keylogging functionality. This binary contains three javascript files which are written out as the text files:<br /><br />C:\\WINDOWS\\system32\\win.txt<br />C:\\WINDOWS\\system32\\1.txt<br />C:\\WINDOWS\\system32\\2.txt<br /><br />These act as basic HTML templates for data mined from the victim’s system (such as keystrokes). Processing of ‘win.txt’ renames it to ‘upl.htm’ which is then sent via HTTP post request to a remote site registered with a Saudi Arabian ISP.<br /><br />If this Trojan is found to be installed on a computer one must consider all online accounts (E-mail, banking, etc.) to have been compromised and it is advised that all online passwords be changed as soon as possible. While this Trojan is detected by most anti-virus software as malicious, AV software cannot always be guaranteed to clean up an infected system and a full re-install is suggested.<br /><br />This Trojan has been specifically crafted to target people attempting to evade government censorship. Given the intended purpose of this software, users must be very careful if they have been infected by this Trojan. Additionally, they should be cautious about installing software, especially circumvention software, from untrusted sources. Where possible, software should be downloaded from trusted official websites over HTTPS. If checksums or cryptographic signatures are provided by the software vendor, these should be checked prior to installation.<br /><br /><br />UPDATED: May 30, 2012<br /><br />Since our report was published, the Simurgh team has taken several important steps to warn their users about this threat.<br /><br />The Simurgh team warns their users directly on the website <a href="https://simurghesabz.net/with">https://simurghesabz.net/with</a> a prominent message in Arabic, Farsi and English about the malicious versions of the software.  They post MD5 checksums of the official binaries and malicious packages, as well as instructions for how to check MD5 checksums against downloaded software.  If you use Simurgh you should immediately compare your installer against the checksums posted on the official site.<br />You can also find these checksums below:<br /><br />Official binaries<br />- simurgh120.20100910.exe – 07855ead46bb15718ee73d513bdb9678<br />- simurgh120beta.20100326.exe – ddecf8ac6c96c148cc7c42183d25baa9<br /><br />Malicious installer packages<br />- Simurgh-setup.zip – 5e2a714fdfc2309af843056e8c5ae7d3<br />- Simurgh-setup.exe – 379480c807812f3521466f7ff5ffa273<br />- Simurgh-setup.exe – 300b0d061dfb9c9c6d7bdeecc74169f1<br />- simurgh[homs-sin.ibda3.org].exe – c8c8817af66312cfcfcb1ddf952f9d98<br /><br />As Sophos has pointed out in a recent blog post on Naked Security <a href="http://nakedsecurity.sophos.com/2012/05/29/spying-trojan-targets-iranian-web-surfers-dissidents/">http://nakedsecurity.sophos.com/2012/05/29/spying-trojan-targets-iranian...</a>, the splash page that loads when Simurgh is initialized to show the users’ IP has been configured to warn users who may be compromised.  If you see a warning you should immediately run an antivirus program to remove the software or for greater assurance, reinstall your operating system.<br />In addition to the steps Simurgh has taken, we have made outreach to and notified the provider that was hosting the malicious version of Simurgh and they have now taken down the malicious package.</p>

<p> </p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_tool' => array(
      'und' => array(
        0 => array(
          'tid' => '147',
        ),
      ),
    ),
    'field_toolbox_categories' => array(
      'und' => array(
        0 => array(
          'tid' => '22',
        ),
        1 => array(
          'tid' => '43',
        ),
      ),
    ),
  );

  $content['vrc_default_page_about'] = (object) array(
    'exported_path' => 'about',
    'title' => 'About us',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'und',
    'created' => '1337907286',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_page_about',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Placeholder for About text</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Placeholder for About text</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['vrc_default_page_become_registered'] = (object) array(
    'title' => 'Become a registered user',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'und',
    'created' => '1339101946',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_page_become_registered',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Becoming a registered user on this site allows you to ask questions, provide answers, view content that is not visible to anonymous users, and to vote on the relevance of various posts.</p><p>If you wish to have full privileges, <a href="/user/register">you must register with a valid email address here.</a></p><p>If you want to remain anonymous, but also be a registered user, <a href="/profiles/vrc/files/anon.php">you may register here.</a></p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Becoming a registered user on this site allows you to ask questions, provide answers, view content that is not visible to anonymous users, and to vote on the relevance of various posts.</p>
<p>If you wish to have full privileges, <a href="/user/register">you must register with a valid email address here.</a></p>
<p>If you want to remain anonymous, but also be a registered user, <a href="/profiles/vrc/files/anon.php">you may register here.</a></p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );


  $content['vrc_default_question_anon_phone'] = (object) array(
    'title' => 'What is the best way to collaborate anonymously over the phone?',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'question',
    'language' => 'und',
    'created' => '1339523799',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_question_anon_phone',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>I\'m trying to organize an event and need to collaborate with others in a secure manner. Are there any tools that will allow me to do this?</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>I\'m trying to organize an event and need to collaborate with others in a secure manner. Are there any tools that will allow me to do this?</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_answer_count' => array(
      'en' => array(
        0 => array(
          'count' => '2',
        ),
      ),
      'und' => array(
        0 => array(
          'count' => '2',
        ),
      ),
    ),
    'field_notify_p' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
    'field_question_locked_p' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
    'field_tool' => array(
      'und' => array(
        0 => array(
          'tid' => '114',
        ),
        1 => array(
          'tid' => '111',
        ),
        2 => array(
          'tid' => '131',
        ),
      ),
    ),
    'field_toolbox_categories' => array(
      'und' => array(
        0 => array(
          'tid' => '34',
        ),
        1 => array(
          'tid' => '43',
        ),
      ),
    ),
  );

  $content['vrc_default_question_check_infection'] = (object) array(
    'title' => 'Ho to check if my computer is infected?',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'question',
    'language' => 'und',
    'created' => '1339670800',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_question_check_infection',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Because it is slow.</p><p>Malware</p><p>Virus</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Because it is slow.</p>
<p>Malware</p>
<p>Virus</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_answer_count' => array(
      'en' => array(
        0 => array(
          'count' => '0',
        ),
      ),
      'und' => array(
        0 => array(
          'count' => '0',
        ),
      ),
    ),
    'field_notify_p' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
    'field_question_locked_p' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
    'field_toolbox_categories' => array(
      'und' => array(
        0 => array(
          'tid' => '90',
        ),
      ),
    ),
  );

  $content['vrc_default_question_drupal_win'] = (object) array(
    'title' => 'How do I install Drupal on Windows?',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'question',
    'language' => 'und',
    'created' => '1337952173',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_question_drupal_win',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>I want to install Drupal on my Windows 7 laptop.</p><p>How can I do that?</p><p>&nbsp;</p><p>Blah blah blah</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>I want to install Drupal on my Windows 7 laptop.</p>
<p>How can I do that?</p>
<p> </p>
<p>Blah blah blah</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_answer_count' => array(
      'en' => array(
        0 => array(
          'count' => '0',
        ),
      ),
      'und' => array(
        0 => array(
          'count' => '0',
        ),
      ),
    ),
    'field_notify_p' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
    'field_question_locked_p' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
    'field_tool' => array(
      'und' => array(
        0 => array(
          'tid' => '70',
        ),
      ),
    ),
    'field_toolbox_categories' => array(
      'und' => array(
        0 => array(
          'tid' => '84',
        ),
        1 => array(
          'tid' => '85',
        ),
      ),
    ),
  );

  $content['vrc_default_question_facebook_chat'] = (object) array(
    'title' => 'Is facebook chat secure?',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'question',
    'language' => 'und',
    'created' => '1339600168',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_question_facebook_chat',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>HTTPS</p><p>facebook</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>HTTPS</p>
<p>facebook</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_answer_count' => array(
      'en' => array(
        0 => array(
          'count' => '1',
        ),
      ),
      'und' => array(
        0 => array(
          'count' => '1',
        ),
      ),
    ),
    'field_notify_p' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
    'field_question_locked_p' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
  );

  $content['vrc_default_question_ff_sms'] = (object) array(
    'title' => 'Freedom Fone to send SMS?',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'question',
    'language' => 'und',
    'created' => '1337953541',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_question_ff_sms',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>How do I do that?</p><p>blah blah blah</p><p>words for the search:</p><p>SMS</p><p>Mobile</p><p>Phone</p><p>Freedom</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>How do I do that?</p>
<p>blah blah blah</p>
<p>words for the search:</p>
<p>SMS</p>
<p>Mobile</p>
<p>Phone</p>
<p>Freedom</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_answer_count' => array(
      'en' => array(
        0 => array(
          'count' => '0',
        ),
      ),
      'und' => array(
        0 => array(
          'count' => '0',
        ),
      ),
    ),
    'field_notify_p' => array(
      'und' => array(
        0 => array(
          'value' => '1',
        ),
      ),
    ),
    'field_question_locked_p' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
  );

  $content['vrc_default_question_how_ask'] = (object) array(
    'title' => 'How do I ask a question?',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'question',
    'language' => 'und',
    'created' => '1338826882',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_question_how_ask',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>I don\'t know how to ask a question.</p><p>How do I start the process of asking a question?</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>I don\'t know how to ask a question.</p>
<p>How do I start the process of asking a question?</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_answer_count' => array(
      'en' => array(
        0 => array(
          'count' => '0',
        ),
      ),
      'und' => array(
        0 => array(
          'count' => '0',
        ),
      ),
    ),
    'field_notify_p' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
    'field_question_locked_p' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
  );

  $content['vrc_default_question_https'] = (object) array(
    'title' => 'What are good methods to improve password management?',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'question',
    'language' => 'und',
    'created' => '1340030107',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_question_https',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>I want to improve my personal password management. I usually use secure passwords, but overuse them for too many different places.<br><br>My questions:</p><ul><li>What methods do you use to create passwords, e.g. for different online sites/logins?</li><li>What methods do you use to remember those passwords? Memory? Pen&amp;Paper? Software storage?</li><li>Is there some good way to store my passwords somewhere, so I can always have access to them when I need them (e.g. a webbased solution on my own server) but at the same way keep them away from unwanted access?</li></ul><p>Edit: Someone on another site mentioned http://passwordmaker.org/. Have you had any good or bad experiences with that software?</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>I want to improve my personal password management. I usually use secure passwords, but overuse them for too many different places.<br /><br />My questions:</p>
<ul><li>What methods do you use to create passwords, e.g. for different online sites/logins?</li>
<li>What methods do you use to remember those passwords? Memory? Pen&amp;Paper? Software storage?</li>
<li>Is there some good way to store my passwords somewhere, so I can always have access to them when I need them (e.g. a webbased solution on my own server) but at the same way keep them away from unwanted access?</li>
</ul><p>Edit: Someone on another site mentioned <a href="http://passwordmaker.org/">http://passwordmaker.org/</a>. Have you had any good or bad experiences with that software?</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_answer_count' => array(
      'en' => array(
        0 => array(
          'count' => '4',
        ),
      ),
      'und' => array(
        0 => array(
          'count' => '4',
        ),
      ),
    ),
    'field_notify_p' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
    'field_question_locked_p' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
    'field_toolbox_categories' => array(
      'und' => array(
        0 => array(
          'tid' => '43',
        ),
      ),
    ),
  );

  $content['vrc_default_question_malware'] = (object) array(
    'title' => 'How to install anti-virus without administrative rights?',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'question',
    'language' => 'und',
    'created' => '1339599654',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_question_malware',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>In situations where the PC has no CD drive and operating a guest account with limited privileges, how to install an anti-virus tool? Malware is not permitting to open any anti-virus vendor\'s site and also blocking all sites opened via Google that contain the term "online scan".<br><br>I somehow managed to download through mirror links with a Download Manager as the browser\'s download was blocked by the malware. But the problem didn\'t end there. After I downloaded the anti-virus tool, it failed to install because it needed administrative rights. The user didn\'t know the administrator password.<br><br>I tried via command line with runas, but it also asks for the administrator password. The OS is Windows XP.<br><br>How to deal with these type of malwares if there is a scenario that CD drive is not there only Internet is there?</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>In situations where the PC has no CD drive and operating a guest account with limited privileges, how to install an anti-virus tool? Malware is not permitting to open any anti-virus vendor\'s site and also blocking all sites opened via Google that contain the term "online scan".<br /><br />I somehow managed to download through mirror links with a Download Manager as the browser\'s download was blocked by the malware. But the problem didn\'t end there. After I downloaded the anti-virus tool, it failed to install because it needed administrative rights. The user didn\'t know the administrator password.<br /><br />I tried via command line with runas, but it also asks for the administrator password. The OS is Windows XP.<br /><br />How to deal with these type of malwares if there is a scenario that CD drive is not there only Internet is there?</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_answer_count' => array(
      'en' => array(
        0 => array(
          'count' => '5',
        ),
      ),
      'und' => array(
        0 => array(
          'count' => '5',
        ),
      ),
    ),
    'field_notify_p' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
    'field_question_locked_p' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
    'field_toolbox_categories' => array(
      'und' => array(
        0 => array(
          'tid' => '46',
        ),
      ),
    ),
  );

  $content['vrc_default_question_simurgh'] = (object) array(
    'title' => 'Is Simurgh safe?',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'question',
    'language' => 'und',
    'created' => '1339600796',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_question_simurgh',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Has it been compromized by hacker?</p><p>Can I use Simurgh to bypass censorship?</p><p>Is simurgh a VPN?</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Has it been compromized by hacker?</p>
<p>Can I use Simurgh to bypass censorship?</p>
<p>Is simurgh a VPN?</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_answer_count' => array(
      'en' => array(
        0 => array(
          'count' => '0',
        ),
      ),
      'und' => array(
        0 => array(
          'count' => '0',
        ),
      ),
    ),
    'field_notify_p' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
    'field_question_locked_p' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
    'field_tool' => array(
      'und' => array(
        0 => array(
          'tid' => '72',
        ),
      ),
    ),
  );

  $content['vrc_default_question_tor_relay'] = (object) array(
    'title' => 'Address of Tor Relays?',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'question',
    'language' => 'und',
    'created' => '1339677496',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_question_tor_relay',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>I want address of relay nodes for Tor on obfsproxy.</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>I want address of relay nodes for Tor on obfsproxy.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_answer_count' => array(
      'en' => array(
        0 => array(
          'count' => '3',
        ),
      ),
      'und' => array(
        0 => array(
          'count' => '3',
        ),
      ),
    ),
    'field_notify_p' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
    'field_question_locked_p' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
    'field_tool' => array(
      'und' => array(
        0 => array(
          'tid' => '78',
        ),
      ),
    ),
    'field_toolbox_categories' => array(
      'und' => array(
        0 => array(
          'tid' => '22',
        ),
        1 => array(
          'tid' => '43',
        ),
      ),
    ),
  );

  $content['vrc_default_question_tor_tails'] = (object) array(
    'title' => 'How do you use Tor on Tails?',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'question',
    'language' => 'und',
    'created' => '1338906376',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'vrc_default_question_tor_tails',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Tails is live-USB linux software.</p><p>How can I ensure I\'m using Tor?</p>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Tails is live-USB linux software.</p>
<p>How can I ensure I\'m using Tor?</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_answer_count' => array(
      'en' => array(
        0 => array(
          'count' => '0',
        ),
      ),
      'und' => array(
        0 => array(
          'count' => '0',
        ),
      ),
    ),
    'field_notify_p' => array(
      'und' => array(
        0 => array(
          'value' => '1',
        ),
      ),
    ),
    'field_question_locked_p' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
    'field_tool' => array(
      'und' => array(
        0 => array(
          'tid' => '69',
        ),
      ),
    ),
  );

return $content;
}
