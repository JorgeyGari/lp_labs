#!/bin/sh
bison trad1.y
gcc trad1.tab.c -o trad1
./trad1