#ifndef STYLE_H
#define STYLE_H
#include <QString>
class Style
{
public:
    Style();
    void setId(QString id);
    QString getId();
    void setName(QString name);
    QString getName();
private:
    QString id;
    QString name;
};

#endif // STYLE_H
