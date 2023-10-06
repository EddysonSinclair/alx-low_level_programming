#!/bin/bash

# Compile each .c file into a .o file
for file in *.c; do
    gcc -c "$file" -o "${file%.c}.o"
done

# Create the static library liball.a from all .o files
ar rc liball.a *.o

# Clean up the temporary .o files
rm -f *.o

