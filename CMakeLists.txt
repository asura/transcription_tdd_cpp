cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

#######################################
# プロジェクト設定
project(
  transcription_tdd
  LANGUAGES CXX
  VERSION 0.1.0
)

set(CMAKE_CXX_STANDARD 17) # std::optional

#######################################
# CTest有効化
enable_testing()

#######################################
# パス設定
include_directories(
  ${CMAKE_SOURCE_DIR}/include
)

#######################################
# ビルド対象
add_subdirectory(test)
