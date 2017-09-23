# Compilation Flags
set(ARCH_FLAGS    "-mprocessor=32MM0256GPM064")
set(WARNING_FLAGS "-Wall -Wextra")
set(GC_FLAGS      "-ffunction-sections -fdata-sections")

set(DEBUG_EXTRA_FLAGS    "-g -O0")
set(RELEASE_EXTRA_FLAGS  "-Werror -02")

# Default flags for all build types
set(CMAKE_ASM_FLAGS "${ARCH_FLAGS} ${GC_FLAGS}")
set(CMAKE_C_FLAGS   "${ARCH_FLAGS} ${WARNING_FLAGS} ${GC_FLAGS}")

# Extra flags for specific build types
set(CMAKE_ASM_FLAGS_DEBUG "${DEBUG_EXTRA_FLAGS}")
set(CMAKE_C_FLAGS_DEBUG   "${DEBUG_EXTRA_FLAGS}")

set(CMAKE_ASM_FLAGS_RELEASE "${RELEASE_EXTRA_FLAGS}")
set(CMAKE_C_FLAGS_RELEASE   "${RELEASE_EXTRA_FLAGS}")

# Linker Flags
set(LINKER_GC_FLAGS             "--gc-sections")
set(LINKER_CODE_AREA_FLAGS      "--no-code-in-dinit,--no-dinit-in-serial-mem")
set(LINKER_MAP_FLAGS            "-Map=${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${PROJECT_NAME}.map")
set(LINKER_MEMORY_SUMMARY_FLAGS "--memorysummary,${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${PROJECT_NAME}-memoryfile.xml")

set(CMAKE_EXE_LINKER_FLAGS
"-Wl,${LINKER_GC_FLAGS} \
-Wl,${LINKER_CODE_AREA_FLAGS} \
-Wl,${LINKER_MAP_FLAGS} \
-Wl,${LINKER_MEMORY_SUMMARY_FLAGS}"
)

