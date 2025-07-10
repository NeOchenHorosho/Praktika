#ifndef COMPTABLEMODEL_H
#define COMPTABLEMODEL_H
#include <QAbstractTableModel>
#include "COMP.h"

class CompTableModel final : public QAbstractTableModel
{
    Q_OBJECT
public:
    CompTableModel(QObject *parent = nullptr,COMP<Comp> *src = nullptr);

    void setSource(COMP<Comp> *src);

    /* базовые перегрузки */
    int rowCount   (const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data  (const QModelIndex &index, int role) const override;
    QVariant headerData(int section, Qt::Orientation, int role) const override;

    void sort(int column, Qt::SortOrder order) override;
    Qt::ItemFlags flags(const QModelIndex &index) const override;

private:
    COMP<Comp> *m_src;
};
#endif // COMPTABLEMODEL_H
