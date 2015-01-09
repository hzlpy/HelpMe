#include "adddialog.h"
#include "ui_adddialog.h"

AddDialog::AddDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddDialog)
{
    ui->setupUi(this);
    util = new Util();
    setTypeCombobox();
    setStyleCombobox();
    connect(this->ui->okPushButton,SIGNAL(clicked()), this, SLOT(slotOk()));
}

AddDialog::~AddDialog()
{
    delete ui;
}

/**
 * @brief AddDialog::getTypeList
 */
void AddDialog::getTypeList()
{
    typeList = util->queryAllTypes();
}

/**
 * @brief AddDialog::getStyleList
 */
void AddDialog::getStyleList()
{
    styleList = util->queryAllStyles();
}

/**
 * @brief AddDialog::setTypeCombobox
 */
void AddDialog::setTypeCombobox()
{
    //get type list
    getTypeList();
    //set items for typeCombobox
    this->ui->typeComboBox->addItems(typeList);
}

/**
 * @brief AddDialog::setStyleCombobox
 */
void AddDialog::setStyleCombobox()
{
    //get style list
    getStyleList();
    //set items for styleCombobox
    this->ui->styleComboBox->addItems(styleList);
}

/**
 * @brief AddDialog::slotOk
 */
void AddDialog::slotOk()
{
    qDebug() << "OK" << endl;
    //获取表单中的数据
    Dish dish;
    dish.setName(this->ui->nameLineEdit->text());
    dish.setType(QString::number(this->ui->typeComboBox->currentIndex() + 1));
    dish.setStyle(QString::number(this->ui->styleComboBox->currentIndex() + 1));
    dish.setPrice(this->ui->priceDoubleSpinBox->text().toDouble());
    //插入数据到表dish中
    if (!util->insert(dish)) {
        qDebug() << "insert failed." << endl;
    }
    //插入成功后发出刷新表格信号
    emit signalFresh();

}

