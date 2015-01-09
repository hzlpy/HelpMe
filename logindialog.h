#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "adminmainwindow.h"
#include <QDebug>
namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

private:
    Ui::LoginDialog *ui;
public slots:
    bool slotLogin();
};

#endif // LOGINDIALOG_H
