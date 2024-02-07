/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *OpenButton;
    QPushButton *SaveButton;
    QPushButton *ScriptButton;
    QPushButton *CancelButton;
    QPushButton *StartButton;
    QLabel *LabelAuthor;
    QLabel *Label1;
    QLabel *Label2;
    QLabel *label_3;
    QPlainTextEdit *TextBoxOpen;
    QPlainTextEdit *TextBoxSave;
    QPlainTextEdit *TextBoxScript;
    QLabel *Title_2;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(738, 293);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setDocumentMode(false);
        MainWindow->setDockNestingEnabled(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        OpenButton = new QPushButton(centralwidget);
        OpenButton->setObjectName("OpenButton");
        OpenButton->setGeometry(QRect(630, 70, 91, 31));
        QFont font;
        font.setBold(false);
        OpenButton->setFont(font);
        OpenButton->setCursor(QCursor(Qt::PointingHandCursor));
        SaveButton = new QPushButton(centralwidget);
        SaveButton->setObjectName("SaveButton");
        SaveButton->setGeometry(QRect(630, 130, 91, 31));
        SaveButton->setFont(font);
        SaveButton->setCursor(QCursor(Qt::PointingHandCursor));
        ScriptButton = new QPushButton(centralwidget);
        ScriptButton->setObjectName("ScriptButton");
        ScriptButton->setGeometry(QRect(630, 190, 91, 31));
        ScriptButton->setFont(font);
        ScriptButton->setCursor(QCursor(Qt::PointingHandCursor));
        CancelButton = new QPushButton(centralwidget);
        CancelButton->setObjectName("CancelButton");
        CancelButton->setGeometry(QRect(630, 240, 91, 31));
        CancelButton->setCursor(QCursor(Qt::PointingHandCursor));
        StartButton = new QPushButton(centralwidget);
        StartButton->setObjectName("StartButton");
        StartButton->setGeometry(QRect(490, 240, 131, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        StartButton->setFont(font1);
        StartButton->setCursor(QCursor(Qt::PointingHandCursor));
        LabelAuthor = new QLabel(centralwidget);
        LabelAuthor->setObjectName("LabelAuthor");
        LabelAuthor->setGeometry(QRect(10, 230, 171, 41));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        LabelAuthor->setFont(font2);
        Label1 = new QLabel(centralwidget);
        Label1->setObjectName("Label1");
        Label1->setGeometry(QRect(190, 50, 451, 16));
        QFont font3;
        font3.setPointSize(10);
        Label1->setFont(font3);
        Label2 = new QLabel(centralwidget);
        Label2->setObjectName("Label2");
        Label2->setGeometry(QRect(190, 110, 421, 16));
        Label2->setFont(font3);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(190, 170, 421, 16));
        label_3->setFont(font3);
        TextBoxOpen = new QPlainTextEdit(centralwidget);
        TextBoxOpen->setObjectName("TextBoxOpen");
        TextBoxOpen->setGeometry(QRect(190, 70, 431, 31));
        TextBoxOpen->setFont(font3);
        TextBoxOpen->setContextMenuPolicy(Qt::NoContextMenu);
        TextBoxOpen->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoPredictiveText);
        TextBoxSave = new QPlainTextEdit(centralwidget);
        TextBoxSave->setObjectName("TextBoxSave");
        TextBoxSave->setGeometry(QRect(190, 130, 431, 31));
        TextBoxSave->setFont(font3);
        TextBoxSave->setContextMenuPolicy(Qt::NoContextMenu);
        TextBoxSave->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoPredictiveText);
        TextBoxScript = new QPlainTextEdit(centralwidget);
        TextBoxScript->setObjectName("TextBoxScript");
        TextBoxScript->setGeometry(QRect(190, 190, 431, 31));
        TextBoxScript->setFont(font3);
        TextBoxScript->setContextMenuPolicy(Qt::NoContextMenu);
        TextBoxScript->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoPredictiveText);
        Title_2 = new QLabel(centralwidget);
        Title_2->setObjectName("Title_2");
        Title_2->setGeometry(QRect(10, 10, 511, 21));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setUnderline(false);
        Title_2->setFont(font4);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(10, 50, 171, 171));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(160, 160));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "GURU - Financial audit", nullptr));
        OpenButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        SaveButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262", nullptr));
        ScriptButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        CancelButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        StartButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\320\261\320\276\321\202\320\260\321\202\321\214", nullptr));
        LabelAuthor->setText(QCoreApplication::translate("MainWindow", "Gilmutdinov Ruslan - 2023\n"
"GitHub: RussellMorryson", nullptr));
        Label1->setText(QCoreApplication::translate("MainWindow", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\277\321\203\321\202\321\214 \320\272 \321\204\320\260\320\271\320\273\321\203 Excell \320\264\320\273\321\217 \320\260\320\275\320\260\320\273\320\270\320\267\320\260 \320\270\320\273\320\270 \320\275\320\260\320\266\320\274\320\270\321\202\320\265 \"\320\236\321\202\320\272\321\200\321\213\321\202\321\214\"", nullptr));
        Label2->setText(QCoreApplication::translate("MainWindow", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\277\321\203\321\202\321\214 \320\264\320\273\321\217 \321\201\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\276\320\262 \320\270\320\273\320\270 \320\275\320\260\320\266\320\274\320\270\321\202\320\265 \"\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262\"", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\277\321\203\321\202\321\214 \320\272 \321\201\320\272\321\200\320\270\320\277\321\202\321\203 \320\270\320\273\320\270 \320\275\320\260\320\266\320\274\320\270\321\202\320\265 \"\320\236\321\202\320\272\321\200\321\213\321\202\321\214\"", nullptr));
        Title_2->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\264\320\273\321\217 \320\260\320\275\320\260\320\273\320\270\320\267\320\260 \320\261\321\203\321\205\320\263\320\260\320\273\321\202\320\265\321\200\321\201\320\272\320\276\320\271 \320\276\321\202\321\207\320\265\321\202\320\275\320\276\321\201\321\202\320\270 \321\216\321\200\320\270\320\264\320\270\321\207\320\265\321\201\320\272\320\270\321\205 \320\273\320\270\321\206", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
