/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionExit;
    QAction *actionSelect;
    QAction *actionRectangle;
    QAction *actionCircle;
    QAction *actionPolygon;
    QAction *actionNew;
    QAction *actionCopy;
    QAction *actionSelectAll;
    QAction *actionDelete;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionAddLayer;
    QAction *actionInsertLayer;
    QAction *actionDeleteLayer;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuMode;
    QMenu *menuEdit;
    QMenu *menuLayer;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(800, 853);
        actionExit = new QAction(MainWindowClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionSelect = new QAction(MainWindowClass);
        actionSelect->setObjectName(QStringLiteral("actionSelect"));
        actionSelect->setCheckable(true);
        actionRectangle = new QAction(MainWindowClass);
        actionRectangle->setObjectName(QStringLiteral("actionRectangle"));
        actionRectangle->setCheckable(true);
        actionCircle = new QAction(MainWindowClass);
        actionCircle->setObjectName(QStringLiteral("actionCircle"));
        actionCircle->setCheckable(true);
        actionPolygon = new QAction(MainWindowClass);
        actionPolygon->setObjectName(QStringLiteral("actionPolygon"));
        actionPolygon->setCheckable(true);
        actionNew = new QAction(MainWindowClass);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionCopy = new QAction(MainWindowClass);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionSelectAll = new QAction(MainWindowClass);
        actionSelectAll->setObjectName(QStringLiteral("actionSelectAll"));
        actionDelete = new QAction(MainWindowClass);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        actionPaste = new QAction(MainWindowClass);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionUndo = new QAction(MainWindowClass);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionRedo = new QAction(MainWindowClass);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionOpen = new QAction(MainWindowClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindowClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionAddLayer = new QAction(MainWindowClass);
        actionAddLayer->setObjectName(QStringLiteral("actionAddLayer"));
        actionInsertLayer = new QAction(MainWindowClass);
        actionInsertLayer->setObjectName(QStringLiteral("actionInsertLayer"));
        actionDeleteLayer = new QAction(MainWindowClass);
        actionDeleteLayer->setObjectName(QStringLiteral("actionDeleteLayer"));
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuMode = new QMenu(menuBar);
        menuMode->setObjectName(QStringLiteral("menuMode"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuLayer = new QMenu(menuBar);
        menuLayer->setObjectName(QStringLiteral("menuLayer"));
        MainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuMode->menuAction());
        menuBar->addAction(menuLayer->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuMode->addAction(actionSelect);
        menuMode->addAction(actionRectangle);
        menuMode->addAction(actionCircle);
        menuMode->addAction(actionPolygon);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionDelete);
        menuEdit->addAction(actionSelectAll);
        menuLayer->addAction(actionAddLayer);
        menuLayer->addAction(actionInsertLayer);
        menuLayer->addAction(actionDeleteLayer);
        menuLayer->addSeparator();

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "Canvas 3D", 0));
        actionExit->setText(QApplication::translate("MainWindowClass", "Exit", 0));
        actionSelect->setText(QApplication::translate("MainWindowClass", "Select", 0));
        actionRectangle->setText(QApplication::translate("MainWindowClass", "Rectangle", 0));
        actionCircle->setText(QApplication::translate("MainWindowClass", "Circle", 0));
        actionPolygon->setText(QApplication::translate("MainWindowClass", "Polygon", 0));
        actionNew->setText(QApplication::translate("MainWindowClass", "New", 0));
        actionNew->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+N", 0));
        actionCopy->setText(QApplication::translate("MainWindowClass", "Copy", 0));
        actionCopy->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+C", 0));
        actionSelectAll->setText(QApplication::translate("MainWindowClass", "Select All", 0));
        actionSelectAll->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+A", 0));
        actionDelete->setText(QApplication::translate("MainWindowClass", "Delete", 0));
        actionDelete->setShortcut(QApplication::translate("MainWindowClass", "Del", 0));
        actionPaste->setText(QApplication::translate("MainWindowClass", "Paste", 0));
        actionPaste->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+V", 0));
        actionUndo->setText(QApplication::translate("MainWindowClass", "Undo", 0));
        actionUndo->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+Z", 0));
        actionRedo->setText(QApplication::translate("MainWindowClass", "Redo", 0));
        actionRedo->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+Y", 0));
        actionOpen->setText(QApplication::translate("MainWindowClass", "Open", 0));
        actionOpen->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+O", 0));
        actionSave->setText(QApplication::translate("MainWindowClass", "Save", 0));
        actionSave->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+S", 0));
        actionAddLayer->setText(QApplication::translate("MainWindowClass", "Add Layer", 0));
        actionInsertLayer->setText(QApplication::translate("MainWindowClass", "Insert Layer", 0));
        actionDeleteLayer->setText(QApplication::translate("MainWindowClass", "Delete Layer", 0));
        menuFile->setTitle(QApplication::translate("MainWindowClass", "File", 0));
        menuMode->setTitle(QApplication::translate("MainWindowClass", "Mode", 0));
        menuEdit->setTitle(QApplication::translate("MainWindowClass", "Edit", 0));
        menuLayer->setTitle(QApplication::translate("MainWindowClass", "Layer", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
