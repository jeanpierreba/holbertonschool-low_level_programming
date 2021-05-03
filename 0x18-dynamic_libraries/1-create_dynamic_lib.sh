#!/bin/bash
gcc *.c -c -fPIC -Wall
gcc *.o -shared -o liball.so
