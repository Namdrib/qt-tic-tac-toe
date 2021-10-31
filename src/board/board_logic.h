#ifndef BOARD_MODEL_H
#define BOARD_MODEL_H

#include <QObject>

class board_model : public QObject
{
    Q_OBJECT
public:
    explicit board_model(QObject *parent = nullptr);

signals:

};

#endif // BOARD_MODEL_H
