#ifndef FORMFIGHT_H
#define FORMFIGHT_H

#include <QWidget>

namespace Ui {
class FormFight;
}

class FormFight : public QWidget
{
    Q_OBJECT

public:
    explicit FormFight(QWidget *parent = 0);
    ~FormFight();

private slots:
    void on_btn_go_back_clicked();

signals:
    void signal_go_to_form_select();

private:
    Ui::FormFight *ui;
};

#endif // FORMFIGHT_H
