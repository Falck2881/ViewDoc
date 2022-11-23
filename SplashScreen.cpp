#include "SplashScreen.h"
#include <QPixmap>
#include <QString>

SplashScreen* SplashScreen::splashScr = nullptr;

SplashScreen::SplashScreen(const QPixmap backgraund)
{
    setPixmap(backgraund);
    move(620,300);
}

SplashScreen* SplashScreen::get()
{
    if(splashScr == nullptr)
        splashScr = new SplashScreen(QPixmap(QString(":/backgraund.jpg")));
    return splashScr;
}

void SplashScreen::progressInit(const ProgressInit step)
{
    this->showMessage("Loading: "
                      + QString::number(quint32(step)) + "%",
                      + Qt::AlignBottom | Qt::AlignHCenter,
                        Qt::white
                      );

}
