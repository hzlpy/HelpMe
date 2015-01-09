#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createMenus();
    createToolbars();
    QWidget *widget =  new QWidget(this);
    gridLayout = new QGridLayout();
    widget->setLayout(gridLayout);
    this->setCentralWidget(widget);
    makeBoard(gridLayout);
    setBoard();
    viewBoard();

    connect(loginAction,SIGNAL(triggered()),this,SLOT(slotAdmin()));
}

/**
 * @brief MainWindow::makeBoard
 * @param gridLayout
 */
void MainWindow::makeBoard(QGridLayout* gridLayout)
{
    int text = 0;
    QButtonGroup *buttonGroup = new QButtonGroup(this);
    QPushButton *button;
    for (int y = 0; y < COLS; y++){
        for(int x = 0; x < ROWS; x++){
            button = new QPushButton(QString::number(text),this);
            //button->setStyleSheet("border-image:url('img/" + QString::number(text+1) + ".jpg')");
            //qDebug() << "Chess::produceChessBoard" << random_num[text];
            //button->setStyleSheet("border-image:url('img/" + QString::number(random_num[text]) + ".jpg')");
            button->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            buttonGroup->addButton(button,text);
            gridLayout->addWidget(button,y,x);
            buttons[x][y] = button;
            text ++;
        }
    }
}

/**
 * @brief MainWindow::setBoard
 */
void MainWindow::setBoard()
{
    Util *util = new Util();
    if(!util->createConnection()){
        return;
    }
    vector<Dish> menu = util->queryAllDishes();
    QPushButton *button;
    int i = 0;
    for (int y = 0; y < COLS; y++){
        for(int x = 0; x < ROWS; x++){
            i = x + ROWS * y;
            if(i < menu.size()) {
                button = new QPushButton();
                Dish dish = menu.at(i);
                button->setText(dish.getName());
                //qDebug() << dish.getName() << endl;
                buttons[x][y] = button;
            }
        }
    }
}
/**
 * @brief MainWindow::viewBoard
 * 在按钮上显示菜的名字
 */
void MainWindow::viewBoard()
{
    QPushButton *button;
    for (int y = 0; y < COLS; y++){
        for(int x = 0; x < ROWS; x++){
            button = buttons[x][y];
            button->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            gridLayout->addWidget(button,y,x);
        }
    }
}

/**
 * @brief MainWindow::createMenus 创建菜单
 */
void MainWindow::createMenus()
{
    QMenu *serve = menuBar()->addMenu(tr("&服务"));//添加菜单
    QMenu *helpme = serve->addMenu(tr("&帮我"));   //添加子菜单
    QMenu *letyou = serve->addMenu(tr("&随你"));   //添加子菜单

    QMenu *administration = menuBar()->addMenu(tr("&管理"));
    QMenu *login = administration->addMenu((tr("&后台")));
    loginAction = new QAction(tr("&登录"),this);
    login->addAction(loginAction);
    QMenu *about = menuBar()->addMenu(tr("&关于"));
}

void MainWindow::createToolbars()
{
//    QToolBar *toolBar = addToolBar(tr("&File"));
}

void MainWindow::slotAdmin()
{
    //qDebug() << tr("admin") << endl;
    LoginDialog loginDialog;
    loginDialog.exec();
}

MainWindow::~MainWindow()
{
    delete ui;
}
