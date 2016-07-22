#ifndef MYPAGE_H
#define MYPAGE_H

#include <QtGui/QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QGridLayout>

class MyPage1 : public QWidget
{
    Q_OBJECT

public:
    MyPage1(QWidget *parent = 0);
    ~MyPage1(){};
    QLabel *NameLabel,*HeightLabel,*WeightLabel,*BWHLabel;
    QLineEdit *NameEdit,*HeightEdit,*WeightEdit,*BWHEdit;
};

class MyPage2 : public QWidget
{
    Q_OBJECT

public:
    MyPage2(QWidget *parent = 0);
    ~MyPage2(){};
};

class MyPage3 : public QWidget
{
    Q_OBJECT

public:
    MyPage3(QWidget *parent = 0);
    ~MyPage3(){};
};

 


#endif // MYPAGE_H

