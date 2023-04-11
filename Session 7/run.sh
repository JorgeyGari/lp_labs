#!/bin/sh
bison calc7.y
gcc calc7.tab.c -o calc7
./calc7