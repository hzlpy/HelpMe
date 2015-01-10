#include "type.h"

Type::Type()
{
}

/**
 * @brief Type::setId
 * @param id
 */
void Type::setId(QString id)
{
    this->id = id;
}

/**
 * @brief Type::getId
 * @return id
 */
QString Type::getId()
{
    return this->id;
}

/**
 * @brief Type::setName
 * @param name
 */
void Type::setName(QString name)
{
    this->name = name;
}

/**
 * @brief Type::getName
 * @return name
 */
QString Type::getName()
{
    return this->name;
}
