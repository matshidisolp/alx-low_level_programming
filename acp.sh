#!/usr/bin/env bash
#adds, commits and pushes to remote repo

git add .
echo "enter your commit message"
read -r message
git commit -m "$message"
git push
