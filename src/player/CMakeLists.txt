cmake_minimum_required(VERSION 3.5)

project(player)

add_library(${PROJECT_NAME}
  player_int.cpp
  player_int.h
  player_enum.h
  human.cpp
  human.h
  random_computer.cpp
  random_computer.h
)

#target_include_directories(${PROJECT_NAME}
#  PUBLIC${PROJECT_SOURCE_DIR}
#)

target_include_directories(${PROJECT_NAME}
  PUBLIC ${PROJECT_SOURCE_DIR}
  PUBLIC ../board
)

target_link_libraries(${PROJET_NAME}
  board
)
