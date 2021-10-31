#include "board.h"
#include "ui_board.h"

board::board(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::board)
{
    ui->setupUi(this);
}

board::~board()
{
    delete ui;
}
