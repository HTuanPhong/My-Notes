---
title: Git workflows
todo: need headings.
---
# Desktop
## initialize
```shell
git init -b main
```
Create .git folder and name the first branch main.
![[git Fig1.png]]
```shell
git remote add origin <REMOTE_URL>
```
Add remote repo link to local repo.
## normal use
```shell
git add .
```
Add all file from local repository and stage them for commit, in order to remove after added do ```git reset HEAD <FILENAME>```.
```shell
git commit -m "vault desktop backup Comments"
```
Commits the tracked changes and prepares them to be pushed to a remote repository.
```shell
git push origin main
```
Pushed to GitHub.

# IOS
## normal use
pull changes with
```shell
jump obsidian
cd Notes
lg2 pull origin
```
Work away until push
```shell
jump obsidian
cd Notes
lg2 add .
lg2 commit -m "vault mobile backup Comments"
lg2 push origin
```

# Git/Resolving Push Conflicts
Sometimes, when you try and push your commits with `git push`, you'll see a message like this:
```
$ git push
To https://github.com/siluria/transport.git
Merge branch 'master' of https://github.com/siluria/transport
 ! [rejected]        master -> master (fetch first)
error: failed to push some refs to 'https://github.com/siluria/transport.git'
hint: Updates were rejected because the remote contains work that you do
hint: not have locally. This is usually caused by another repository pushing
hint: to the same ref. You may want to first merge the remote changes (e.g.,
hint: 'git pull') before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
```

Then, if you try and pull the latest changes with `git pull`, you might see a message like this:
```
$ git pull
remote: Counting objects: 8, done.
remote: Compressing objects: 100% (8/8), done.
remote: Total 8 (delta 0), reused 2 (delta 0)
Unpacking objects: 100% (8/8), done.
From https://github.com/siluria/transport
   153782f..10e0b68  master     -> origin/master
Auto-merging twodomain/SubdomainCatalyst.py
Auto-merging twodomain/Interface.py
Auto-merging twodomain/Driver.py
CONFLICT (content): Merge conflict in twodomain/Driver.py
Automatic merge failed; fix conflicts and then commit the result.
```

In this case, you can edit the file with the conflict, in this case, `Driver.py`. You'll see some lines like this:
```
<<<<<<< HEAD
old code
=======
new code
>>>>>>> iss53
```

Edit this file to merge the code however you decide. Once you do that, you'll run `git add` on the code with the file, which tells git you have resolved the conflict.
```
$ git add Driver.py
```

Then - this is key - you run `git commit` with NO OTHER ARGUMENTS.

If you try and add arguments, i.e., specifying which file to commit, or adding a commit message, you'll see an error like this:
```
$ git commit Driver.py -m 'resolving conflict.'
fatal: cannot do a partial commit during a merge.
```

Just run `git commit` with no arguments:
```
$ git commit
[master d1d98ed] Merge branch 'master' of https://github.com/siluria/transport
```

Now you should be able to run `git push` with no problems:
```
$ git push
Counting objects: 23, done.
Delta compression using up to 8 threads.
Compressing objects: 100% (12/12), done.
Writing objects: 100% (12/12), 1.48 KiB | 0 bytes/s, done.
Total 12 (delta 10), reused 0 (delta 0)
To https://github.com/siluria/transport.git
   10e0b68..d1d98ed  master -> master
```
