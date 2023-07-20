#!/bin/bash
find . -executable -type f >>.gitignore
T=$(mktemp); (cat .gitignore; find . -executable -type f | sed -e 's%^\./%%') | sort | uniq >$T; mv $T .gitignore
git add .
git commit -m "done"
git push
