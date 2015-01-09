/********************************************************************************
** Form generated from reading UI file 'adminmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMAINWINDOW_H
#define UI_ADMINMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminMainWindow
{
public:
    QAction *viewAction;
    QAction *searchAction;
    QAction *addAction;
    QAction *deleteAction;
    QAction *editAction;
    QAction *freshAction;
    QAction *saveAction;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *AdminMainWindow)
    {
        if (AdminMainWindow->objectName().isEmpty())
            AdminMainWindow->setObjectName(QStringLiteral("AdminMainWindow"));
        AdminMainWindow->resize(800, 600);
        viewAction = new QAction(AdminMainWindow);
        viewAction->setObjectName(QStringLiteral("viewAction"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/toolbar/resource/view.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewAction->setIcon(icon);
        searchAction = new QAction(AdminMainWindow);
        searchAction->setObjectName(QStringLiteral("searchAction"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/toolbar/resource/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchAction->setIcon(icon1);
        addAction = new QAction(AdminMainWindow);
        addAction->setObjectName(QStringLiteral("addAction"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/toolbar/resource/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addAction->setIcon(icon2);
        deleteAction = new QAction(AdminMainWindow);
        deleteAction->setObjectName(QStringLiteral("deleteAction"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/toolbar/resource/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteAction->setIcon(icon3);
        editAction = new QAction(AdminMainWindow);
        editAction->setObjectName(QStringLiteral("editAction"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/toolbar/resource/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        editAction->setIcon(icon4);
        freshAction = new QAction(AdminMainWindow);
        freshAction->setObjectName(QStringLiteral("freshAction"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/toolbar/resource/fresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        freshAction->setIcon(icon5);
        saveAction = new QAction(AdminMainWindow);
        saveAction->setObjectName(QStringLiteral("saveAction"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/toolbar/resource/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveAction->setIcon(icon6);
        centralwidget = new QWidget(AdminMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_5 = new QHBoxLayout(centralwidget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_4->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(39, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_4->addWidget(pushButton_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_4->addWidget(pushButton_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout_2->addWidget(plainTextEdit);


        horizontalLayout_5->addLayout(verticalLayout_2);

        AdminMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        AdminMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AdminMainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(AdminMainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        AdminMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(viewAction);
        toolBar->addAction(addAction);
        toolBar->addAction(saveAction);
        toolBar->addAction(searchAction);
        toolBar->addAction(editAction);
        toolBar->addAction(deleteAction);
        toolBar->addAction(freshAction);

        retranslateUi(AdminMainWindow);

        QMetaObject::connectSlotsByName(AdminMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminMainWindow)
    {
        AdminMainWindow->setWindowTitle(QApplication::translate("AdminMainWindow", "MainWindow", 0));
        viewAction->setText(QApplication::translate("AdminMainWindow", "\346\237\245\347\234\213", 0));
#ifndef QT_NO_TOOLTIP
        viewAction->setToolTip(QApplication::translate("AdminMainWindow", "\346\237\245\347\234\213", 0));
#endif // QT_NO_TOOLTIP
        searchAction->setText(QApplication::translate("AdminMainWindow", "\346\237\245\346\211\276", 0));
#ifndef QT_NO_TOOLTIP
        searchAction->setToolTip(QApplication::translate("AdminMainWindow", "\346\237\245\346\211\276", 0));
#endif // QT_NO_TOOLTIP
        addAction->setText(QApplication::translate("AdminMainWindow", "\346\267\273\345\212\240", 0));
#ifndef QT_NO_TOOLTIP
        addAction->setToolTip(QApplication::translate("AdminMainWindow", "\346\267\273\345\212\240", 0));
#endif // QT_NO_TOOLTIP
        deleteAction->setText(QApplication::translate("AdminMainWindow", "\345\210\240\351\231\244", 0));
#ifndef QT_NO_TOOLTIP
        deleteAction->setToolTip(QApplication::translate("AdminMainWindow", "\345\210\240\351\231\244", 0));
#endif // QT_NO_TOOLTIP
        editAction->setText(QApplication::translate("AdminMainWindow", "\347\274\226\350\276\221", 0));
#ifndef QT_NO_TOOLTIP
        editAction->setToolTip(QApplication::translate("AdminMainWindow", "\347\274\226\350\276\221", 0));
#endif // QT_NO_TOOLTIP
        freshAction->setText(QApplication::translate("AdminMainWindow", "\345\210\267\346\226\260", 0));
#ifndef QT_NO_TOOLTIP
        freshAction->setToolTip(QApplication::translate("AdminMainWindow", "\345\210\267\346\226\260", 0));
#endif // QT_NO_TOOLTIP
        saveAction->setText(QApplication::translate("AdminMainWindow", "\344\277\235\345\255\230", 0));
        pushButton->setText(QApplication::translate("AdminMainWindow", "\351\246\226\351\241\265", 0));
        pushButton_3->setText(QApplication::translate("AdminMainWindow", "\344\270\212\344\270\200\351\241\265", 0));
        pushButton_4->setText(QApplication::translate("AdminMainWindow", "\344\270\213\344\270\200\351\241\265", 0));
        pushButton_2->setText(QApplication::translate("AdminMainWindow", "\345\260\276\351\241\265", 0));
        label->setText(QApplication::translate("AdminMainWindow", "\347\254\254", 0));
        label_3->setText(QApplication::translate("AdminMainWindow", "000", 0));
        label_2->setText(QApplication::translate("AdminMainWindow", "\351\241\265", 0));
        label_4->setText(QApplication::translate("AdminMainWindow", "\345\205\261", 0));
        label_5->setText(QApplication::translate("AdminMainWindow", "111", 0));
        label_6->setText(QApplication::translate("AdminMainWindow", "\351\241\265", 0));
        toolBar->setWindowTitle(QApplication::translate("AdminMainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminMainWindow: public Ui_AdminMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMAINWINDOW_H
