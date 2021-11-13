#!/bin/bash

task=$1

gcc -g -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format ../*.c *.c -o a.out;

./a.out $task
