file(
  GLOB DIRS
  RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}/
  *)

foreach(SUBDIR ${DIRS})
  if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${SUBDIR})
    add_subdirectory(${SUBDIR})
  endif()
endforeach()
