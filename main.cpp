#include "exam.h"
#include <QtWidgets/QApplication>
#include "Repo.h"
#include "Service.h"
#include "StarsTableModel.h"
/*
void test_ex() {

}
*/

int main(int argc, char* argv[])
{
    //test_ex();

    QApplication a(argc, argv);
    Repo r("astros.txt", "stars.txt");
    StarsTableModel* model = new StarsTableModel{ r };
    Service serv( r, model );
    vector<exam*> windows;
    for (auto& a : r.get_astros()) {
        windows.push_back(new exam(serv, model, a));
    }
    for (auto window : windows)
        window->show();

    return a.exec();
}
