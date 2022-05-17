#!/bin/bash
gcc -g -fPIC -Wall -pedantic -Werror -Wextra *.c -shared -o liball.so
