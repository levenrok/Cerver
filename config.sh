#!/bin/sh

set -e

# Compiler (/usr/bin/gcc || /usr/bin/clang)
readonly CC=/usr/bin/clang

# Generator (Ninja || Unix Makefiles)
readonly GEN=Ninja

mkdir -p build

cmake -DCMAKE_C_COMPILER=$CC -G $GEN -S . -B build