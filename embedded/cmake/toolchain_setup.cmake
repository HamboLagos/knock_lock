# Sets CMAKE to cross-compile mode
set(CMAKE_SYSTEM_NAME Generic)

# Find the compilation binaries
find_program(COMPILE_BIN_C_COMPILER "xc32-gcc")
if(${COMPILE_BIN_C_COMPILER} MATCHES "NOTFOUND")
    message(FATAL_ERROR "Could not find C compiler: xc32-gcc")
else()
    message(STATUS "Found C compiler: ${COMPILE_BIN_C_COMPILER}")
endif()

find_program(COMPILE_BIN_CXX_COMPILER "xc32-g++")
if(${COMPILE_BIN_CXX_COMPILER} MATCHES "NOTFOUND")
    message(FATAL_ERROR "Could not find CXX compiler: xc32-g++")
else()
    message(STATUS "Found CXX compiler: ${COMPILE_BIN_CXX_COMPILER}")
endif()

find_program(COMPILE_BIN_ASSEMBLER  "xc32-as")
if(${COMPILE_BIN_ASSEMBLER} MATCHES "NOTFOUND")
    message(FATAL_ERROR "Could not find assembler: xc32-as")
else()
    message(STATUS "Found assembler: ${COMPILE_BIN_ASSEMBLER}")
endif()

find_program(COMPILE_BIN_ARCHIVER "xc32-ar")
if(${COMPILE_BIN_ARCHIVER} MATCHES "NOTFOUND")
    message(FATAL_ERROR "Could not find archiver: xc32-ar")
else()
    message(STATUS "Found archiver: ${COMPILE_BIN_ARCHIVER}")
endif()

find_program(COMPILE_BIN_OBJDUMP "xc32-objdump")
if(${COMPILE_BIN_OBJDUMP} MATCHES "NOTFOUND")
    message(FATAL_ERROR "Could not find objdump: xc32-objdump")
else()
    message(STATUS "Found objdump: ${COMPILE_BIN_OBJDUMP}")
endif()

find_program(COMPILE_BIN_SIZE "xc32-size")
if(${COMPILE_BIN_SIZE} MATCHES "NOTFOUND")
    message(FATAL_ERROR "Could not find size: xc32-size")
else()
    message(STATUS "Found size: ${COMPILE_BIN_SIZE}")
endif()

# Override the compiler, assembler, and archiver
include(CMakeForceCompiler) # This changes in later versions of cmake (>=3.6)
CMAKE_FORCE_C_COMPILER(${COMPILE_BIN_C_COMPILER} gcc)
CMAKE_FORCE_CXX_COMPILER(${COMPILE_BIN_CXX_COMPILER} gcc)

set(CMAKE_ASM_COMPILER ${COMPILE_BIN_ASSEMBLER})
enable_language(ASM)

set(CMAKE_AR ${COMPILE_BIN_ARCHIVER})
