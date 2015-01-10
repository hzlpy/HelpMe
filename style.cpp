#include "style.h"

Style::Style()
{
}

/**
 * @brief Style::setId
 * @param id
 */
void Style::setId(QString id)
{
    this->id = id;
}

/**
 * @brief Style::getId
 * @return id
 */
QString Style::getId()
{
    return this->id;
}

/**
 * @brief Style::setName
 * @param name
 */
void Style::setName(QString name)
{
    this->name = name;
}

/**
 * @brief Style::getName
 * @return name
 */
QString Style::getName()
{
    return this->name;
}
