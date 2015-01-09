#ifndef DISH_H
#define DISH_H
#include <QString>
using namespace std;
class Dish
{
public:
    Dish();

    void setId(QString id);
    QString getId();

    void setName(QString name);
    QString getName();

    void setType(QString type);
    QString getType();

    void setStyle(QString style);
    QString getStyle();

    void setPrice(double price);
    double getPrice();
private:
    QString id;      //菜的编号
    QString name; //菜名
    QString type;    //类型
    QString style;   //风格
    double price;//单价
};

#endif // DISH_H
