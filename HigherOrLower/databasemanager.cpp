#include "databasemanager.h"
#include <QSqlQuery>
#include <QSqlRecord>
#include <QDebug>
#include <QSqlError>
#include <QFile>
#include <QList>
#include <QPair>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QString>

DatabaseManager::DatabaseManager() {
}

DatabaseManager::~DatabaseManager() {
}

DatabaseManager& DatabaseManager::instance() {
    static DatabaseManager instance;
    return instance;
}

bool DatabaseManager::connectToDatabase(const QString& dbPath) {
    QFile dbFile(dbPath);
    if (!dbFile.exists()) {
        qDebug() << "database file does not exist at:" << dbPath;
        return false;
    }

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(dbPath);

    if (database.open()) {
        qDebug() << "database connected successfully";
        return true;
    } else {
        qDebug() << "failed to open database:" << database.lastError().text();
        return false;
    }
}

QSqlDatabase DatabaseManager::getDatabase() const {
    return database;
}

void DatabaseManager::saveTableData(const QString& tableName, QList<QPair<QString, long>>& data) {
    if (!database.isOpen()) {
        qDebug() << "database is not open";
        return;
    }

    QStringList tables = database.tables();
    if (!tables.contains(tableName, Qt::CaseInsensitive)) {
        qDebug() << "table" << tableName << "does not exist in the database";
        return;
    }

    QSqlQuery query;
    QString queryString = QString("SELECT Tara, Populatie FROM %1").arg(tableName);
    query.prepare(queryString);

    if (!query.exec()) {
        qDebug() << "query execution failed:" << query.lastError().text();
        return;
    }

    if (!query.next()) {
        qDebug() << "no rows found in table" << tableName;
        return;
    }

    do {
        QString tara = query.value("Tara").toString();
        int populatie = query.value("Populatie").toLongLong();
        data.append(qMakePair(tara, populatie));
    } while (query.next());

    qDebug() << "data saved successfully";
}

void DatabaseManager::writeScoreToFile(const QString &username, int score) {
    QString filePath = "C:/Users/gabii/Desktop/HigherOrLower/leaderboards.txt";

    QFile file(filePath);
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        qDebug() << "unable to open file for writing";
        return;
    }

    QTextStream out(&file);
    out << username << " " << score << "\n";
    file.close();

    qDebug() << "score has been saved to file";
}
