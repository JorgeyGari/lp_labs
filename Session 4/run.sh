#!/bin/sh
bison calc4.y -d
flex calc4.lex
gcc lex.yy.c calc4.tab.c -o calc4