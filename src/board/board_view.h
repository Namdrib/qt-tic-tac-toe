#ifndef BOARD_VIEW_H
#define BOARD_VIEW_H

#include <QFrame>

#include "board_logic.h"

namespace Ui {
class board_view;
}

class board_view : public QFrame {
  Q_OBJECT

 public:
  explicit board_view(QWidget *parent = nullptr);
  ~board_view();

  void connect_components();
 private slots:
  void change_board();

 private:
  Ui::board_view *ui;

  std::shared_ptr<board_logic> bl;
};

#endif  // BOARD_VIEW_H
