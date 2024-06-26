cmake_minimum_required(VERSION 3.15 FATAL_ERROR)
project(arithmetictree)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
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

#antlr runtime installation
message(STATUS "System name: ${CMAKE_SYSTEM_NAME}")
if(NOT EXISTS ${CMAKE_CURRENT_LIST_DIR}/antlr-4.13.1-complete.jar OR NOT EXISTS ${CMAKE_CURRENT_LIST_DIR}/antlr4_runtime)
	file(WRITE ${CMAKE_CURRENT_LIST_DIR}/antlr-4.13.1-complete.jar)
	execute_process(COMMAND curl -Lo ${CMAKE_CURRENT_LIST_DIR}/antlr-4.13.1-complete.jar https://www.antlr.org/download/antlr-4.13.1-complete.jar	RESULT_VARIABLE CURL_RESULT)
	if(CURL_RESULT)
	    message(FATAL_ERROR "Error loading '${CMAKE_CURRENT_LIST_DIR}/antlr-4.13.1-complete.jar'. Process interrupted.")
	else()
	    message(STATUS "Loading '${CMAKE_CURRENT_LIST_DIR}/antlr-4.13.1-complete.jar' finished.")
	endif()
    if(NOT EXISTS ${CMAKE_CURRENT_LIST_DIR}/antlr4_runtime)
        make_directory(${CMAKE_CURRENT_LIST_DIR}/antlr4_runtime)
    endif()
	execute_process(COMMAND curl -Lo ${CMAKE_CURRENT_LIST_DIR}/antlr4_runtime/antlr4-cpp-runtime-4.13.1-source.zip https://www.antlr.org/download/antlr4-cpp-runtime-4.13.1-source.zip	RESULT_VARIABLE CURL_RESULT)
	if(CURL_RESULT)
	    message(FATAL_ERROR "Error loading '${CMAKE_CURRENT_LIST_DIR}/antlr4_runtime/antlr4-cpp-runtime-4.13.1-source.zip'. Process interrupted.")
	else()
	    message(STATUS "Loading '${CMAKE_CURRENT_LIST_DIR}/antlr4_runtime/antlr4-cpp-runtime-4.13.1-source.zip' finished.")
	endif()
	message(STATUS "Распаковка архива antlr4-cpp-runtime-4.13.1-source.zip в " ${CMAKE_CURRENT_LIST_DIR}/antlr4_runtime)
	execute_process(COMMAND unzip ${CMAKE_CURRENT_LIST_DIR}/antlr4_runtime/antlr4-cpp-runtime-4.13.1-source.zip -d ${CMAKE_CURRENT_LIST_DIR}/antlr4_runtime RESULT_VARIABLE UNZIP_RESULT)
	if(UNZIP_RESULT)
	    message(FATAL_ERROR "Error unzipping '${CMAKE_CURRENT_LIST_DIR}/antlr4_runtime/antlr4-cpp-runtime-4.13.1-source.zip'. Process interrupted.")
	else()
	    message(STATUS "Unzipping '${CMAKE_CURRENT_LIST_DIR}/antlr4_runtime/antlr4-cpp-runtime-4.13.1-source.zip' done.")
	    message(STATUS "Removing '${CMAKE_CURRENT_LIST_DIR}/antlr4_runtime/antlr4-cpp-runtime-4.13.1-source.zip'...")
	    execute_process(COMMAND rm ${CMAKE_CURRENT_LIST_DIR}/antlr4_runtime/antlr4-cpp-runtime-4.13.1-source.zip)
	    message(STATUS "Removing '${CMAKE_CURRENT_LIST_DIR}/antlr4_runtime/antlr4-cpp-runtime-4.13.1-source.zip' finished")
	endif()
	message(STATUS "ANTLR4 installation SUCCESS")
else()
	message(STATUS "ANTLR4 already installed")
endif()

set(ANTLR_EXECUTABLE ${CMAKE_CURRENT_LIST_DIR}/antlr-4.13.1-complete.jar)

set(CMAKE_CURRENT_BINARY_DIR ${CMAKE_CURRENT_LIST_DIR}/bin)

message(STATUS ${CMAKE_CURRENT_BINARY_DIR})

include(${CMAKE_CURRENT_LIST_DIR}/FindANTLR.cmake)

add_definitions(
    -DANTLR4CPP_STATIC
    -D_SILENCE_ALL_CXX20_DEPRECATION_WARNINGS
)

set(WITH_STATIC_CRT OFF CACHE BOOL "Visual C++ static CRT for ANTLR" FORCE)

set(PROJECT_RUNTIME_ANTLR ${CMAKE_CURRENT_LIST_DIR}/antlr4_runtime)

# Создаем цель сборки для внешней директории
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/antlr4_runtime)

make_directory(${PROJECT_RUNTIME_ANTLR}/runtime/src)

antlr_target(Parserules ${CMAKE_CURRENT_LIST_DIR}/ParseRules.g4 LEXER PARSER LISTENER)


set(ANTLR_GENERATED_FILES ${PROJECT_RUNTIME_ANTLR}/runtime/src)

target_include_directories(antlr4_static INTERFACE ${ANTLR_GENERATED_FILES})

set_target_properties(antlr4_static PROPERTIES POSITION_INDEPENDENT_CODE ON)

set_target_properties(antlr4_static
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/lib"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/bin"
)

include_directories(
    ${ANTLR4_INCLUDE_DIRS}
    ${ANTLR_Parserules_OUTPUT_DIR}
    ${PROJECT_RUNTIME_ANTLR}/runtime/src
)