## Getting Started

### Prerequisites

* GCC or Clang
* CMake
* GNU Make or Ninja (project supports both)
* [libsocket](https://github.com/dermesser/libsocket) Library

### Configuration

1. Choose the nessasary compiler and the generator in the `config.sh` file
  ```sh
  #!/bin/sh

  set -e

  # Compiler (/usr/bin/gcc || /usr/bin/clang)
  readonly CC=/usr/bin/clang

  # Generator (Ninja || Unix Makefiles)
  readonly GEN=Ninja

  mkdir -p build

  cmake -DCMAKE_C_COMPILER=$CC -G $GEN -S . -B build
  ```
2. Run the `config.sh` file
  ```sh
  sh config.sh
  ```

### Building

1. move into the build directory
  ```sh
  cd build
  ```

2. Move to the build directory and build
  ```sh
  make
  ```
&nbsp;&nbsp;&nbsp;or

  ```sh
  ninja
  ```