#include "controller.h"

Controller::Controller(QObject *parent) : QObject(parent)
{
    formstart = new FormStart();
    formunitselect = new FormUnitSelect();
    data = new Data();
    formfight = new FormFight();
    connect(formstart, &FormStart::signal_btn_start_game, this, &Controller::switch_to_form_select);
    connect(formstart, &FormStart::signal_btn_close_app, this, &Controller::close_app);
    connect(formunitselect, &FormUnitSelect::signal_unit_select, this, &Controller::unit_selected);
    connect(formfight, &FormFight::signal_go_to_form_select, this, &Controller::switch_formfight_to_formselect);

}

Controller::~Controller()
{
    if (formstart != nullptr)
    {
        delete formstart;
    }

    if (formunitselect != nullptr)
    {
        delete formunitselect;
    }
}

void Controller::startApp()
{
    formstart->show();
}

void Controller::switch_to_form_select()
{
    qDebug() << "Log: switch_to_form_select()";
    formstart->hide();
    formunitselect->show();

}

void Controller::unit_selected()
{
    int tmp_index = formunitselect->getIndex_select();
    qDebug() << data->unit_list[tmp_index].is_select;
    qDebug() << data->unit_list[tmp_index].unit_name;
    data->unit_list[tmp_index].is_select = true;
    qDebug() << data->unit_list[tmp_index].is_select;
    formunitselect->hide();
    formfight->show();
}

void Controller::close_app()
{
    qDebug() <<  "app was closed";
    formstart->close();

}

void Controller::switch_formfight_to_formselect()
{
    qDebug() << "Log: switch_to_form_select()";
    formfight->hide();
    formunitselect->show();

    for (int i = 0; i < data->unit_list.length(); ++i)
    {
        data->unit_list[i].is_select = false;
    }
}
