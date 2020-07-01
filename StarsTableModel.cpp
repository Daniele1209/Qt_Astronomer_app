#include "StarsTableModel.h"
#include <algorithm>

int StarsTableModel::rowCount(const QModelIndex& parent) const
{
	return this->repo.get_stars().size();
}

int StarsTableModel::columnCount(const QModelIndex& parent) const
{
	return 4;
}


QVariant StarsTableModel::data(const QModelIndex& index, int role) const
{
	int row = index.row(), col = index.column();
	Star current_star = this->repo.get_stars()[row];

	if (role == Qt::DisplayRole || role == Qt::EditRole)
	{
		switch (col)
		{
		case 0:
			return QString::fromStdString(current_star.get_name());
		case 1:
			return QString::number(current_star.get_ra());
		case 2:
			return QString::number(current_star.get_dec());
		case 3:
			return QString::number(current_star.get_diameter());
		default:
			break;
		}
	}
	return QVariant();
}

QVariant StarsTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
	if (role == Qt::DisplayRole)
	{
		if (orientation == Qt::Horizontal)
		{
			switch (section)
			{
			case 0:
				return "Name";
			case 1:
				return "RA";
			case 2:
				return "DEC";
			case 3:
				return "Diameter";
			default:
				break;
			}
		}
	}
	return QVariant();
}

void StarsTableModel::update() {
	emit layoutAboutToBeChanged();
	emit layoutChanged();
}