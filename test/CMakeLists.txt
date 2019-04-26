include_directories(
  ${INCLUDE_DIRECTORIES}
  ${CMAKE_SOURCE_DIR}/vendor/catch
)

add_executable(
  Tester
  main.cpp
  MoneyTest.cpp
)
add_test(
  NAME Tester
  COMMAND $<TARGET_FILE:Tester>
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)
