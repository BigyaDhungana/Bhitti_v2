#include "happyvitti.h"
#include "ui_happyvitti.h"

HappyVitti::HappyVitti(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HappyVitti)
{
    ui->setupUi(this);
}

HappyVitti::~HappyVitti()
{
    delete ui;
}
