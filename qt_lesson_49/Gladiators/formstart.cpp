#include "formstart.h"
#include "ui_formstart.h"
#include <QDebug>

FormStart::FormStart(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FormStart)
{
    ui->setupUi(this);
}

FormStart::~FormStart()
{
    delete ui;
}

void FormStart::on_btn_start_clicked()
{
    emit signal_btn_start_game();
    qDebug() << "Log: emit signal_btn_start_game()";
}

void FormStart::on_btn_close_app_clicked()
{
    emit signal_btn_close_app();
}
