#include "author.h"

Author::Author():QDialog()
{
    this->setWindowTitle(tr("���˵��"));
    this->setFixedSize(400,300);

    QFont font;
    font.setPointSize(13);
    setFont(font);

    setStyleSheet("color:green");
    //setPalette(QPalette(QColor(0,0,0)));
    msg=new QLabel();
    msg->setText(tr("   ����������趨ʱ��������״ε���,�״�\n���������󣬻ᰴ���趨ʱ��׼ʱ���С�\n�������������Ҫ�˳�����,�밴ctrl+shift \n+esc�жϡ���Ϊһ��IT�����ߣ�Ϊ�������Լ�\n������Ϣ���ֽ���,д����������ʵ�ü��ɡ�\n����OO 994796397,��ӭ���ۡ�\n����������趨ʱ�䡣Դ�뿪�ţ���ӭ��ȡ��"));
    setContentsMargins(20,20,20,20);


    button=new QPushButton(tr("֪����"));
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
