#include "setWindows.h"
#include "config.h"
#include "author.h"

extern int  result;
extern int  pertime;
extern int count;


setWindows::setWindows():QWidget()
{
    setWindowTitle(tr("��ʱ��Ϣ���Ѿ���"));
    setFixedSize(350,230);
    QMessageBox::warning(this,tr("ǩ����ʾ!"),tr("���Ϻã�����ǩ����"));

    ltme=new QLabel(tr("�����Ϣһ��(min)��"));
    stme=new QLabel(tr("һ����Ϣ���(min)��"));

    lline=new QLineEdit();
    lline->setText(tr("55"));
    sline=new QLineEdit();
    sline->setText(tr("5"));


    button=new QPushButton(tr("ȷ��"));
    author=new QPushButton(tr("���˵��"));

    setContentsMargins(30,30,30,30);

    QHBoxLayout *hyoutltme=new QHBoxLayout;
    QHBoxLayout *hyoutstme=new QHBoxLayout;
    QHBoxLayout *hyoutbutton=new QHBoxLayout;
    hyoutltme->addWidget(ltme);
    hyoutltme->addWidget(lline);

    hyoutstme->addWidget(stme);
    hyoutstme->addWidget(sline);

    hyoutbutton->addWidget(button);
    hyoutbutton->addWidget(author);

    QVBoxLayout  *mainout=new QVBoxLayout;

    mainout->addLayout(hyoutltme);
    mainout->addLayout(hyoutstme);
    mainout->addLayout(hyoutbutton);


    setLayout(mainout);

    connect(button,SIGNAL(clicked()),this,SLOT(confim_func()));
    connect(author,SIGNAL(clicked()),this,SLOT(author_func()));
}

void setWindows::confim_func()
{
    bool ok;
    result =lline->text().toInt(&ok,10);
    pertime=sline->text().toInt(&ok,10);
    if((result==0)||(pertime==0))
    {
        QMessageBox qm;
        qm.information(this,tr("warning"),tr("������ʱ�����"),tr("ȷ��"));
    }else{
            qDebug()<<pertime<<result;
            count=pertime*60;
            hide();
            Label *dl=new Label;
            dl->hide();
        }
}
void setWindows::author_func()
{
    Author *au=new Author();

}
