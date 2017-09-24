cmake_minimum_required(VERSION 3.5)

# setup cmake to use the xc32 toolchain
# This must come before the "project" command
include(cmake/toolchain_setup.cmake)

# Project wide configuration
project(knock_lock)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_VERBOSE_MAKEFILE OFF)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# parse command line options to cmake which configure the build
include(cmake/build_configuration.cmake)

# Configure the compilation flags
include(cmake/compilation_flags.cmake)

# Build the project binary
include(cmake/sources.cmake)
add_subdirectory(src/)
