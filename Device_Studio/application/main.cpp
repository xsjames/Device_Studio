#include <QApplication>

#include "mainwindow.h"
#include "../libs/platform/propertylist/qpropertylistview.h"
#include "../libs/kernel/property/qfloatproperty.h"
#include "../libs/kernel/property/qenumproperty.h"
#include "../libs/kernel/qvarianttype.h"
#include "../libs/kernel/property/qalignmentproperty.h"

#include "../libs/kernel/host/qabstractwidgethost.h"
#include "../libs/kernel/host/qwidgethost.h"


#include "../libs/kernel/host/qhostfactory.h"
#include "../libs/kernel/pluginloader.h"

#include <QFont>
#include <QTextCodec>
#include <QTimeEdit>
#include <QUuid>

/**
 * @brief 程序入口函数
 * @param argc--输入产生的个数
 * @param argv--输入产生的数组
 * @return 程序结果
 */
int main(int argc,char *argv[])
{
    //新建的一个application
    QApplication a(argc,argv);
    //设置程序编码
    QTextCodec *gbk = QTextCodec::codecForName("GBK");
    QTextCodec::setCodecForLocale(gbk);
    //设置程序默认字体
    QFont f=a.font();
    f.setFamily("Arial");
    f.setPointSize(12);
    a.setFont(f);

    QHostFactory::registerInnerHost();

    PluginLoader::loadPlugin("plugins.xml");

    //新建主窗口
    MainWindow w;
    w.show();

    //进入主循环
    int ret=a.exec();
    return ret;
}