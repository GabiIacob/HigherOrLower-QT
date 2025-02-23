/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginwindow
{
public:
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_2;
    QPushButton *startButton;
    QPushButton *leaderboardsButton;

    void setupUi(QWidget *loginwindow)
    {
        if (loginwindow->objectName().isEmpty())
            loginwindow->setObjectName("loginwindow");
        loginwindow->resize(471, 338);
        label = new QLabel(loginwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 130, 161, 71));
        textEdit = new QTextEdit(loginwindow);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(210, 150, 104, 31));
        label_2 = new QLabel(loginwindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 0, 301, 111));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
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
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        startButton = new QPushButton(loginwindow);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(200, 230, 80, 24));
        leaderboardsButton = new QPushButton(loginwindow);
        leaderboardsButton->setObjectName("leaderboardsButton");
        leaderboardsButton->setGeometry(QRect(200, 270, 80, 24));

        retranslateUi(loginwindow);

        QMetaObject::connectSlotsByName(loginwindow);
    } // setupUi

    void retranslateUi(QWidget *loginwindow)
    {
        loginwindow->setWindowTitle(QCoreApplication::translate("loginwindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("loginwindow", "Enter an username:", nullptr));
        label_2->setText(QCoreApplication::translate("loginwindow", "HigherOrLower: Countries Edition", nullptr));
        startButton->setText(QCoreApplication::translate("loginwindow", "Start Game", nullptr));
        leaderboardsButton->setText(QCoreApplication::translate("loginwindow", "Leaderboards", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginwindow: public Ui_loginwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
