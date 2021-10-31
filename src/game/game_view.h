#ifndef GAME_VIEW_H
#define GAME_VIEW_H

#include <QDebug>
#include <QFrame>
#include <memory>

#include "board_view.h"
#include "game_logic.h"
#include "player_enum.h"
#include "player_int.h"

namespace Ui {
class game_view;
}

class game_logic;

class game_view : public QFrame {
  Q_OBJECT

 public:
  explicit game_view(QWidget *parent = nullptr);

  ~game_view();

  void connect_to_logic(std::shared_ptr<game_logic> &gl);
  void connect_components();

 private slots:
  void on_new_game_button_clicked();

 signals:
  void new_game_button_clicked();

 private:
  Ui::game_view *ui;

  std::shared_ptr<game_logic> gl;
};

#endif  // GAME_VIEW_H
