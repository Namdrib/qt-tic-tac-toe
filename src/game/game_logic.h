#ifndef GAME_LOGIC_H
#define GAME_LOGIC_H

#include <QObject>
#include <memory>

#include "board_logic.h"
#include "game_view.h"
#include "player_int.h"

class game_view;

class game_logic : public QObject {
  Q_OBJECT
 public:
  explicit game_logic(QObject *parent = nullptr);

  //  void connect_to_view(std::shared_ptr<game_view> &gv);
  //  void connect_to_view(game_view *gv);

 protected:
  void initialise_components();
  void connect_components();

 public slots:
  void new_game();

 signals:

 private:
  //  std::shared_ptr<game_view> gv;

  std::shared_ptr<player_int> p1;
  std::shared_ptr<player_int> p2;
  std::shared_ptr<board_logic> b;

  std::shared_ptr<player_int> current_player;
};

#endif  // GAME_LOGIC_H
