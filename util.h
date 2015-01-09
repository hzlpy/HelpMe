#ifndef UTIL_H
#define UTIL_H
#include "dish.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QMessageBox>
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>
//enum TYPE {啊,不,从,的};
//enum weekday {q,b};
class Util
{
public:
    Util();
    //Dish *dish;
    bool createConnection();
    vector<Dish> queryAllDishes();
    bool insert(Dish dish);
    QStringList queryAllTypes();
    QStringList queryAllStyles();
    //预处理数据
    QString nametoId(QString name);
private:
    QStringList typeList;
    QStringList styleList;
};

#endif // UTIL_H
