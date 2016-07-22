#ifndef AUTHOR_H
#define AUTHOR_H
#include <QtGui>
#include <QDebug>

class QLabel;
class QString;
class QVBoxLayout;


class Author:public QDialog
{
    Q_OBJECT
public:
    Author();
private:
    QLabel *msg;
    QPushButton *button;
public slots:
    void return_func();
};

#endif // AUTHOR_H
