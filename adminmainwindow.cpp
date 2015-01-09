#include "adminmainwindow.h"
#include "UI/ui_adminmainwindow.h"

AdminMainWindow::AdminMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminMainWindow)
{
    ui->setupUi(this);
    initTableWidget();
    initPage();
    showAllDishes();
    connect(this->ui->addAction, SIGNAL(triggered()), this, SLOT(slotAdd()));
    connect(this->ui->firstPushButton, SIGNAL(clicked()), this, SLOT(slotFirstPage()));
    connect(this->ui->lastPushButton, SIGNAL(clicked()), this, SLOT(slotLastPage()));
    connect(this->ui->nextPushButton, SIGNAL(clicked()), this, SLOT(slotNextPage()));
    connect(this->ui->previousPushButton, SIGNAL(clicked()), this, SLOT(slotPreviousPage()));
}

AdminMainWindow::~AdminMainWindow()
{
    delete ui;
}

/**
 * @brief AdminMainWindow::showAllDishes
 * 在一个表格中显示所有的菜的信息
 */
void AdminMainWindow::showAllDishes()
{
    this->m_nCurPageNum = 1;
    showPage(this->m_nCurPageNum);
    this->ui->numLabel->setText(QString::number(this->m_nCurPageNum));
    this->ui->sumLabel->setText(QString::number(this->m_nPageCount));
    this->ui->previousPushButton->setDisabled(true);
}
/**
 * @brief AdminMainWindow::slotAdd 添加
 */
void AdminMainWindow::slotAdd()
{
    //获取当前页数据的条数
//    int n = this->m_nCurPageSize;
    addDialog.exec();
}

void AdminMainWindow::slotDelete()
{

}

void AdminMainWindow::slotEdit()
{

}

void AdminMainWindow::slotSearch()
{

}

void AdminMainWindow::slotSave()
{

}

/**
 * @brief AdminMainWindow::slotFresh
 */
void AdminMainWindow::slotFresh()
{
    showAllDishes();
}

void AdminMainWindow::slotCloseAddDialog()
{
    addDialog.close();
}

/**
 * @brief AdminMainWindow::slotNextPage
 * 下一页
 */
void AdminMainWindow::slotNextPage()
{
    this->m_nCurPageNum ++;
    showPage(this->m_nCurPageNum);
    this->ui->numLabel->setText(QString::number(this->m_nCurPageNum));
    this->ui->previousPushButton->setDisabled(false);
    this->ui->firstPushButton->setDisabled(false);
    if (this->m_nCurPageNum == this->m_nPageCount) {
        this->ui->nextPushButton->setDisabled(true);
        this->ui->lastPushButton->setDisabled(true);
    }
}

/**
 * @brief AdminMainWindow::slotPreviousPage
 * 上一页
 */
void AdminMainWindow::slotPreviousPage()
{
    this->m_nCurPageNum --;
    showPage(this->m_nCurPageNum);
    this->ui->numLabel->setText(QString::number(this->m_nCurPageNum));
    this->ui->nextPushButton->setDisabled(false);
    this->ui->lastPushButton->setDisabled(false);
    if (this->m_nCurPageNum == 1) {
        this->ui->previousPushButton->setDisabled(true);
        this->ui->firstPushButton->setDisabled(true);
    }
}

/**
 * @brief AdminMainWindow::slotFirstPage
 * 首页
 */
void AdminMainWindow::slotFirstPage()
{
    qDebug() << "First Page" << endl;
    this->m_nCurPageNum = 1;
    showPage(this->m_nCurPageNum);
    this->ui->previousPushButton->setDisabled(true);
    this->ui->lastPushButton->setDisabled(false);
    this->ui->nextPushButton->setDisabled(false);
}

/**
 * @brief AdminMainWindow::slotLastPage
 * 尾页
 */
void AdminMainWindow::slotLastPage()
{
    this->m_nCurPageNum = this->m_nPageCount;
    showPage(this->m_nCurPageNum);
    this->ui->numLabel->setText(QString::number(this->m_nCurPageNum));
    this->ui->nextPushButton->setDisabled(true);
    this->ui->firstPushButton->setDisabled(false);
    this->ui->previousPushButton->setDisabled(false);
}

void AdminMainWindow::initPage()
{
    Util *util = new Util();
    this->m_nStart = 0;
    this->m_nCurPageNum = 1;//当前页码设置为1
    this->m_nTotal = util->getAllDishesCount(); //数据总数
    this->m_nPageSize = ROWS;//设置每页显示数据的条数
    this->m_nPageCount = this->m_nTotal / this->m_nPageSize + 1;
    //计算页码总数
    if (this->m_nTotal % this->m_nPageSize == 0) {
        this->m_nPageCount = this->m_nTotal / this->m_nPageSize;
    } else {
        this->m_nPageCount = this->m_nTotal / this->m_nPageSize + 1;
    }
    if (this->m_nCurPageNum == this->m_nPageCount) {
        this->m_nCurPageSize = this->m_nTotal % this->m_nPageSize;
    } else {
        this->m_nCurPageSize = this->m_nPageSize;
    }
}

void AdminMainWindow::showPage(int pageNum)
{
    Util *util = new Util();
    int pageSize = this->m_nPageSize;
    vector<Dish> page;
    if (pageNum < this->m_nPageCount) { //如果页码小于页码总数
        //查询一页数据
        page = util->queryOnePage(pageNum, pageSize);
    } else {
        //查询尾页数据
        page = util->queryLastPage(pageNum, pageSize, this->m_nCurPageSize);
    }
    qDebug() << page.size() << endl;
    Dish dish;
    //显示首页的数据
    for (size_t i=0; i<page.size(); ++i){
        dish = page.at(i);
        QString name = dish.getName();
        QString type = dish.getType();
        QString style = dish.getStyle();
        double price = dish.getPrice();
        this->ui->tableWidget->setItem(i,0,new QTableWidgetItem(name));
        this->ui->tableWidget->setItem(i,1,new QTableWidgetItem(type));
        this->ui->tableWidget->setItem(i,2,new QTableWidgetItem(style));
        this->ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(price)));
      }
}

void AdminMainWindow::initTableWidget()
{
    //设置表格的格式
    this->ui->tableWidget->setColumnCount(COLS);
    this->ui->tableWidget->setRowCount(ROWS);
    QStringList header;
    header << "菜名" << "类型" << "口味" << "价格";
    this->ui->tableWidget->setHorizontalHeaderLabels(header);
    this->ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //禁止编辑
}
