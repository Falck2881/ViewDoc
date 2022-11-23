#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#include <QSplashScreen>
#include <QtGlobal>

class QPixmap;

enum class ProgressInit{START=0,FINISH=100};

class SplashScreen: public QSplashScreen
{
    public:
        static SplashScreen* get();
        void progressInit(const ProgressInit step);
    private:
        static SplashScreen* splashScr;
    protected:
        explicit SplashScreen(const QPixmap backgraund);

};

#endif // SPLASHSCREEN_H
