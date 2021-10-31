#ifndef GAME_MODEL_H
#define GAME_MODEL_H

#include <QObject>

class game_model : public QObject
{
    Q_OBJECT
public:
    explicit game_model(QObject *parent = nullptr);

signals:

};

#endif // GAME_MODEL_H
