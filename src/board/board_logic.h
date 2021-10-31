#ifndef BOARD_LOGIC_H
#define BOARD_LOGIC_H

#include <QObject>
#include <memory>
#include <vector>
#include "board_token_enum.h"

class board_logic : public QObject {
  Q_OBJECT
 public:
  explicit board_logic(QObject *parent = nullptr);

  /**
   * @brief initialise_board initialise the board to grid of size num_rows *
   * num_cols, populated with board_token_enum::board_token::blank
   */
  void reset_board();

  /**
   * @brief make_move place a token at a position on the board
   * @param col the column in which to place the token
   * @param row the row to place the token
   * @param token the token to place at the given coordinates
   */
  void make_move(int col, int row, board_token_enum::board_token token);

 signals:
  /**
   * @brief move_made signify whether the board state has changed
   */
  void board_changed();

 public slots:

  /**
   * @brief make_move place a token at a position on the board
   * @param col the column in which to place the token
   * @param row the row to place the token
   * @param token the token to place at the given coordinates
   * @return true iff the move is valid and `token` can be placed on the board
   */
  void receive_move(int col, int row, board_token_enum::board_token token);

 private:
  std::vector<std::vector<board_token_enum::board_token>> board;

  const int num_cols = 3;
  const int num_rows = 3;
};

#endif  // BOARD_LOGIC_H
