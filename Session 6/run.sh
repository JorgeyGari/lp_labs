#!/bin/sh
bison calc6.y
gcc calc6.tab.c -o calc6
./calc6