#ifndef BOARD_H
#define BOARD_H

#include <QFrame>

namespace Ui {
class board;
}

class board : public QFrame
{
    Q_OBJECT

public:
    explicit board(QWidget *parent = nullptr);
    ~board();

private:
    Ui::board *ui;
};

#endif // BOARD_H
