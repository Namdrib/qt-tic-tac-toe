#ifndef HUMAN_H
#define HUMAN_H

#include "board_token_enum.h"
#include "player_int.h"

class human : public player_int {
 public:
  human();

  void make_move() override;

 private:
  board_token_enum::board_token token;
};

#endif  // HUMAN_H
