#include "board.h"
#include "ui_board.h"

#include <QDebug>

#include "util.h"

board::board(QWidget *parent) : QFrame(parent), ui(new Ui::board) {
  ui->setupUi(this);

  reset_board();

  test();
}

board::~board() { delete ui; }

void board::reset_board() {
  QList<QList<board_token_enum::board_token>> new_b;

  for (size_t i = 0; i < num_rows; i++) {
    QList<board_token_enum::board_token> temp;
    for (size_t j = 0; j < num_rows; j++) {
      temp.push_back(board_token_enum::board_token::blank);
    }
    new_b.push_back(temp);
  }

  b = new_b;
}

bool board::make_move(size_t col, size_t row,
                      board_token_enum::board_token token) {
  // check bounds
  if (!util::in_bounds(static_cast<size_t>(0), num_cols, col)) {
    return false;
  }

  if (!util::in_bounds(static_cast<size_t>(0), num_rows, row)) {
    return false;
  }

  // space is already occupied by another token
  if (b[row][col] != board_token_enum::board_token::blank) {
    return false;
  }

  b[row][col] = token;
  return true;
  //  emit board_changed();
}

void board::test() {
  //    ui->gridLayout->
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      // ui->tableView->
    }
  }
  for (size_t i = 0; i < ui->gridLayout->count(); i++) {
    qDebug() << "x at " << i << " = " << ui->gridLayout->itemAt(i);
    qDebug() << "y at " << i << " = "
             << ui->gridLayout->itemAt(i)->widget()->y();
  }
}
