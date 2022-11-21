#include "login.h"
#include "neworder.h"
#include <QApplication>
#include "employeedash.h"
#include "trackorder.h"
#include "viewproduct.h"
#include "cancelorder.h"
#include "admindash.h"
#include "attendance.h"
#include "newproduct.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // Login w;
    //w.show();
    /*EmployeeDash emp1;
    emp1.showMaximized();
    NewOrder o1;
    o1.showMaximized();
    TrackOrder order;
    order.showMaximized();
    ViewProduct product1;
    product1.showMaximized();
    CancelOrder o11;
    o11.showMaximized();

    Attendance atten;
    atten.showMaximized();
    NewProduct np1;
    np1.showMaximized();
    */
    AdminDash aa;
    aa.showMaximized();
    return a.exec();
}
