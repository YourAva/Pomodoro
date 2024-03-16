#!/bin/bash

SRC_DIR=src
BUILD_DIR=build

# Compile the source files
gcc -o $BUILD_DIR/build $SRC_DIR/main.c -I$SRC_DIR

# Check if compilation was successful
if [ $? -ne 0 ]; then
    echo "Compilation failed."
    exit 1
fi

echo "Compilation successful."
