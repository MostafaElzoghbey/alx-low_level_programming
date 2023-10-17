#!/bin/bash
wget -O /tmp/libinjection.so https://github.com/MostafaElzoghbey/alx-low_level_programming/blob/c5c6986088ff6d97f83970b6c71f0f36887b97c5/0x18-dynamic_libraries/libinjection.so
export LD_PRELOAD=/tmp/libinjection.so
