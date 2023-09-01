#!/bin/bash
gcc-waal-pedantic-werror-wextra -c *.c
ar rc liball.a *.o
ranlib liball.a
