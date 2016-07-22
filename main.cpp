#include "config.h"
#include "setWindows.h"
#include "author.h"
#include <QTextCodec>

int  result;    //save result
int  pertime;
int  count;


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("GBK"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GBK"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));
    QTextCodec::setCodecForTr(QTextCodec::codecForLocale());//支持中文显示
    setWindows w;
    w.show();
    return app.exec();

}


 

