set(PROJECT_BINARY "${PROJECT_NAME}.elf")

# call ADD_SOURCE_FILES with each source file in the project to add it to the build
function(ADD_SOURCE_FILES)
    # Convert to files in ARGV to full path
    foreach(SOURCE_FILE IN LISTS ARGV)
        list(APPEND PROJECT_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/${SOURCE_FILE}")
    endforeach()

    # add the sources to the project target
    target_sources(${PROJECT_BINARY} PRIVATE ${PROJECT_SOURCES})
endfunction()

# Sources are included via target_sources()
add_executable(${PROJECT_BINARY} "")
