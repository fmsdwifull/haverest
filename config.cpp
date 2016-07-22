#include "config.h"
#include <QTime>
#include <QMessageBox>

extern int  result;
extern int  pertime;
extern int count;



void Label::timefunc_qd()
{
   QTime signInTime(17,31,00);
   QTime nowTime;
   nowTime=QTime::currentTime();

   if(nowTime>signInTime)
   {
            qDebug()<<nowTime.toString();
            //QMessageBox::warning(this,"温馨提示！","签到时间到，不要忘记签到哦！");

            setPalette( QPalette( QColor( 0, 0, 0) ));
            setStyleSheet("color:green");
            setAlignment(Qt::AlignCenter);
            QFont font;
            font.setPointSize(24);

            setFont(font);
            setText(tr("THE TIME FOR SIGNNING IN IS COMENING ,DO NOET FORGET SIGN IN SEE YOU!"));
            showFullScreen();


   }

}

void Label::timefunc3()
{
    count--;
    QString s = QString::number(count, 10);
    qDebug()<<s<<"result"<<pertime;
    setText(s);
    timer3->start(1000);
    if(count==0)
        timer3->stop();
}

void Label::timefunc2()
{
    this->hide();
    timer2->stop();
    timer1->start(1000*60*result);
}

void Label::timefunc1()
{
    showFullScreen();
    timer1->stop();
    timer2->start(1000*60*pertime);
    timer3->start(1000);
    count=pertime*60;

}

Label::Label(QWidget *parent):
    QLabel(parent)
{
    setPalette( QPalette( QColor( 0, 0, 0) ));

    setStyleSheet("color:green");
    setAlignment(Qt::AlignCenter);
    QFont font;
    font.setPointSize(24);

    setFont(font);
    setText(tr("Please take a rest!"));
    timer1=new QTimer;


    connect(timer1,SIGNAL(timeout()),this,SLOT(timefunc1()));
    timer1->start(1000*60*result);

    timer2=new QTimer;
    connect(timer2,SIGNAL(timeout()),this,SLOT(timefunc2()));

    timer3=new QTimer;
    connect(timer3,SIGNAL(timeout()),this,SLOT(timefunc3()));

    //签到提醒
    timer_qd=new QTimer;
    timer_qd->start(1000*60);
    connect(timer_qd,SIGNAL(timeout()),this,SLOT(timefunc_qd()));

}


 
