#!/bin/bash

bison trad1.y
gcc trad1.tab.c -o trad1
./trad1 < $1 > output.l
clisp output.l > output.txt
./trad3 < $1 > output3.l
clisp output3.l > output3.txt
diff output.txt output3.txt
