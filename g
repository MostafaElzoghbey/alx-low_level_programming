#!/bin/bash
mv $(find . -executable -type f) /home/sasa/alx-low_level_programming/executable_files
git add .
git commit -m "done"
git push
