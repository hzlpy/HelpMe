#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    connect(this->ui->loginBtn,SIGNAL(clicked()),this,SLOT(slotLogin()));
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

bool LoginDialog::slotLogin()
{
    AdminMainWindow *adminMainWindow = new AdminMainWindow();//销毁前new 一个新的界面对象出来
    this->destroy();  //当前的这个界面对象要销毁
    adminMainWindow->show();
    qDebug() << tr("login") << endl;
}
