set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(ranges_hello ranges_hello.cpp)
target_link_libraries(ranges_hello PRIVATE range-v3)
set_target_properties(ranges_hello PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)

add_executable(ranges_count ranges_count.cpp)
target_link_libraries(ranges_count PRIVATE range-v3)
set_target_properties(ranges_count PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)

add_executable(ranges_count_if ranges_count_if.cpp)
target_link_libraries(ranges_count_if PRIVATE range-v3)
set_target_properties(ranges_count_if PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)

add_executable(ranges_split ranges_split.cpp)
target_link_libraries(ranges_split PRIVATE range-v3)
set_target_properties(ranges_split PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)

add_executable(ranges_introduction ranges_introduction.cpp)
target_link_libraries(ranges_introduction PRIVATE range-v3)
set_target_properties(ranges_introduction PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)
