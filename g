#!/bin/bash
find . -executable -type f >>/workspaces/alx-low_level_programming/.gitignore
T=$(mktemp); (cat /workspaces/alx-low_level_programming/.gitignore; find . -executable -type f | sed -e 's%^\./%%') | sort | uniq >$T; mv $T /workspaces/alx-low_level_programming/.gitignore
git add .
git commit -m "done"
git push
