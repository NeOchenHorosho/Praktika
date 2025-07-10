#include "comptablemodel.h"

CompTableModel::CompTableModel(QObject *parent, COMP<Comp> *src)
    : QAbstractTableModel(parent), m_src(src) {}

void CompTableModel::setSource(COMP<Comp> *src)
{
    beginResetModel();
    m_src = src;
    endResetModel();
}

/* строки = количество товаров */
int CompTableModel::rowCount(const QModelIndex &) const
{
    return m_src ? static_cast<int>(m_src->GetCount()) : 0;
}


int CompTableModel::columnCount(const QModelIndex &) const { return 3; }

QVariant CompTableModel::data(const QModelIndex &idx, int role) const
{
    if (!m_src || !idx.isValid() || role != Qt::DisplayRole) return {};

    const Comp &c = (*m_src)[static_cast<size_t>(idx.row())];
    switch (idx.column()) {
    case 0:  return c.name;
    case 1:  return c.section;
    case 2:  return c.price;
    default: return {};
    }
}

QVariant CompTableModel::headerData(int section, Qt::Orientation orient, int role) const
{
    if (role != Qt::DisplayRole || orient != Qt::Horizontal) return {};
    static const QStringList hdr{"Наименование", "Секция", "Цена"};
    return hdr.value(section);
}

Qt::ItemFlags CompTableModel::flags(const QModelIndex &idx) const
{
    if (!idx.isValid()) return Qt::NoItemFlags;
    return Qt::ItemIsEnabled | Qt::ItemIsSelectable;
}

void CompTableModel::sort(int column, Qt::SortOrder order)
{
    if (!m_src) return;
    beginResetModel();
    m_src->sort();
    endResetModel();
}
