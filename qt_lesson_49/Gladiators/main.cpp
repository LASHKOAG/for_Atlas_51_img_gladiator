#include "formstart.h"
#include "formunitselect.h"
#include "controller.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    FormStart w;
//    w.show();
//    FormUnitSelect form_unit_select;
//    form_unit_select.show();

    Controller* controller = new Controller();
    controller->startApp();

    return a.exec();

    if (controller != nullptr)
    {
        delete controller;
    }
}
