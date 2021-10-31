#ifndef BOARD_MODEL_H
#define BOARD_MODEL_H

#include <QAbstractTableModel>

class board_model : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit board_model(QObject *parent = nullptr);

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

    // Editable:
    bool setData(const QModelIndex &index, const QVariant &value,
                 int role = Qt::EditRole) override;

    Qt::ItemFlags flags(const QModelIndex& index) const override;

private:
};

#endif // BOARD_MODEL_H
