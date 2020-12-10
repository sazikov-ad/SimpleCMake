cmake_minimum_required(VERSION 3.0)

project(B LANGUAGES C)

add_library(B SHARED lib.c)
target_include_directories(B PUBLIC .)