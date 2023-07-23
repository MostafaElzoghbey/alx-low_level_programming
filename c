#!/bin/bash
NAME=$@
gcc ${NAME:0} -Wall -Werror -Wextra -pedantic -std=gnu89 -o ${NAME:0:(-2)}
./${NAME:0:(-2)}
rm -r ${NAME:0:(-2)}
