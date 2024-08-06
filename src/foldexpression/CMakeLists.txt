add_executable(foldexpr foldexpression.cpp)
target_precompile_headers(foldexpr PUBLIC ${CMAKE_SOURCE_DIR}/include/pch.h)
