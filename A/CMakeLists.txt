set(GEN_DIR ${CMAKE_CURRENT_BINARY_DIR}/generated)

find_package(PythonInterp REQUIRED)

add_library(A INTERFACE)
target_include_directories(A INTERFACE ${GEN_DIR})

add_custom_target(
  run ALL
  COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/preparing.py ${GEN_DIR}
  COMMENT "Generating A/index.h")

add_dependencies(A run)

