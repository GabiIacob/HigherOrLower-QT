 #ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class loginwindow;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int reroll=3;
    void setCountry1Text(const QString &text);
    void setCountry2Text(const QString &text);
    void conflict();
    bool corect(long value1, long value2);
    void setNivel(int value);
    void resetButtonState();
    bool isButtonClicked();
    void isClicked();
    void updateRerollButtonState();
    bool buttonClicked = false;
public slots:
    bool on_rerollButton_clicked();

private:
    Ui::MainWindow *ui;
    loginwindow *loginWin;
};

#endif // MAINWINDOW_H
