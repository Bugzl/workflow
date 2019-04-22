cmake_minimum_required(VERSION 2.8)

project(demo2)

aux_source_directory(. SOURCE)

add_subdirectory(math)

add_executable(demo main.cc)

target_link_libraries(demo power)