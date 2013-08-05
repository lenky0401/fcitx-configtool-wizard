#include <QApplication>
#include <QTextCodec>
#include "mainwizard.h"

int main(int argc, char** argv)
{
    QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
    QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale());
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));

    QApplication app(argc, argv);
    MainWizard wizard;
    wizard.show();
    return app.exec();
}
