#include "util.h"

Util::Util()
{
}

/**
 * @brief Util::createConnection
 * @return
 */
bool Util::createConnection()
{
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection")) {
        db = QSqlDatabase::database("qt_sql_default_connection");
    } else {
        db = QSqlDatabase::addDatabase("QMYSQL");
    }
    db.setHostName("localhost");
    db.setDatabaseName("helpme");
    db.setUserName("root");
    db.setPassword("123456");
    if(!db.open()) {
        QMessageBox::critical(0,QObject::tr("Database Error"),db.lastError().text());
        return false;
    }
    return true;
}

/**
 * @brief Util::queryAllDishes 查询所有的菜
 * @return 所有的菜
 */
vector<Dish> Util::queryAllDishes()
{
    vector<Dish> menu;
    QSqlQuery query;
    query.exec("SELECT dish.id, dish.name, type.name, style.name, dish.price FROM dish , TYPE , STYLE WHERE dish.TYPE = type.ID AND dish.STYLE = style.ID");
    while(query.next()) {
        Dish dish;
        QString id = query.value(0).toString();
        QString name = query.value(1).toString();
        QString type = query.value(2).toString();
        QString style = query.value(3).toString();
        double price = query.value(4).toDouble();

        dish.setId(id);
        dish.setName(name);
        dish.setType(type);
        dish.setStyle(style);
        dish.setPrice(price);
        menu.push_back(dish);
    }
    return menu;
}

/**
 * @brief Util::insert 插入数据
 * @param dish
 * @return
 */
bool Util::insert(Dish dish)
{
    bool flag = false;
    QString name = dish.getName();
    int type = dish.getType().toInt();
    int style = dish.getStyle().toInt();
    double price = dish.getPrice();

    //插入
    QSqlQuery query;
    QString insertSql = "INSERT INTO dish(name, type, style, price)"" VALUES (\"%1\", \"%2\", \"%3\", \"%4\")";
    QString sql = insertSql.arg(name).arg(type).arg(style).arg(price);
    qDebug() << sql << endl;
    flag = query.exec(sql);
    qDebug() << query.lastError() << endl;
    return flag;
}

/**
 * @brief Util::queryAllTypes
 */
QStringList Util::queryAllTypes()
{
    if (!typeList.isEmpty()) {
        typeList.clear();
    }
    QSqlQuery query;
    QString sql = "SELECT name FROM type"; //从type表中查询所有的类型名
    query.exec(sql);//执行sql查询
    while (query.next()) {
        QString name = query.value(0).toString();
        typeList.push_back(name);
    }
    return typeList;
}

/**
 * @brief Util::queryAllStyles
 */
QStringList Util::queryAllStyles()
{
    if (!styleList.isEmpty()) {
        styleList.clear();
    }
    QSqlQuery query;
    QString sql = "SELECT name FROM style"; //从type表中查询所有的类型名
    query.exec(sql);//执行sql查询
    while (query.next()) {
        QString name = query.value(0).toString();
        styleList.push_back(name);
    }
    return styleList;
}

QString Util::nametoId(QString name)
{
    QString id = "1024";
    typeList = queryAllTypes();
    styleList = queryAllStyles();

    for (int i=0; i<typeList.size(); ++i) {
        QString qtype = typeList.at(i);
        if (!name.compare(qtype)) {
            id = QString::number(i);
            return id;
        }
    }
    for (int i=0; i<styleList.size(); ++i) {
        QString qstyle = styleList.at(i);
        if (!name.compare(qstyle)) {
            id = QString::number(i);
            return id;
        }
    }
    return id;
}
