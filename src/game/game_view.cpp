#include "game_view.h"
#include <iostream>
#include "ui_game_view.h"

#include "human.h"
#include "random_computer.h"

game_view::game_view(QWidget *parent) : QFrame(parent), ui(new Ui::game_view) {
  ui->setupUi(this);

  gl = std::make_shared<game_logic>();

  connect_components();
}

game_view::~game_view() { delete ui; }

void game_view::connect_to_logic(std::shared_ptr<game_logic> &gl) {
  Q_UNUSED(gl);
  // this->gl = gl;
  qDebug() << "game_view::connect_to_logic()";
}

void game_view::connect_components() {
  if (!gl) {
    qDebug() << "game_logic is null!";
  }
  connect(this, &game_view::new_game_button_clicked, gl.get(),
          &game_logic::new_game);
}

void game_view::on_new_game_button_clicked() {
  qDebug() << "game_view::on_new_game_button_clicked";
  emit new_game_button_clicked();
  //    gl->new_game();
}
