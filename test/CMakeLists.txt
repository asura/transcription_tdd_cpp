include_directories(
  ${INCLUDE_DIRECTORIES}
  ${CMAKE_SOURCE_DIR}/vendor/catch
)

add_executable(
  Tester
  main.cpp
)
