#include "board_logic.h"

#include "util.h"
#include <iostream>

board_logic::board_logic(QObject *parent) : QObject(parent) {
  reset_board();
}

void board_logic::reset_board() {
    std::cout << "board_logic::reset_board" << std::endl;
//  board.resize(num_rows);
//  for (auto row : board) {
//    row = std::vector<board_token_enum::board_token>(
//        num_cols, board_token_enum::board_token::blank);
//  }
  emit board_changed();
}

void board_logic::make_move(int col, int row,
                            board_token_enum::board_token token) {
  // check bounds
  if (!util::in_bounds(0, num_cols, col)) {
    return;
  }
  if (!util::in_bounds(0, num_rows, row)) {
    return;
  }

  // space is already occupied by another token
  if (board[row][col] != board_token_enum::board_token::blank) {
    return;
  }

  board[row][col] = token;
  emit board_changed();
}

void board_logic::receive_move(int col, int row,
                               board_token_enum::board_token token)
{
    make_move(col, row, token);
}
