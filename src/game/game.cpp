#include "game.h"
#include "ui_game.h"

#include "human.h"
#include "random_computer.h"

game::game(QWidget* parent) : QFrame(parent), ui(new Ui::game) {
  ui->setupUi(this);
}

game::~game() { delete ui; }

player_int* game::initialise_player(const player_enum::player_enum pe) {
  switch (pe) {
    case player_enum::human:
//      return new human;
      break;
    case player_enum::random:
//      return new random_computer;
      break;
    default:
      break;
  }
  return nullptr;
}

void game::new_game(player_enum::player_enum pe1, player_enum::player_enum pe2) {
  p1 = initialise_player(pe1);

  p2 = initialise_player(pe2);
}
