#ifndef VECTOR2DEDIT_H
#define VECTOR2DEDIT_H

#include <QWidget>

#include "vectoredit.h"

class Vector2D;

class Vector2DEdit : public VectorEdit
{
    Q_OBJECT
public:
    explicit Vector2DEdit(QWidget *parent = 0);
    QVector2D value() const;
    void setValue(const QVector2D &value);
};


#endif // VECTOR2DEDIT_H
