cmake_minimum_required(VERSION 3.11)

project(ranges)

if (MSVC)
    add_compile_options(/W4 /WX /permissive-)
else()
    add_compile_options(-Wall -Wextra -Werror -Wpedantic -pedantic-errors)
endif()

add_library(range-v3 INTERFACE)
target_include_directories(range-v3 INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/range-v3/include)
target_compile_features(range-v3 INTERFACE cxx_std_17)

add_subdirectory(src)
