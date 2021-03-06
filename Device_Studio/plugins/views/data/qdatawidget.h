#ifndef QDATAWIDGET_H
#define QDATAWIDGET_H

#include "../../../libs/platform/qabstractpagewidget.h"

class QPropertyListView;
class StyledBar;
class QDataListView;
class QDataManager;
class QAbstractDataHost;
class QProject;

class QDataWidget : public QAbstractPageWidget
{
    Q_OBJECT
public:
    QDataWidget(QWidget * parent = NULL);
protected:
    void    initAction();
protected slots:
    void    updateAction();
    void    newGroup();
    void    delGroup();
    void    newData();
    void    delData();
    void    projectOpened();
    void    projectClosed();

    void    dataSeleted(QAbstractDataHost * data);
protected:
    QDataListView       *m_dataListview;
    StyledBar           *m_dataListviewBar;

    QPropertyListView   *m_dataPropertyView;
    StyledBar           *m_dataPropertyViewBar;

    QDataManager        *m_dataManager;
    QProject            *m_project;
};

#endif // QDATAWIDGET_H
