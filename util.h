#ifndef UTIL_H
#define UTIL_H
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QMessageBox>
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>
#include "dish.h"
#include "type.h"
#include "style.h"
//enum TYPE {啊,不,从,的};
//enum weekday {q,b};
class Util
{
public:
    Util();
    bool createConnection();
    vector<Dish> queryAllDishes();
    bool insert(Dish dish);
    QStringList queryAllTypename();
    QStringList queryAllStylename();
    vector<Type> queryAllTypes();
    vector<Style> queryAllStyles();
    vector<Dish> queryOnePage(int pageNum, int pageSize);
    vector<Dish> queryLastPage(int pageNum, int pageSize, int curPageSize);
    //预处理数据
    QString nametoId(QString name);
    QString idtoTypeName(QString id);
    QString idtoStyleName(QString id);
    //get all dishes count
    int getAllDishesCount();
private:
    QStringList typeList;
    QStringList styleList;
};

#endif // UTIL_H
