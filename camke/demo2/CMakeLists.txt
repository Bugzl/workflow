cmake_minimum_required(VERSION 2.8)

project(demo2)

aux_source_directory(. SOURCE)

add_executable(demo ${SOURCE})
