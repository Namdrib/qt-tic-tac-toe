#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <QMainWindow>
#include <memory>

#include "game_logic.h"
#include "game_view.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class tic_tac_toe;
}
QT_END_NAMESPACE

class tic_tac_toe : public QMainWindow {
  Q_OBJECT

 public:
  explicit tic_tac_toe(QWidget *parent = nullptr);
  ~tic_tac_toe();

 protected:
  void initialise_components();
  void connect_components();

 private:
  Ui::tic_tac_toe *ui;

//  std::shared_ptr<game_logic> gl;
};
#endif  // TIC_TAC_TOE_H
