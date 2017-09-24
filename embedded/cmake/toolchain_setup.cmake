# Sets CMAKE to cross-compile mode
set(CMAKE_SYSTEM_NAME Generic)

function(find_cross_compiler VAR BIN)
    if(NOT ${VAR})
        find_program(${VAR} ${BIN})
        if(${${VAR}} MATCHES "NOTFOUND")
            message(FATAL_ERROR "Could not find ${VAR}: ${BIN}")
        else()
            message(STATUS "Found ${VAR}: ${${VAR}}")
        endif()
    endif()
endfunction()

# Find the cross-compilation tools
find_cross_compiler(CC      "xc32-gcc")
find_cross_compiler(CXX     "xc32-g++")
find_cross_compiler(AS      "xc32-as")
find_cross_compiler(AR      "xc32-ar")
find_cross_compiler(OBJDUMP "xc32-objdump")
find_cross_compiler(SIZE    "xc32-size")
find_cross_compiler(BIN2HEX "xc32-bin2hex")

# Override the compiler, assembler, and archiver
include(CMakeForceCompiler) # This changes in later versions of cmake (>=3.6)
CMAKE_FORCE_C_COMPILER(${CC} gcc)
CMAKE_FORCE_CXX_COMPILER(${CXX} gcc)

set(CMAKE_ASM_COMPILER ${AS})
enable_language(ASM)

set(CMAKE_AR ${AR})
