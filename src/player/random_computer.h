#ifndef RANDOM_H
#define RANDOM_H

#include "player_int.h"

class random_computer : public player_int {
 public:
  random_computer();

  void make_move() override;
};

#endif  // RANDOM_H
