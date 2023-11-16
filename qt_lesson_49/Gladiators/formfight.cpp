#include "formfight.h"
#include "ui_formfight.h"

FormFight::FormFight(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormFight)
{
    ui->setupUi(this);
}

FormFight::~FormFight()
{
    delete ui;
}

void FormFight::on_btn_go_back_clicked()
{
    emit signal_go_to_form_select();
}
