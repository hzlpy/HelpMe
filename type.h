#ifndef TYPE_H
#define TYPE_H
#include <QString>
class Type
{
public:
    Type();
    void setId(QString id);
    QString getId();
    void setName(QString name);
    QString getName();
private:
    QString id;
    QString name;
};

#endif // TYPE_H
