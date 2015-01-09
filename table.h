#ifndef TABLE_H
#define TABLE_H
#include "dish.h"
#include <vector>
using namespace std;
class Table
{
public:
    Table();
private:
    int id;       //桌子的编号
    double cost;  //一桌菜的花费
    int num;      //桌子上菜的数目
    vector<Dish> menu;//菜单
};

#endif // TABLE_H
