#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

loginwindow::loginwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loginwindow)
{
    ui->setupUi(this);
    connect(ui->leaderboardsButton, &QPushButton::clicked, this, &loginwindow::on_leaderboardsButton_clicked);
}

loginwindow::~loginwindow()
{
    delete ui;
}

void loginwindow::on_startButton_clicked()
{
    loginSuccessful();
    close();
}

QString loginwindow::getUsername() const {
    return ui->textEdit->toPlainText();
}

void loginwindow::leaderboards()
{
    QString filePath = "C:/Users/gabii/Desktop/HigherOrLower/leaderboards.txt";
    static QVector<UserData> users;

    users.clear();

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Eroare", "Nu se poate deschide fisierul de leaderboards");
        return;
    }

    QTextStream in(&file);
    QString line;
    while (!in.atEnd()) {
        QString username;
        int score;
        in >> username >> score;

        users.append({username, score});
    }
    file.close();

    for (int i = 0; i < users.size() - 1; ++i) {
        for (int j = 0; j < users.size() - i - 1; ++j) {
            if (users[j].score < users[j + 1].score) {
                std::swap(users[j], users[j + 1]);
            }
        }
    }

    QString leaderboardText = "Top 10 Leaderboards:\n";
    int count = qMin(users.size(), 10);
    for (int i = 0; i < count; ++i) {
        leaderboardText += QString::number(i + 1) + ". " + users[i].username + " - " +
                           QString::number(users[i].score) + "\n";
    }

    QMessageBox::information(this, "Leaderboards", leaderboardText);
}

void loginwindow::on_leaderboardsButton_clicked()
{
    leaderboards();
}
