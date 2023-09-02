#!/bin/bash

# Compile all .c files in current directory into object files
gcc -c *.c

# Create the static library liball.a from the object files
ar -rc liball.a *.o

# List the contents of the static library
ar -t liball.a

# Clean up the object files
rm *.o
