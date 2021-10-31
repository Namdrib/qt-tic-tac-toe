cmake_minimum_required(VERSION 3.5)

project(game)

add_library(${PROJECT_NAME}
  game_view.cpp
  game_view.h
  game_view.ui
  game_logic.cpp
  game_logic.h
  game.cpp
  game.h
  game.ui
)

target_include_directories(${PROJECT_NAME}
  PUBLIC ${PROJECT_SOURCE_DIR}
  PUBLIC ../board
  PUBLIC ../player
)

target_link_libraries(${PROJECT_NAME}
  Qt5::Widgets
  board
  player
)
