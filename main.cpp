#include "MainWindow.h"
#include "SplashScreen.h"
#include <QApplication>
#include <QFile>
#include <QIODevice>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    const QString nameStyleApp(":/Darkeum.qss");
    QFile styleApp(nameStyleApp);
    if(!styleApp.open(QIODevice::ReadOnly)){
        qDebug() << "Warrning: File " + nameStyleApp +
                    "is can`t in function main.";
    }
    app.setStyleSheet(QString(styleApp.readAll()));

    MainWindow mainWin;
    SplashScreen::get()->finish(&mainWin);
    mainWin.show();
    return app.exec();
}
