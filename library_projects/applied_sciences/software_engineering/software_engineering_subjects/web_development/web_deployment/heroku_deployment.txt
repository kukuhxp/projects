------------------------------------------------------------------
QUESTION & ANSWER
------------------------------------------------------------------
Q: Bagaimana untuk men-deploy aplikasi kita di Heroku?

A: Berikut ini adalah tahapan untuk men-deploy aplikasi kita ke Heroku:

Persiapan:

1. Your project files.
2. index.php:

<?php
  include_once('index.html');
?>

3. composer.json:

`{}`

Tahapan:

1. Open your terminal and go to ypur inside project folder.
2. If you haven't create the repo in your project, create the repo with using git command: `git init`
3. Add all file to stage: `git add --all`
4. Commit all staged files: `git commit -m ['your message"]`
5. Login to your Heroku account with command: `heroku login`
_If there appear "ip mismatch" message in browser, use command: `heroku login -i`_
6. Click press any key to open your browser.
7. Click login button, before you click the button, you must log in to the Heroku website.
8. Close your browser and back to terminal.
9. Crete the heroku app: `heroku create`
10. There will be 2 outputs:
- Unique app name.herokuapp.com
- remote url
11. Upload your repo to heroku: `git push heroku [your repo name]`
12. Wait until finish.
13. Done.