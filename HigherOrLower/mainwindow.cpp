#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    connect(ui->ConfirmButton, &QPushButton::clicked, this, &MainWindow::isClicked);
    connect(ui->checkBox1, &QCheckBox::toggled, this, &MainWindow::conflict);
    connect(ui->checkBox2, &QCheckBox::toggled, this, &MainWindow::conflict);
    connect(ui->rerollButton, &QPushButton::clicked, this, &MainWindow::on_rerollButton_clicked);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::setCountry1Text(const QString &text) {
    ui->Country1->setText(text);
}

void MainWindow::setCountry2Text(const QString &text) {
    ui->Country2->setText(text);
}

void MainWindow::conflict() {
    if (ui->checkBox1->isChecked() && ui->checkBox2->isChecked()) {
        QMessageBox msgBox;
        msgBox.setText("Nu poti bifa amandoua checkbox-uri");
        msgBox.exec();
        ui->checkBox1->setChecked(false);
        ui->checkBox2->setChecked(false);
    }
}

bool MainWindow::corect(long value1, long value2) {
    if (!ui->checkBox1->isChecked() && !ui->checkBox2->isChecked()) {
        return false;
    }

    if (value1 > value2 && ui->checkBox1->isChecked()) {
        return true;
    } else if (value2 > value1 && ui->checkBox2->isChecked()) {
        return true;
    } else if (value1 == value2) {
        if (ui->checkBox1->isChecked() && ui->checkBox2->isChecked()) {
            return false;
        } else {
            return true;
        }
    }
    return false;
}

void MainWindow::resetButtonState() {
    buttonClicked = false;
}

void MainWindow::isClicked() {
    buttonClicked = true;
}

bool MainWindow::isButtonClicked() {
    return buttonClicked;
}

void MainWindow::setNivel(int value) {
    ui->LabelNivel->setText(QString::number(value));
}

bool MainWindow::on_rerollButton_clicked() {

    // rerollLabel2->setText(QString::number(reroll));
    buttonClicked = true;
    return true;

    QMessageBox msgBox;
    msgBox.setText("Nu mai ai reroll-uri disponibile!");
    msgBox.exec();
    return false;
}

void MainWindow::updateRerollButtonState() {
    ui->rerollLabel2->setText(QString::number(reroll));
}
