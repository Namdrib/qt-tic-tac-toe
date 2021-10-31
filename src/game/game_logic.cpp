#include "game_logic.h"

#include <iostream>

game_logic::game_logic(QObject *parent) : QObject(parent) {}

// void game_logic::connect_to_view(std::shared_ptr<game_view> &gv)
// void game_logic::connect_to_view(game_view *gv)
//{
//    this->gv = std::make_shared<game_view>(*gv);
//}

void game_logic::initialise_components() {

}

void game_logic::connect_components() {

}

void game_logic::new_game() {
    std::cout << "game_logic::new_game()" << std::endl;
  b->reset_board();
  current_player = p1;
}
