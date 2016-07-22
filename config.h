#include <QDialog>
#include <QApplication>
#include <QWidget>

#include <QUrl>
#include <QObject>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <phonon>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTimer>
#include <QLabel>
#include <QPixmap>
#include <QDebug>
#include <QPalette>
#include <QColor>
#include <QTextCodec>
#include <QSplashScreen>
#include <QFont>

class QLabel;
class QTimer;
class QPixmap;
class QString;
class QFont;


class Label:public QLabel
{
        Q_OBJECT

    QTimer *timer1;
    QTimer *timer2;
    QTimer *timer3;

    QTimer *timer_qd;
public:
        Label(QWidget *parent = 0);
 public slots:
        void timefunc1();
        void timefunc2();
        void timefunc3();
        void timefunc_qd();
};
