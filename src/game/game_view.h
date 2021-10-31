#ifndef GAME_H
#define GAME_H

#include <QFrame>

namespace Ui {
class game;
}

class game : public QFrame
{
    Q_OBJECT

public:
    explicit game(QWidget *parent = nullptr);
    ~game();

private:
    Ui::game *ui;
};

#endif // GAME_H
