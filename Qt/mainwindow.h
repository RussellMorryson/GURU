#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <script.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_OpenButton_clicked();

    void on_ScriptButton_clicked();

    void on_SaveButton_clicked();

    void on_CancelButton_clicked();

    void on_StartButton_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
