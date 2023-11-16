#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "data.h"
#include "formstart.h"
#include "formunitselect.h"
#include "formfight.h"
#include <QObject>
#include <QDebug>

class Controller : public QObject
{
    Q_OBJECT
public:
    explicit Controller(QObject *parent = nullptr);
    ~Controller();

    FormStart* formstart{nullptr};
    FormUnitSelect* formunitselect{nullptr};
    Data* data{nullptr};
    FormFight* formfight{nullptr};

    void startApp();
signals:

public slots:
    void switch_to_form_select();
    void unit_selected();
    void close_app();
    void switch_formfight_to_formselect();
};

#endif // CONTROLLER_H
