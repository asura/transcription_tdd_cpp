cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

#######################################
# プロジェクト設定
project(
  transcription_tdd
  LANGUAGES CXX
  VERSION 0.1.0
)

set(CMAKE_CXX_STANDARD 14)

#######################################
# CTest有効化
enable_testing()

#######################################
# ビルド対象
add_subdirectory(test)
