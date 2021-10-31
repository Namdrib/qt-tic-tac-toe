cmake_minimum_required(VERSION 3.5)

project(board)

add_library(${PROJECT_NAME}
  board_view.cpp
  #board_view.h
  board_view.ui
  board_logic.cpp
  #board_logic.h
  board_token_enum.h
  board.cpp
  #board.h
  board.ui
#board_model.cpp
#board_model.h
)

target_include_directories(${PROJECT_NAME}
  PUBLIC ${PROJECT_SOURCE_DIR}
  PUBLIC ../util
)

target_link_libraries(${PROJECT_NAME}
  Qt5::Widgets
  util
)
