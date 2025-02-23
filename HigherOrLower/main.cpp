#include <QApplication>
#include <QDebug>
#include "mainwindow.h"
#include "databasemanager.h"
#include <QRandomGenerator>
#include <QMessageBox>
#include "loginwindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    loginwindow loginWindow;
    QObject::connect(&loginWindow, &loginwindow::loginSuccessful, [&]() {
        MainWindow mainWindow;
        mainWindow.setWindowTitle("Higher||Lower");
        mainWindow.show();
        QString username = loginWindow.getUsername();
        DatabaseManager& dbManager = DatabaseManager::instance();
        QString dbPath = "C:/Users/gabii/Desktop/Tari.sqlite";
        QList<QPair<QString, long>> countriesData;
        if (dbManager.connectToDatabase(dbPath)) {
            qDebug() << "Database connected successfully";

            dbManager.saveTableData("countries", countriesData);
        } else {
            qDebug() << "Failed to connect to the database";
        }
        int score = 0;
        do {
            int index1 = QRandomGenerator::global()->bounded(0, countriesData.size());
            mainWindow.setCountry1Text(countriesData[index1].first);

            int index2;
            do {
                index2 = QRandomGenerator::global()->bounded(0, countriesData.size());
            } while (index1 == index2);
            mainWindow.setCountry2Text(countriesData[index2].first);
            mainWindow.resetButtonState();
            while (!mainWindow.isButtonClicked()) {
                QCoreApplication::processEvents();}
            mainWindow.conflict();

            if (mainWindow.corect(countriesData[index1].second, countriesData[index2].second)) {
                QMessageBox msgBox;
                msgBox.setText("Raspuns corect, treci la urmatorul nivel");
                msgBox.exec();
                score++;
                mainWindow.setNivel(score);
            } else {
                QMessageBox msgBox;
                msgBox.setText("Ai pierdut! Scorul tau final este " + QString::number(score));
                msgBox.exec();
                DatabaseManager::writeScoreToFile(username, score);
                score = 0;
            }
        } while (1);
    });
    loginWindow.show();
    return app.exec();
}
