#ifndef ADMINMAINWINDOW_H
#define ADMINMAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "util.h"
#include "dish.h"
#include <QComboBox>
#include "adddialog.h"
#define ROWS 8
#define COLS 4


namespace Ui {
class AdminMainWindow;
}

class AdminMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminMainWindow(QWidget *parent = 0);
    ~AdminMainWindow();
    void showAllDishes();

private:
    //QStringList = new  {"菜名","类型","口味","价格"};
    Ui::AdminMainWindow *ui;
    int m_nTotal;        //总记录数
    int m_nPageSize;     //每页显示条数
    int m_nCurPageSize;  //当前页数据条数
    int m_nStart;        //起始记录数
    int m_nCurPageNum;   //当前页码
    int m_nPageCount;    //总页数
//    int m_nCols;         //表格的列数
//    int m_nRows;         //表格的行数
    AddDialog addDialog;
    void initTableWidget();
    void initPage();
    void showPage(int pageNum);
    void fresh();

public slots:
    void slotAdd();
    void slotDelete();
    void slotEdit();
    void slotSearch();
    void slotSave();
    void slotFresh();
    void slotCloseAddDialog();
    void slotNextPage();
    void slotPreviousPage();
    void slotFirstPage();
    void slotLastPage();
};

#endif // ADMINMAINWINDOW_H
