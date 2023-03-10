#!/bin/bash

# This script creates a static library called liball.a from all .c files
# in the current directory using the functions specified in the header file main.h

# Remove any existing object files and library
rm -f *.o
rm -f liball.a

# Compile each .c file and create corresponding object file
for file in *.c
do
    gcc -Wall -Werror -Wextra -pedantic -c "$file" -o "${file%.c}.o"
done

# Create the static library from all object files
ar -rc liball.a *.o

# Index the library
ranlib liball.a

# Clean up object files
rm -f *.o

