#ifndef SETWINDOWS_H
#define SETWINDOWS_H

#include <QtGui>

class QHBoxLayout;
class QVBoxLayout;
class QTextLayout;
class QString;


class setWindows: public QWidget
{
    Q_OBJECT
public:

    setWindows();
private:
    QLabel *ltme;
    QLabel *stme;
    QPushButton *button;
    QPushButton *author;
    QLineEdit  *lline;
    QLineEdit  *sline;
    int longtime;
    int shorttime;

public slots:
    void confim_func();
    void author_func();


};

#endif // SETWINDOWS_H

