#include "formunitselect.h"
#include "ui_formunitselect.h"

FormUnitSelect::FormUnitSelect(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormUnitSelect)
{
    ui->setupUi(this);
}

FormUnitSelect::~FormUnitSelect()
{
    delete ui;
}

void FormUnitSelect::on_btn_unit1_viktor_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void FormUnitSelect::on_btn_unit2_dorian_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void FormUnitSelect::on_btn_unit3_muhad_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void FormUnitSelect::on_pushButton_clicked()
{
    qDebug() << ui->stackedWidget->currentIndex();
    emit signal_unit_select();
    setIndex_select(ui->stackedWidget->currentIndex());
}

int FormUnitSelect::getIndex_select() const
{
    return index_select;
}

void FormUnitSelect::setIndex_select(int value)
{
    index_select = value;
}
