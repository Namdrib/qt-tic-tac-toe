#include "tic_tac_toe.h"
#include "ui_tic_tac_toe.h"

tic_tac_toe::tic_tac_toe(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::tic_tac_toe) {
  ui->setupUi(this);

  initialise_components();
  connect_components();
}

tic_tac_toe::~tic_tac_toe() { delete ui; }

void tic_tac_toe::initialise_components() {
//  gl = std::make_shared<game_logic>();
//  ui->frame->connect_to_logic(gl);
  //  gl->connect_to_view(ui->frame);
}

void tic_tac_toe::connect_components() {
//  connect(ui->frame, &game_view::new_game_button_clicked, gl.get(),
//          &game_logic::new_game);
}
