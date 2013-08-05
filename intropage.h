
#ifndef __INTRO_PAGE_H__
#define __INTRO_PAGE_H__

#include <QWizard>
#include <QLabel>

 class IntroPage : public QWizardPage
 {
     Q_OBJECT

 public:
     IntroPage(QWidget *parent = 0);

 private:
     QLabel *label;
 };

#endif // __INTRO_PAGE_H__
