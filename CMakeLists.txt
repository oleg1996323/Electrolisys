cmake_minimum_required(VERSION 3.8 FATAL_ERROR)
project(PhysProperties)

set(CMAKE_CXX_STANDARD 20)
if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    set(
        CMAKE_CXX_FLAGS_DEBUG
        "${CMAKE_CXX_FLAGS_DEBUG} /JMC"
    )
else()
    set(
        CMAKE_CXX_FLAGS
        "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -Wno-unused-parameter -Wno-implicit-fallthrough"
    )
endif()

include(${CMAKE_CURRENT_SOURCE_DIR}/grammar/CMakeLists.txt)

file(GLOB sources
    *.cpp
    *.h
)

add_library(
    PhysProperties SHARED
    ${ANTLR_TempBoundEquations_CXX_OUTPUTS}
    ${sources}
)

target_link_libraries(PhysProperties antlr4_static)
if(MSVC)
    target_compile_options(antlr4_static PRIVATE /W0)
endif()

install(
    TARGETS PhysProperties
    DESTINATION bin
    EXPORT spreadsheet
)

set_directory_properties(PROPERTIES VS_STARTUP_PROJECT PhysProperties)