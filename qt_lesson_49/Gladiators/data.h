#ifndef DATA_H
#define DATA_H

#include <QObject>

class Data : public QObject
{
    Q_OBJECT
public:
    explicit Data(QObject *parent = nullptr);

    struct Units
    {
//        Units(){
//        }
        QString unit_name;
        int index;
        int power;
        bool is_select;
    };

    Units u1;
    Units u2;
    Units u3;

    QList <Units> unit_list;

signals:

public slots:
};

#endif // DATA_H
