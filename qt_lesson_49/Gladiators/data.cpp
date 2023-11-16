#include "data.h"

Data::Data(QObject *parent) : QObject(parent)
{
    u1.unit_name = "Viktor";
    u1.index = -1;
    u1.power = 80;
    u1.is_select = false;

    u2.unit_name = "Dorian";
    u2.index = -1;
    u2.power = 65;
    u2.is_select = false;

    u3.unit_name = "Muhad";
    u3.index = -1;
    u3.power = 50;
    u3.is_select = false;

    unit_list.push_back(u1);
    unit_list.push_back(u2);
    unit_list.push_back(u3);
}
