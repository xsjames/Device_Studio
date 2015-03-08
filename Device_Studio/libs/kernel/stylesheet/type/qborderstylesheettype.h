#ifndef QBORDERSTYLESHEETTYPE_H
#define QBORDERSTYLESHEETTYPE_H

#include "qabstractenumsheettype.h"

class QBorderStyleSheetType : public QAbstractEnumSheetType
{
    Q_OBJECT
public:
    Q_INVOKABLE QBorderStyleSheetType();
    ~QBorderStyleSheetType();

    QStringList getValueList();
};

#endif // QBORDERSTYLESHEETTYPE_H
