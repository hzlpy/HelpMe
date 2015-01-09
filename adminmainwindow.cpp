#include "adminmainwindow.h"
#include "ui_adminmainwindow.h"

AdminMainWindow::AdminMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminMainWindow)
{
    ui->setupUi(this);
    this->m_nTotal = 0;
    this->m_nStart = -1;
    this->m_nPageSize = 3;
    this->m_nCurPageSize = 1;
    //设置表格的格式
    this->ui->tableWidget->setColumnCount(4);
    this->ui->tableWidget->setRowCount(m_nPageSize);
    QStringList header;
    header << "菜名" << "类型" << "口味" << "价格";
    this->ui->tableWidget->setHorizontalHeaderLabels(header);
    this->ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //禁止编辑

    showAllDishes();
    connect(this->ui->addAction, SIGNAL(triggered()), this, SLOT(slotAdd()));
    connect(&addDialog, SIGNAL(signalFresh()), this, SLOT(slotFresh()));
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
    //连接数据库
    Util *util = new Util();
    if (!util->createConnection()) {
        qDebug() << tr("数据库连接失败") << endl;
    }

    //查询dish表中所有的数据
    Dish dish;
    vector<Dish> dishes = util->queryAllDishes();
    //将数据填入第一页表格
    //判断总共有多少条数据
    int count = dishes.size();
    if (count >= m_nPageSize) {
        count = m_nPageSize;
    }
    for (int i=0; i<count; ++i){
        dish = dishes.at(i);
        QString name = dish.getName();
        QString type = dish.getType();
        QString style = dish.getStyle();
        double price = dish.getPrice();
        this->ui->tableWidget->setItem(i,0,new QTableWidgetItem(name));
        this->ui->tableWidget->setItem(i,1,new QTableWidgetItem(type));
        this->ui->tableWidget->setItem(i,2,new QTableWidgetItem(style));
        this->ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(price)));
    }
    this->m_nTotal = dishes.size();
    this->m_nCurPageSize = this->m_nTotal % this->m_nPageSize;
    //设定当前第几页和总共的页数
    this->ui->label_3->setText(QString::number(m_nCurPageSize / m_nPageSize + 1));
    this->ui->label_5->setText(QString::number(m_nTotal / m_nPageSize + 1));
}
/**
 * @brief AdminMainWindow::slotAdd 添加
 */
void AdminMainWindow::slotAdd()
{
    //获取当前页数据的条数
    int n = this->m_nCurPageSize;
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

}

/**
 * @brief AdminMainWindow::slotPreviousPage
 * 上一页
 */
void AdminMainWindow::slotPreviousPage()
{

}

/**
 * @brief AdminMainWindow::slotFirstPage
 * 首页
 */
void AdminMainWindow::slotFirstPage()
{

}

/**
 * @brief AdminMainWindow::slotLastPage
 * 尾页
 */
void AdminMainWindow::slotLastPage()
{

}
