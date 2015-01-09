#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>
#include <QStringList>
#include "dish.h"
#include "util.h"
#include <QDebug>
namespace Ui {
class AddDialog;
}

class AddDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddDialog(QWidget *parent = 0);
    ~AddDialog();
    void setTypeCombobox();
    void setStyleCombobox();
    void getTypeList();
    void getStyleList();
private:
    Ui::AddDialog *ui;
    QStringList typeList;
    QStringList styleList;
    Util *util;

private slots:
    void slotOk();
//    void slotCancel();
signals:
    void signalFresh();
};

#endif // ADDDIALOG_H
