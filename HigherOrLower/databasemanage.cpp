#include "databasemanage.h"
#include <QSqlError>
#include <QDebug>

databaseManage::databaseManage() {

    static DatabaseManager instance;
    return instance;
}
databasemanage::~databasemanage() {
    if (database.isOpen()) {
        database.close();
    }
}
bool databasemanage::connectToDatabase(const QString& dbPath) {
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(dbPath);

    if (!database.open()) {
        qDebug() << "Eroare la conectarea la baza de date:" << database.lastError().text();
        return false;
    }

    qDebug() << "Conexiune reusita la baza de date!";
    return true;
}

QSqlDatabase DatabaseManager::getDatabase() const {
    return database;
}
