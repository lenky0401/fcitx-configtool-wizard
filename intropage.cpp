#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>
#include <QWizardPage>

#include "intropage.h"

 IntroPage::IntroPage(QWidget *parent)
     : QWizardPage(parent)
 {
     setTitle(tr("Introduction"));

     label = new QLabel(tr(
             "很久以前，在波斯国的某城市里住着兄弟俩，哥哥叫戈西母，弟弟叫阿里巴巴。\n"
             "父亲去世后，他俩各自分得了有限的一点财产，分家自立，各谋生路。不久银财\n"
             "便花光了，生活日益艰难。为了解决吃穿，糊口度日，兄弟俩不得不日夜奔波，\n"
             "吃苦耐劳。后来戈西母幸运地与一个富商的女儿结了婚，他继承了岳父的产业，\n"
             "开始走上做生意的道路。由于生意兴隆，发展迅速，戈西母很快就成为远近闻名\n"
             "的大富商了。"));
     label->setWordWrap(true);

     QVBoxLayout *layout = new QVBoxLayout;
     layout->addWidget(label);
     setLayout(layout);
 }

