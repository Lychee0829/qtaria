/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionOpen;
    QAction *actionCredits;
    QAction *actionProject;
    QAction *actionPreferences;
    QAction *actionDocumentation;
    QAction *actionResume;
    QAction *actionPause;
    QAction *actionAddNew;
    QAction *actionResumeAll;
    QAction *actionPauseAll;
    QAction *actionDelete;
    QAction *actionAdd_from_URL;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QMenu *menuEdit;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(693, 455);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/QtAria-square-logo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionCredits = new QAction(MainWindow);
        actionCredits->setObjectName(QString::fromUtf8("actionCredits"));
        actionProject = new QAction(MainWindow);
        actionProject->setObjectName(QString::fromUtf8("actionProject"));
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionPreferences->setAutoRepeat(false);
        actionDocumentation = new QAction(MainWindow);
        actionDocumentation->setObjectName(QString::fromUtf8("actionDocumentation"));
        actionResume = new QAction(MainWindow);
        actionResume->setObjectName(QString::fromUtf8("actionResume"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/play-logo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionResume->setIcon(icon1);
        actionResume->setAutoRepeat(true);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/pause-logo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon2);
        actionAddNew = new QAction(MainWindow);
        actionAddNew->setObjectName(QString::fromUtf8("actionAddNew"));
        actionAddNew->setCheckable(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/add-logo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddNew->setIcon(icon3);
        actionAddNew->setMenuRole(QAction::ApplicationSpecificRole);
        actionAddNew->setIconVisibleInMenu(true);
        actionResumeAll = new QAction(MainWindow);
        actionResumeAll->setObjectName(QString::fromUtf8("actionResumeAll"));
        actionResumeAll->setAutoRepeat(true);
        actionPauseAll = new QAction(MainWindow);
        actionPauseAll->setObjectName(QString::fromUtf8("actionPauseAll"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/delete-logo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon4);
        actionAdd_from_URL = new QAction(MainWindow);
        actionAdd_from_URL->setObjectName(QString::fromUtf8("actionAdd_from_URL"));
        actionAdd_from_URL->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 4, 0);
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(611, 0));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setEnabled(true);
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 681, 204));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 0, 4, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));

        verticalLayout->addLayout(verticalLayout_4);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 0));

        verticalLayout_3->addWidget(widget);

        verticalLayout_3->setStretch(0, 10);
        verticalLayout_3->setStretch(1, 8);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 693, 24));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setAcceptDrops(false);
        toolBar->setMovable(false);
        toolBar->setFloatable(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionAdd_from_URL);
        menuFile->addAction(actionAddNew);
        menuFile->addAction(actionExit);
        menuAbout->addAction(actionDocumentation);
        menuAbout->addAction(actionProject);
        menuEdit->addAction(actionPreferences);
        menuEdit->addAction(actionResume);
        menuEdit->addAction(actionResumeAll);
        menuEdit->addAction(actionPause);
        menuEdit->addAction(actionPauseAll);
        toolBar->addAction(actionAddNew);
        toolBar->addSeparator();
        toolBar->addAction(actionPause);
        toolBar->addSeparator();
        toolBar->addAction(actionResume);
        toolBar->addSeparator();
        toolBar->addAction(actionDelete);
        toolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Qtaria - A QT GUI for Aria2", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionCredits->setText(QCoreApplication::translate("MainWindow", "Credits", nullptr));
        actionProject->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionPreferences->setText(QCoreApplication::translate("MainWindow", "Preferences", nullptr));
        actionDocumentation->setText(QCoreApplication::translate("MainWindow", "Documentation", nullptr));
        actionResume->setText(QCoreApplication::translate("MainWindow", "Resume", nullptr));
        actionPause->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        actionAddNew->setText(QCoreApplication::translate("MainWindow", "Add .torrent", nullptr));
#if QT_CONFIG(tooltip)
        actionAddNew->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Add New</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionAddNew->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        actionAddNew->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        actionAddNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionResumeAll->setText(QCoreApplication::translate("MainWindow", "Resume All", nullptr));
#if QT_CONFIG(tooltip)
        actionResumeAll->setToolTip(QCoreApplication::translate("MainWindow", "Resume All", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionResumeAll->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPauseAll->setText(QCoreApplication::translate("MainWindow", "Pause All", nullptr));
#if QT_CONFIG(tooltip)
        actionPauseAll->setToolTip(QCoreApplication::translate("MainWindow", "Pause All", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPauseAll->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        actionDelete->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Delete</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAdd_from_URL->setText(QCoreApplication::translate("MainWindow", "Add from URL", nullptr));
#if QT_CONFIG(shortcut)
        actionAdd_from_URL->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
