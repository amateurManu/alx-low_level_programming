#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
