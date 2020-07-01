#pragma once

#include <QWidget>
#include "ui_View_window.h"
#include <QtWidgets/QMainWindow>
#include <QPen>
#include "Star.h"

class View_window : public QWidget {
	Q_OBJECT
public:
	View_window(QWidget* parent = Q_NULLPTR);
	~View_window();
	QSize sizeHint() const Q_DECL_OVERRIDE;
	void paintStars();

	void set_stars(vector<Star>& stars, string& curr_star);

private:
	Ui::View_window ui;
	vector<Star> starss;
	string curr_star;

protected:
	void paintEvent(QPaintEvent* event) override;
};