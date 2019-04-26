#######################################
# CppCheck対応 (要 CMake 3.10)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#find_program(CMAKE_CXX_CPPCHECK NAMES cppcheck)
# projectオプションにはv1.76以降のcppcheckが必要
#if (CMAKE_CXX_CPPCHECK)
#  list(
##    APPEND CMAKE_CXX_CPPCHECK
#    "––project=complile_commands.json"
#    "--enable=warning,performance,portability"
#    "--std=c++14"
#    "--suppressions-list=${CMAKE_SOURCE_DIR}/CppCheckSuppressions.txt"
#  )
#endif()

add_library(
  money
  Dollar.cpp
)
