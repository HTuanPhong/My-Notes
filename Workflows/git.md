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
## initialize
```shell
mount -t ios-unsafe . obsidian
```
then choose vault
## normal use
pull changes with
```shell
cd ~/obsidian
git pull
```
Work away until push
```shell
git add .
git commit -m "vault mobile backup Comments"
git push
```