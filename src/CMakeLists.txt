cmake_minimum_required(VERSION 3.5)

project(qt-tic-tac-toe LANGUAGES CXX)

# QtCreator supports the following variables for Android, which are identical to qmake Android variables.
# Check http://doc.qt.io/qt-5/deployment-android.html for more information.
# They need to be set before the find_package(Qt5 ...) call.

#if(ANDROID)
#  set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
#  if (ANDROID_ABI STREQUAL "armeabi-v7a")
#    set(ANDROID_EXTRA_LIBS
#      ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libcrypto.so
#      ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libssl.so)
#  endif()
#endif()

add_subdirectory(board)
add_subdirectory(game)
add_subdirectory(player)
add_subdirectory(util)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

if(ANDROID)
  add_library(${PROJECT_NAME} SHARED
    main.cpp
    tic_tac_toe.cpp
    tic_tac_toe.h
    tic_tac_toe.ui
  )
else()
  add_executable(${PROJECT_NAME}
    main.cpp
    tic_tac_toe.cpp
    tic_tac_toe.h
    tic_tac_toe.ui
  )
endif()

target_include_directories(${PROJECT_NAME}
  PUBLIC game
  PUBLIC board
)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    Qt5::Widgets
    board
    game
)
