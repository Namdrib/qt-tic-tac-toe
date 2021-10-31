#ifndef GAME_H
#define GAME_H

#include <QFrame>

#include "board.h"
#include "player_enum.h"
#include "player_int.h"

namespace Ui {
class game;
}

class game : public QFrame {
  Q_OBJECT

 public:
  explicit game(QWidget *parent = nullptr);
  ~game();

  player_int* initialise_player(const player_enum::player_enum pe);

  void new_game(player_enum::player_enum pe1, player_enum::player_enum pe2);
 private:
  Ui::game *ui;

  // TODO : eventually used smart pointers?
  player_int *p1;
  player_int *p2;

  player_int **current_player;
};

#endif  // GAME_H
