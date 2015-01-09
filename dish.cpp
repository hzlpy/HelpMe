#include "dish.h"

Dish::Dish()
{
}

void Dish::setId(QString id){
    this->id = id;
}

QString Dish::getId()
{
    return id;
}

void Dish::setName(QString name){
    this->name = name;
}

QString Dish::getName() {
    return name;
}

void Dish::setType(QString type){
    this->type = type;
}

QString Dish::getType()
{
    return type;
}

void Dish::setStyle(QString style){
    this->style = style;
}

QString Dish::getStyle()
{
    return style;
}

void Dish::setPrice(double price) {
    this->price = price;
}

double Dish::getPrice() {
    return price;
}
