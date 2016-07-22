#include "author.h"

Author::Author():QDialog()
{
    this->setWindowTitle(tr("软件说明"));
    this->setFixedSize(400,300);

    QFont font;
    font.setPointSize(13);
    setFont(font);

    setStyleSheet("color:green");
    //setPalette(QPalette(QColor(0,0,0)));
    msg=new QLabel();
    msg->setText(tr("   本软件启动设定时间后会进入首次挡屏,首次\n挡屏结束后，会按照设定时间准时运行。\n运行中如果您需要退出挡屏,请按ctrl+shift \n+esc中断。作为一个IT工作者，为了提醒自己\n稍作休息保持健康,写了这个软件，实用即可。\n本人OO 994796397,欢迎讨论。\n本软件必须设定时间。源码开放，欢迎索取。"));
    setContentsMargins(20,20,20,20);


    button=new QPushButton(tr("知道了"));
    button->setFixedSize(85,30);
    connect(button,SIGNAL(clicked()),this,SLOT(return_func()));

    QHBoxLayout *hyout=new QHBoxLayout;
    hyout->setContentsMargins(160,0,0,0);
    hyout->addWidget(button);

    QVBoxLayout *vyout=new QVBoxLayout;
    vyout->addWidget(msg);
    vyout->addLayout(hyout);
    setLayout(vyout);

    show();
}

void Author::return_func()
{
    hide();
}
