#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H
#include <QWidget>
namespace Ui {
class loginwindow;
}

struct UserData {
    QString username;
    int score;
};


class loginwindow : public QWidget
{
    Q_OBJECT

public:
    explicit loginwindow(QWidget *parent = nullptr);
    ~loginwindow();
    QString getUsername() const;
    void leaderboards();

signals:
    void loginSuccessful();

private slots:
    void on_startButton_clicked();
    void on_leaderboardsButton_clicked();

private:
    Ui::loginwindow *ui;
};

#endif // LOGINWINDOW_H
