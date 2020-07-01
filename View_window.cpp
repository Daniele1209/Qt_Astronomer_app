#include "View_window.h"
#include <QPainter>

View_window::View_window(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

View_window::~View_window(){}

QSize View_window::sizeHint() const {
	return QSize{ 600, 400 };
}

void View_window::paintStars() {
	QPainter painter{this};
	QPen redPen{ Qt::red, 1, Qt::SolidLine, Qt::RoundCap };
	QPen blackPen{ Qt::black, 1, Qt::SolidLine, Qt::RoundCap };
	painter.setPen(blackPen);
	for (auto star : this->starss)
	{
		if (star.get_name() == curr_star)
		{
			painter.setPen(redPen);
			painter.drawEllipse(star.get_ra(), star.get_dec(), star.get_diameter() / 2, star.get_diameter() / 2);
			painter.setPen(blackPen);
		}
		else painter.drawEllipse(star.get_ra(), star.get_dec(), star.get_diameter() / 2, star.get_diameter() / 2);
	}

}

void View_window::set_stars(vector<Star>& stars, string& currentStar)
{
	this->starss = stars;
	this->curr_star = currentStar;
}

void View_window::paintEvent(QPaintEvent* event)
{
	paintStars();
}