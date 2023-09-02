#!/bin/bash

# Get all the .c files in the current directory
c_files=$(ls *.c)

# Compile each .c file into an object file
for file in $c_files; do
  gcc -c $file -o ${file%.c}.o
  if [ $? -ne 0 ]; then
    echo "Compilation failed for $file"
    exit 1
  fi
done

# Create the static library
ar rcs liball.a *.o

# Clean up the object files
rm *.o
