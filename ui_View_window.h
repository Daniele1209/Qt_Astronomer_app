/********************************************************************************
** Form generated from reading UI file 'View_window.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_WINDOW_H
#define UI_VIEW_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View_window
{
public:

    void setupUi(QWidget *View_window)
    {
        if (View_window->objectName().isEmpty())
            View_window->setObjectName(QString::fromUtf8("View_window"));
        View_window->resize(664, 483);

        retranslateUi(View_window);

        QMetaObject::connectSlotsByName(View_window);
    } // setupUi

    void retranslateUi(QWidget *View_window)
    {
        View_window->setWindowTitle(QCoreApplication::translate("View_window", "ViewWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View_window: public Ui_View_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_WINDOW_H
