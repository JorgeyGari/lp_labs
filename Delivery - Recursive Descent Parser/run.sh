#!/bin/sh
bison drLL.y -d
gcc drLL.tab.c -o drLL
./drLL