#ifndef BOARD_H
#define BOARD_H

#include <QAbstractTableModel>
#include <QFrame>

#include "board_token_enum.h"

namespace Ui {
class board;
}

class board : public QFrame {
  Q_OBJECT

 public:
  explicit board(QWidget *parent = nullptr);
  ~board();

  void reset_board();

  bool make_move(size_t col, size_t row, board_token_enum::board_token token);

  void test();
 private:
  Ui::board *ui;

  //QAbstractTableModel table_model;

  QList<QList<board_token_enum::board_token>> b;

  const size_t num_cols = 3;
  const size_t num_rows = 3;
};

#endif  // BOARD_H
