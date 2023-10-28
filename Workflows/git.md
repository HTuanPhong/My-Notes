---
title: Git workflows
todo: need headings.
---
## General
```shell
git init -b main
```
Create .git folder and name the first branch main.
```shell
git add .
```
Add all file from local repository and stage them for commit, in order to remove after added do ```git reset HEAD <FILENAME>```.
```shell
git commit -m "Commit comments"
```
Commits the tracked changes and prepares them to be pushed to a remote repository.
![[git Fig1.png]]
```shell
git remote add origin <REMOTE_URL>
```
Add remote repo link to local repo.
```shell
git push origin main
```
Pushed to GitHub.