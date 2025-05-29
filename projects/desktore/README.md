Official KukuhPx Site

GIT COMMAND
Checking GIT Version:
> git -v
Creating a New GIT Repo:
> git init
Checking Staging Files:
> git status
Adding Files to Staging Environment:
> git add [file name].[file format]
> git add --all
> git add -A
> git add *
> git add .
Commiting All Staged Files:
> git commit -m ["your message"]
> git commit -am ["your message"]
Checking Braanch You Owned:	
> git branch
Creating a New Repo Branch:
> git branch -M [new branch name]	
> git branch [branch name]
Switching Repo Branch:
> git checkout [your branch name]
Changing Repo Branch's Name:
> git branch -m [new branch's name]
Deleting Repo Branch's Name:
> git branch -d [branch's name]
Deleting a Folder:
> git rm -r [folder's name]

GITHUB COMMAND
Changing Remote URL:
1. > git remote set-url origin [new remote url].
2. > git fetch origin master.
3. > git pull origin master.
4. > git push origin master.

Checking The Remote You Owned:
> git remote -v
Creating a GitHub Remote:
> git remote add [remote name] [remote url]
Changing a Remote Name:
> git remote rename [old remote name] [new remote name]
Deleting a Remote:
> git remote remove [remote name]
Showing Remote Information:
> git remote show [remote name]
Changing Remote URL:
> git remote set-url [remote name] [remote url]
Uploading Your Repository to GitHub:
> git push [remote name] [branch name]
Forcing Upload Your Repository to GitHub:
> git push -f [remote name] [branch name]
Downloading Your Commit without Merge Your Local Branch:
> git pull [remote name] [branch name]
Downloading Your Commit with Merge Your Local Branch:
> git fetch [remote name] [branch name]
Downloading Your Repository in GitHub:
> git clone [your git url in github]

HEROKU COMMAND
Login to Heroku Server:
> heroku login
> heroku login -i // Use this if heroku login doesn't work.
Checking Heroku Version:
> heroku -v
Creating Heroku App with Unique Name:
> heroku create
Creating Heroku App with Current Name:
> heroku [app name]
Creating Heroku Remote:
> heroku git:remote -a [app name]
Updating Heroku CLI Version.
> heroku update
Uploading Your Repository to Heroku Server.
> git push heroku [branch name]
Changing Heroku App Name/URL of Web.
> heroku apps:name [new app name]

UPLOADING REPO TO HEROKU SERVER
1. Open your terminal and go to ypur inside project folder.
2. If you haven't create the repo in your project, create the repo with using git command:
> git init
3. Crete 3 files:
	1. index.html
        // just create html file ussualy
	2. index.php
        <?php include_once('index.html'); ?>
	3. composer.json
        {}
4. Add all file to stage:
    > git add --all
5. Commit all staged files:
    > git commit -m ['your message"]
6. Login to your Heroku account with command:
    > heroku login
    (If there appear "ip mismatch" message in browser, use command [heroku login -i])
7. Click press any key to open your browser.
8. Click login button, before you click the button, you must log in to the Heroku website.
9. Close your browser and back to terminal.
10. Crete heroku app with command below, choose one cmmmand:
    > heroku create
11. There will be 2 outputs:
	1. [unique app name].herokuapp.com
	2. [remote url]
12. Upload your repo to heroku:
    > git push heroku [your repo name]
13. Wait until finish.
14. Done.