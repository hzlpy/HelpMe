#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
#include <QSplashScreen>
#include "util.h"
#include <QWidget>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //设置程序的默认字符编码
    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    //加载并显示启动画面
//    QSplashScreen splash(QPixmap(""));
//    splash.setDisabled(true);//禁止用户的输入事件响应
//    splash.show();
//    splash.showMessage(QObject::tr("正在启动应用...请稍候..."),Qt::AlignLeft|Qt::AlignBottom, Qt::green);
    //创建主视图对象
    MainWindow w;
//    splash.showMessage(QObject::tr("加载数据..."), Qt::AlignLeft|Qt::AlignBottom, Qt::green);
    //显示主视图
    w.show();
//    splash.finish(&w);

    //测试数据库连接
//    Util util;
//    util.createConnection();
    return a.exec();
}
