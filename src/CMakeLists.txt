add_library(pch pch.cpp)
target_precompile_headers(pch PUBLIC ${CMAKE_SOURCE_DIR}/include/pch.h)

file(
  GLOB DIRS
  RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}/
  *)

foreach(SUBDIR ${DIRS})
  if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${SUBDIR})
    add_subdirectory(${SUBDIR})
    message(STATUS ${SUBDIR})
  endif()
endforeach()
