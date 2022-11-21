#include "trackorder.h"
#include "ui_trackorder.h"

TrackOrder::TrackOrder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TrackOrder)
{
    ui->setupUi(this);
}

TrackOrder::~TrackOrder()
{
    delete ui;
}
