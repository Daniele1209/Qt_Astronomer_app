#include "exam.h"
#include "qmessagebox"
#include <QFileDialog>
#include <fstream>

exam::exam(Service& s, StarsTableModel* model, Astronomer& a, QWidget* parent)
    : serv(s), model(model), astro(a), QMainWindow(parent)
{
    ui.setupUi(this);
    this->ui.tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    this->ui.tableView->setModel(model);
    this->ui.tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    this->ui.tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    this->setWindowTitle(QString::fromStdString(astro.get_name()));
    this->w = new View_window{};
    this->populate_list();
    this->connectSignalsAndSlots();
}

void exam::updateSize()
{
    this->ui.tableView->resizeRowsToContents();
}

void exam::populate_list() {
    //this->ui.list_search->clear();
   // vector<Star> objects = this->serv.get_star_list();
    //for (auto& t : objects)
      //  this->ui.list_search->addItem(QString::fromStdString(t.to_String()));
}

void exam::connectSignalsAndSlots() {
    QObject::connect(this->ui.tableView->selectionModel(), &QItemSelectionModel::selectionChanged, [this]() {
        int selectedIndex = this->getSelectedIndex();
        if (selectedIndex < 0)
            return;
        });
    QObject::connect(ui.view_button, &QPushButton::clicked, this, &exam::show_view);
    QObject::connect(ui.add_button_2, &QPushButton::clicked, this, &exam::add_fct);
    QObject::connect(this->ui.check_const, &QCheckBox::stateChanged, this, &exam::show_stars);
    QObject::connect(ui.search_button, &QPushButton::clicked, this, &exam::search_fct);
    QObject::connect(ui.exit_button, SIGNAL(clicked()), qApp, SLOT(quit()));
}

int exam::getSelectedIndex() const {
    QModelIndexList selectedIndexes = this->ui.tableView->selectionModel()->selectedIndexes();
    if (!selectedIndexes.size())   // in case there is something that is not selected
        return -1;
    int selectedIndex = selectedIndexes.at(0).row();
    return selectedIndex;
}

void exam::add_fct() {
    string name = this->ui.line_name->text().toStdString();
    int ra = this->ui.line_ra->text().toInt();
    int dec = this->ui.line_dec->text().toInt();
    int diam = this->ui.line_diameter->text().toInt();
    try {
        this->serv.add_star(name, this->astro.get_constellation(), ra, dec, diam);
        this->updateSize();
        this->ui.line_name->clear();
        this->ui.line_ra->clear();
        this->ui.line_dec->clear();
        this->ui.line_diameter->clear();
    }
    catch (exception& e) {
        QMessageBox::information(this, "Error !", e.what());
        return;
    }
}

void exam::search_fct() {
    
    this->ui.list_search->clear();
    string lineEdit_text = this->ui.line_search->text().toStdString();

    if (lineEdit_text != "") {
        vector<Star> stars = this->serv.get_star_list();
        for (auto star : stars) {
            string star_name = star.get_name();

            if (star_name.find(lineEdit_text.c_str()) != std::string::npos)
            {
                this->ui.list_search->addItem(QString::fromStdString(star.get_name() + "," + star.get_constellation() + "," + std::to_string(star.get_ra()) + ","
                    + std::to_string(star.get_dec()) + "," + std::to_string(star.get_diameter())));
            }
        }
    }
}

void exam::show_view() {
    int selectedIndex = this->getSelectedIndex();
    if (selectedIndex < 0)
    {
        QMessageBox::information(this, "Operation failed", "No star selected!");
        return;
    }
    string selectedStar = this->ui.tableView->model()->index(selectedIndex, 0).data().toString().toStdString();

    string currentConstellation;
    for (auto& t : this->serv.get_star_list())
        if (t.get_name() == selectedStar)
            currentConstellation = t.get_constellation();

    vector<Star> constellationStars = this->serv.get_star_const(currentConstellation);
    this->w->set_stars(constellationStars, selectedStar);
    this->w->show();
}

void exam::show_stars() {
    if (!this->ui.check_const->isChecked()) {
        for (int i = 0; i < ui.tableView->model()->rowCount(); i++)
            this->ui.tableView->showRow(i);
        return;
    }
    for (int i = 0; i < ui.tableView->model()->rowCount(); i++) {
        string constellation;
        string name = this->ui.tableView->model()->index(i, 0).data().toString().toStdString();

        for (auto& t : this->serv.get_star_list())
            if (t.get_name() == name)
                constellation = t.get_constellation();

        if (constellation != astro.get_constellation())
            this->ui.tableView->hideRow(i);
    }
}