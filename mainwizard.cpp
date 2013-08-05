
#include "mainwizard.h"
#include "intropage.h"

MainWizard::MainWizard(QWidget *parent)
    : QWizard(parent)
{
    addPage(new IntroPage);

    setWindowTitle(tr("Fcitx Configure Wizard"));
}

void MainWizard::accept()
{

}
