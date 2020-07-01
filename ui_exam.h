/********************************************************************************
** Form generated from reading UI file 'exam.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAM_H
#define UI_EXAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_examClass
{
public:
    QWidget *centralWidget;
    QPushButton *add_button;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QTableView *tableView;
    QLabel *label_5;
    QListWidget *list_search;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *line_name;
    QLineEdit *line_ra;
    QLineEdit *line_dec;
    QLineEdit *line_diameter;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *line_search;
    QCheckBox *check_const;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *add_button_2;
    QPushButton *exit_button;
    QPushButton *search_button;
    QPushButton *view_button;
    QPushButton *chart_button;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *examClass)
    {
        if (examClass->objectName().isEmpty())
            examClass->setObjectName(QString::fromUtf8("examClass"));
        examClass->resize(1052, 645);
        examClass->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 117, 175);"));
        centralWidget = new QWidget(examClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        add_button = new QPushButton(centralWidget);
        add_button->setObjectName(QString::fromUtf8("add_button"));
        add_button->setGeometry(QRect(34, 361, 93, 29));
        add_button->setStyleSheet(QString::fromUtf8("background-color: rgb(119, 6, 199);\n"
"font: 75 20pt \"8514oem\";\n"
"color: rgb(232, 232, 232);"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(31, 2, 991, 601));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setFamily(QString::fromUtf8("8514oem"));
        font.setPointSize(26);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("font: 75 26pt \"8514oem\";\n"
"background-color: rgb(170, 170, 255);\n"
"color: rgb(0, 117, 175);"));

        verticalLayout_4->addWidget(label_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEnabled(true);
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(155, 220, 255);"));
        tableView->setDragEnabled(false);
        tableView->setDragDropOverwriteMode(true);

        horizontalLayout_3->addWidget(tableView);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("8514oem"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("font: 75 20pt \"8514oem\";\n"
"color: rgb(0, 117, 175);\n"
"background-color: rgb(170, 170, 255);"));

        horizontalLayout_3->addWidget(label_5);

        list_search = new QListWidget(layoutWidget);
        list_search->setObjectName(QString::fromUtf8("list_search"));
        list_search->setStyleSheet(QString::fromUtf8("background-color: rgb(155, 220, 255);"));

        horizontalLayout_3->addWidget(list_search);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 20pt \"8514oem\";\n"
"color: rgb(232, 232, 232);"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 20pt \"8514oem\";\n"
"color: rgb(232, 232, 232);"));

        verticalLayout->addWidget(label_2);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 20pt \"8514oem\";\n"
"color: rgb(232, 232, 232);"));

        verticalLayout->addWidget(label_6);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 20pt \"8514oem\";\n"
"color: rgb(232, 232, 232);"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        line_name = new QLineEdit(layoutWidget);
        line_name->setObjectName(QString::fromUtf8("line_name"));
        line_name->setStyleSheet(QString::fromUtf8("background-color: rgb(155, 220, 255);"));

        verticalLayout_2->addWidget(line_name);

        line_ra = new QLineEdit(layoutWidget);
        line_ra->setObjectName(QString::fromUtf8("line_ra"));
        line_ra->setStyleSheet(QString::fromUtf8("background-color: rgb(155, 220, 255);"));

        verticalLayout_2->addWidget(line_ra);

        line_dec = new QLineEdit(layoutWidget);
        line_dec->setObjectName(QString::fromUtf8("line_dec"));
        line_dec->setStyleSheet(QString::fromUtf8("background-color: rgb(155, 220, 255);"));

        verticalLayout_2->addWidget(line_dec);

        line_diameter = new QLineEdit(layoutWidget);
        line_diameter->setObjectName(QString::fromUtf8("line_diameter"));
        line_diameter->setStyleSheet(QString::fromUtf8("background-color: rgb(155, 220, 255);"));

        verticalLayout_2->addWidget(line_diameter);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_5->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 20pt \"8514oem\";\n"
"color: rgb(232, 232, 232);"));

        horizontalLayout_4->addWidget(label_7);

        line_search = new QLineEdit(layoutWidget);
        line_search->setObjectName(QString::fromUtf8("line_search"));
        line_search->setStyleSheet(QString::fromUtf8("background-color: rgb(155, 220, 255);"));

        horizontalLayout_4->addWidget(line_search);


        verticalLayout_3->addLayout(horizontalLayout_4);

        check_const = new QCheckBox(layoutWidget);
        check_const->setObjectName(QString::fromUtf8("check_const"));
        check_const->setStyleSheet(QString::fromUtf8("font: 75 20pt \"8514oem\";\n"
"color: rgb(232, 232, 232);"));

        verticalLayout_3->addWidget(check_const);


        horizontalLayout_5->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        add_button_2 = new QPushButton(layoutWidget);
        add_button_2->setObjectName(QString::fromUtf8("add_button_2"));
        add_button_2->setStyleSheet(QString::fromUtf8("background-color: rgb(119, 6, 199);\n"
"font: 75 20pt \"8514oem\";\n"
"color: rgb(232, 232, 232);"));

        horizontalLayout_2->addWidget(add_button_2);

        exit_button = new QPushButton(layoutWidget);
        exit_button->setObjectName(QString::fromUtf8("exit_button"));
        exit_button->setStyleSheet(QString::fromUtf8("background-color: rgb(119, 6, 199);\n"
"font: 75 20pt \"8514oem\";\n"
"color: rgb(232, 232, 232);"));

        horizontalLayout_2->addWidget(exit_button);

        search_button = new QPushButton(layoutWidget);
        search_button->setObjectName(QString::fromUtf8("search_button"));
        search_button->setStyleSheet(QString::fromUtf8("background-color: rgb(119, 6, 199);\n"
"font: 75 20pt \"8514oem\";\n"
"color: rgb(232, 232, 232);"));

        horizontalLayout_2->addWidget(search_button);

        view_button = new QPushButton(layoutWidget);
        view_button->setObjectName(QString::fromUtf8("view_button"));
        view_button->setStyleSheet(QString::fromUtf8("background-color: rgb(119, 6, 199);\n"
"font: 75 20pt \"8514oem\";\n"
"color: rgb(232, 232, 232);"));

        horizontalLayout_2->addWidget(view_button);

        chart_button = new QPushButton(layoutWidget);
        chart_button->setObjectName(QString::fromUtf8("chart_button"));
        chart_button->setStyleSheet(QString::fromUtf8("background-color: rgb(119, 6, 199);\n"
"font: 75 20pt \"8514oem\";\n"
"color: rgb(232, 232, 232);"));

        horizontalLayout_2->addWidget(chart_button);


        verticalLayout_5->addLayout(horizontalLayout_2);

        examClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(examClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        examClass->setStatusBar(statusBar);

        retranslateUi(examClass);

        QMetaObject::connectSlotsByName(examClass);
    } // setupUi

    void retranslateUi(QMainWindow *examClass)
    {
        examClass->setWindowTitle(QCoreApplication::translate("examClass", "exam", nullptr));
        add_button->setText(QCoreApplication::translate("examClass", "ADD", nullptr));
        label_4->setText(QCoreApplication::translate("examClass", "Table of Stars", nullptr));
        label_5->setText(QCoreApplication::translate("examClass", "Search List", nullptr));
        label->setText(QCoreApplication::translate("examClass", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("examClass", "RA", nullptr));
        label_6->setText(QCoreApplication::translate("examClass", "DEC", nullptr));
        label_3->setText(QCoreApplication::translate("examClass", "Diameter", nullptr));
        label_7->setText(QCoreApplication::translate("examClass", "Search: ", nullptr));
        check_const->setText(QCoreApplication::translate("examClass", "Only constellation", nullptr));
        add_button_2->setText(QCoreApplication::translate("examClass", "ADD", nullptr));
        exit_button->setText(QCoreApplication::translate("examClass", "EXIT", nullptr));
        search_button->setText(QCoreApplication::translate("examClass", "SEARCH", nullptr));
        view_button->setText(QCoreApplication::translate("examClass", "VIEW", nullptr));
        chart_button->setText(QCoreApplication::translate("examClass", "CHART", nullptr));
    } // retranslateUi

};

namespace Ui {
    class examClass: public Ui_examClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAM_H
