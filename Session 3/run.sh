#!/bin/sh
bison calc3.y
gcc calc3.tab.c -o calc3
./calc3