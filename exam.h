#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_exam.h"
#include "Service.h"
#include "StarsTableModel.h"
#include "View_window.h"

class exam : public QMainWindow
{
    Q_OBJECT

public:
    exam(Service& s,StarsTableModel* model, Astronomer& a, QWidget* parent = Q_NULLPTR);
    void updateSize();

private:
    Service& serv;
    Ui::examClass ui;
    StarsTableModel* model;
    Astronomer astro;
    View_window* w;
public:
    void populate_list();
    void connectSignalsAndSlots();
    void add_fct();
    void search_fct();
    void show_view();
    void show_stars();
    int getSelectedIndex() const;
};