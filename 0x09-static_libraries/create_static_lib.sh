#!/bin/bash
gcc -wall -wextra -werror -pedantics -c *.c
ar rc liball.a *.o
