/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *Country1;
    QLabel *Country2;
    QPushButton *ConfirmButton;
    QCheckBox *checkBox1;
    QCheckBox *checkBox2;
    QLabel *Neimportant;
    QLabel *LabelNivel;
    QLabel *rerollLabel1;
    QLabel *rerollLabel2;
    QPushButton *rerollButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background: linear-gradient(to right, #FF5733, #FFBD33);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 20, 301, 111));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 16px; \n"
"    font-weight: bold; \n"
"    color: #34495e; \n"
"    background-color: #ecf0f1; \n"
"    border: 2px solid #7f8c8d; \n"
"    border-radius: 10px; \n"
"    padding: 5px;\n"
"    text-align: center; \n"
"}\n"
""));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Country1 = new QLabel(centralwidget);
        Country1->setObjectName("Country1");
        Country1->setGeometry(QRect(120, 140, 211, 61));
        Country1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 16px; \n"
"    font-weight: bold; \n"
"    color: #34495e; \n"
"    background-color: #ecf0f1; \n"
"    border: 2px solid #7f8c8d; \n"
"    border-radius: 10px; \n"
"    padding: 5px; \n"
"    text-align: center; \n"
"}\n"
""));
        Country1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Country2 = new QLabel(centralwidget);
        Country2->setObjectName("Country2");
        Country2->setGeometry(QRect(480, 140, 201, 61));
        Country2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 16px; \n"
"    font-weight: bold; \n"
"    color: #34495e; \n"
"    background-color: #ecf0f1; \n"
"    border: 2px solid #7f8c8d; \n"
"    border-radius: 10px; \n"
"    padding: 5px; \n"
"    text-align: center; \n"
"}\n"
""));
        Country2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ConfirmButton = new QPushButton(centralwidget);
        ConfirmButton->setObjectName("ConfirmButton");
        ConfirmButton->setGeometry(QRect(370, 280, 80, 24));
        ConfirmButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2ecc71; \n"
"    color: white; \n"
"    border: 2px solid #27ae60; \n"
"    border-radius: 10px; \n"
"    font-size: 16px; \n"
"    font-weight: bold; \n"
"    padding: 10px 20px; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #27ae60;  \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1e8449; \n"
"}\n"
""));
        ConfirmButton->setIconSize(QSize(300, 300));
        checkBox1 = new QCheckBox(centralwidget);
        checkBox1->setObjectName("checkBox1");
        checkBox1->setGeometry(QRect(220, 240, 78, 22));
        checkBox1->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    spacing: 10px;\n"
"    font-size: 14px;\n"
"    color: #2c3e50;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px; \n"
"    height: 20px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    background-color: #ecf0f1;\n"
"    border: 2px solid #7f8c8d;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #27ae60; \n"
"    border: 2px solid #1e8449;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover {\n"
"    background-color: #bdc3c7; \n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"    background-color: #2ecc71; \n"
"}\n"
""));
        checkBox2 = new QCheckBox(centralwidget);
        checkBox2->setObjectName("checkBox2");
        checkBox2->setGeometry(QRect(560, 230, 71, 41));
        checkBox2->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    spacing: 10px;\n"
"    font-size: 14px;\n"
"    color: #2c3e50;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px; \n"
"    height: 20px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    background-color: #ecf0f1;\n"
"    border: 2px solid #7f8c8d;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #27ae60; \n"
"    border: 2px solid #1e8449;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover {\n"
"    background-color: #bdc3c7; \n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"    background-color: #2ecc71; \n"
"}\n"
""));
        Neimportant = new QLabel(centralwidget);
        Neimportant->setObjectName("Neimportant");
        Neimportant->setGeometry(QRect(540, 350, 61, 61));
        Neimportant->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 16px; \n"
"    font-weight: bold; \n"
"    color: #34495e; \n"
"    background-color: #ecf0f1; \n"
"    border: 2px solid #7f8c8d; \n"
"    border-radius: 10px; \n"
"    padding: 5px; \n"
"    text-align: center; \n"
"}\n"
""));
        Neimportant->setAlignment(Qt::AlignmentFlag::AlignCenter);
        LabelNivel = new QLabel(centralwidget);
        LabelNivel->setObjectName("LabelNivel");
        LabelNivel->setGeometry(QRect(600, 350, 51, 61));
        LabelNivel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 16px; \n"
"    font-weight: bold; \n"
"    color: #34495e; \n"
"    background-color: #ecf0f1; \n"
"    border: 2px solid #7f8c8d; \n"
"    border-radius: 10px; \n"
"    padding: 5px; \n"
"    text-align: center; \n"
"}\n"
""));
        LabelNivel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        rerollLabel1 = new QLabel(centralwidget);
        rerollLabel1->setObjectName("rerollLabel1");
        rerollLabel1->setGeometry(QRect(10, 310, 161, 41));
        rerollLabel1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 16px; \n"
"    font-weight: bold; \n"
"    color: #34495e; \n"
"    background-color: #ecf0f1; \n"
"    border: 2px solid #7f8c8d; \n"
"    border-radius: 10px; \n"
"    padding: 5px; \n"
"    text-align: center; \n"
"}\n"
""));
        rerollLabel1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        rerollLabel2 = new QLabel(centralwidget);
        rerollLabel2->setObjectName("rerollLabel2");
        rerollLabel2->setGeometry(QRect(170, 310, 31, 41));
        rerollLabel2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-size: 16px; \n"
"    font-weight: bold; \n"
"    color: #34495e; \n"
"    background-color: #ecf0f1; \n"
"    border: 2px solid #7f8c8d; \n"
"    border-radius: 10px; \n"
"    padding: 5px; \n"
"    text-align: center; \n"
"}\n"
""));
        rerollLabel2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        rerollButton = new QPushButton(centralwidget);
        rerollButton->setObjectName("rerollButton");
        rerollButton->setGeometry(QRect(170, 360, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Who's BIGGER?", nullptr));
        Country1->setText(QCoreApplication::translate("MainWindow", "Tara1", nullptr));
        Country2->setText(QCoreApplication::translate("MainWindow", "Tara2", nullptr));
        ConfirmButton->setText(QCoreApplication::translate("MainWindow", "SEND", nullptr));
        checkBox1->setText(QString());
        checkBox2->setText(QString());
        Neimportant->setText(QCoreApplication::translate("MainWindow", "Nivel:", nullptr));
        LabelNivel->setText(QString());
        rerollLabel1->setText(QCoreApplication::translate("MainWindow", "Re-rool remaining:", nullptr));
        rerollLabel2->setText(QString());
        rerollButton->setText(QCoreApplication::translate("MainWindow", "Re-rool", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
