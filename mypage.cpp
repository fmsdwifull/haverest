#include "MyPage.h"
MyPage1::MyPage1(QWidget *parent)
    :QWidget(parent)
{
    NameLabel=new QLabel(tr("������"));
    HeightLabel=new QLabel(tr("��ߣ�"));
    WeightLabel=new QLabel(tr("���أ�"));
    BWHLabel=new QLabel(tr("��Χ��"));

    NameEdit=new QLineEdit(tr("�Ծ���"));
    HeightEdit=new QLineEdit(tr("155"));
    WeightEdit=new QLineEdit(tr("45KG"));
    BWHEdit=new QLineEdit(tr("85,80,85"));

    QGridLayout *Glayout= new QGridLayout(this);
    Glayout->addWidget(NameLabel,0,0);
    Glayout->addWidget(HeightLabel,1,0);
    Glayout->addWidget(WeightLabel,2,0);
    Glayout->addWidget(BWHLabel,3,0);

    Glayout->addWidget(NameEdit,0,1);
    Glayout->addWidget(HeightEdit,1,1);
    Glayout->addWidget(WeightEdit,2,1);
    Glayout->addWidget(BWHEdit,3,1,1,2);

    this->setLayout(Glayout);

}

MyPage2::MyPage2(QWidget *parent)
    :QWidget(parent)
{

}

MyPage3::MyPage3(QWidget *parent)
    :QWidget(parent)
{

}
