set(PROJECT_BINARY "${PROJECT_NAME}.elf")

include_directories(SYSTEM /opt/microchip/xc32/v1.44/pic32mx/include/ /opt/microchip/xc32/v1.44/lib/gcc/pic32mx/4.8.3/include/)

# call ADD_SOURCE_FILES with each source file in the project to add it to the build
function(add_source_files)
    # Convert to files in ARGV to full path
    foreach(SOURCE_FILE IN LISTS ARGV)
        list(APPEND PROJECT_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/${SOURCE_FILE}")
    endforeach()

    # add the sources to the project target
    target_sources(${PROJECT_BINARY} PRIVATE ${PROJECT_SOURCES})
endfunction()

# Sources are included via target_sources()
add_executable(${PROJECT_BINARY} "")

# Convert the .elf to .hex
add_custom_command(
    TARGET ${PROJECT_BINARY} POST_BUILD
    COMMENT "Creating ${PROJECT_NAME}.hex from ${PROJECT_BINARY}"
    COMMAND ${BIN2HEX} ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${PROJECT_BINARY}
)

# Save dissasembly of compiled binary
add_custom_command(
    TARGET ${PROJECT_BINARY} POST_BUILD
    COMMENT "Saving Assembly Dump to ${PROJECT_NAME}.lst"
    COMMAND
        ${OBJDUMP} -h -S -C
        ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${PROJECT_BINARY} >
        ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${PROJECT_NAME}.lst
)

# Print size info
add_custom_command(
    TARGET ${PROJECT_BINARY} POST_BUILD
    COMMENT "Binary Size Information (ROM: text + data, RAM: bss + data):"
    COMMAND
        ${SIZE} ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${PROJECT_BINARY}
)
