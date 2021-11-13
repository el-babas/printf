#!/bin/bash
valgrind --leak-check=full -s --track-origins=yes ./a.out
