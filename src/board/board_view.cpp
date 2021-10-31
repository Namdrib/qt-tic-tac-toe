#include "board_view.h"
#include "ui_board_view.h"

#include <iostream>

board_view::board_view(QWidget *parent)
    : QFrame(parent), ui(new Ui::board_view) {
  ui->setupUi(this);

  bl = std::make_shared<board_logic>();

  connect_components();
}

board_view::~board_view() { delete ui; }

void board_view::connect_components() {
  if (!bl) {
    std::cout << "board_logic is null!" << std::endl;
  }
  connect(bl.get(), &board_logic::board_changed, this,
          &board_view::change_board);
}

void board_view::change_board() {
  std::cout << "grid_layout count is " << ui->grid_layout->count() << std::endl;
  //    for (size_t i = 0; i < ui->grid_layout->count(); i++)
  {
    //        for (size_t j = 0; j < ui->grid_layout->itemAt(i);
  }
}
