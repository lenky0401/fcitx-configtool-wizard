
#ifndef __MAIN_WIZARD_H__
#define __MAIN_WIZARD_H__

#include <QWizard>

class MainWizard : public QWizard
{
    Q_OBJECT

public:
    MainWizard(QWidget *parent = 0);

    void accept();
};

#endif // __MAIN_WIZARD_H__
