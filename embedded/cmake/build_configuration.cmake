# Build type can be specified with "-DBUILD_TYPE={BUILD}"
# Defaults to "Debug"
set(BUILD_TYPE_OPTIONS "Debug|Release")
set(BUILD_TYPE "Debug" CACHE STRING "Select Build Type: {${BUILD_TYPE_OPTIONS}}")
if(NOT BUILD_TYPE MATCHES ${BUILD_TYPE_OPTIONS})
    message(FATAL_ERROR "Build Type \"${BUILD_TYPE}\" not valid, try -DBUILD_TYPE={${BUILD_TYPE_OPTIONS}}")
else()
    set(CMAKE_BUILD_TYPE ${BUILD_TYPE})
endif()

message(STATUS
"Building Image with the following configuration:
    * Build Type:\t\"${CMAKE_BUILD_TYPE}\""
)

