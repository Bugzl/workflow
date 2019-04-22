cmake_minimum_required(VERSION 2.8)

project(demo2)

configure_file (
    ${PROJECT_SOURCE_DIR}/config.h.in
    ${PROJECT_BINARY_DIR}/config.h
)

option(USE_MATH "Use personal math" ON)

if (USE_MATH)
    include_directories("${PROJECT_SOURCE_DIR}/math")
    add_subdirectory(math)
    set (math ${math} power)
endif (USE_MATH)

aux_source_directory(. SOURCE)

add_executable(demo main.cc)

target_link_libraries(demo ${math})