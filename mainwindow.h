#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QPushButton>
#include <QButtonGroup>
#include "util.h"
#include <QDebug>
#include <QMenu>
#include <QMenuBar>
#include <QToolBar>
#include <QAction>
#include "logindialog.h"
#define COLS 3
#define ROWS 3
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void makeBoard(QGridLayout* gridLayout);
    void setBoard();
    void viewBoard();
    void createMenus();
    void createToolbars();
    //void addConnections();
    //bool login();
private:
    Ui::MainWindow *ui;
    QPushButton *buttons[COLS][ROWS];
    QGridLayout *gridLayout;
    QAction *loginAction;
public slots:
    void slotAdmin();
};

#endif // MAINWINDOW_H
