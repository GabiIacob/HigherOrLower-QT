#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QString>
#include <QSqlDatabase>
#include <QList>
#include <QPair>
class DatabaseManager {
public:
    static DatabaseManager& instance();
    bool connectToDatabase(const QString& dbPath);
    void printTable(const QString& tableName);
    void saveTableData(const QString& tableName, QList<QPair<QString, long>>& data);
    QSqlDatabase getDatabase() const;
    DatabaseManager();
    ~DatabaseManager();
    DatabaseManager(const DatabaseManager&) = delete;
    DatabaseManager& operator=(const DatabaseManager&) = delete;

    QSqlDatabase database;
    static void writeScoreToFile(const QString &username, int score);
};

#endif // DATABASEMANAGER_H
