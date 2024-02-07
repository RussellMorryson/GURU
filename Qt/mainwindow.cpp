#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <script.h>
#include <string>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);   
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_OpenButton_clicked() {
    QString path = QFileDialog::getOpenFileName(
        this,
        "Выбор файла для анализа",
        "C:\\",
        "Excell (*.xlsx) ;; All files (*.*);");
    ui->TextBoxOpen->setPlainText(path);
}

void MainWindow::on_SaveButton_clicked() {
    QString save_Path = QFileDialog::getExistingDirectory(this, "Выбор места сохранения", "C:\\");
    ui->TextBoxSave->setPlainText(save_Path);
}

void MainWindow::on_ScriptButton_clicked() {
    QString script_Path = QFileDialog::getOpenFileName(
        this,
        "Выбор скрипта",
        "C:\\",
        "Python script (*.py) ;; All files (*.*);");
    ui->TextBoxScript->setPlainText(script_Path);
}

void MainWindow::on_CancelButton_clicked() {
    this->close();
}

void MainWindow::on_StartButton_clicked() {
    QString filePath = ui->TextBoxOpen->toPlainText();
    std::string fpath = filePath.toLocal8Bit().constData();

    QString savePath = ui->TextBoxSave->toPlainText();
    std::string spath = savePath.toLocal8Bit().constData();

    QString scriptPath = ui->TextBoxScript->toPlainText();
    std::string scpath = scriptPath.toLocal8Bit().constData();

    int res = scriptExec(fpath, spath, scpath);

    if (res == 0) {
        QMessageBox::warning(this, "Внимание","Анализ и расчеты выполнены успешно!");
        this->close();
    } else {        
        QMessageBox::warning(this, "Внимание","При расчетах возникли ошибки!\nПовторите попытку!");
    }
}


