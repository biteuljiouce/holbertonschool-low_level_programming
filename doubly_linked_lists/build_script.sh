#!/bin/bash

if [ $# -lt 1 ]; then
    echo "Usage: $0 <filename>"
    exit 1
fi

first_char=${1:0:1}

# Compilation avec gcc
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 "$1.c" "$first_char"-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o build/"$1" && ./build/"$1"

# check style and doc
../betty-doc.pl "$1.c"
../betty-style.pl "$1.c"
