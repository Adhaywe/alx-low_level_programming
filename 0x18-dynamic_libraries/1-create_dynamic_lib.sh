#!/bin/bash
gcc -fPIC -c *.c -o *.o
gcc -shared all.o -o
