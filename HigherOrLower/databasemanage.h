#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>
#include <QString>

class DatabaseManager
{
public:
    static DatabaseManager& instance(); // Singleton
    bool connectToDatabase(const QString& dbPath);
    QSqlDatabase getDatabase() const;

private:
    DatabaseManager();
    ~DatabaseManager();
    DatabaseManager(const DatabaseManager&) = delete; // Interzicerea copierii
    DatabaseManager& operator=(const DatabaseManager&) = delete;

    QSqlDatabase database;
};

#endif // DATABASEMANAGER_H
