#ifndef SONWIDGT_H
#define SONWIDGT_H

#include <QObject>
#include <QWidget>
#include <QPushButton>

class sonwidgt : public QWidget
{
    Q_OBJECT
public:
    explicit sonwidgt(QWidget *parent = nullptr);
    QPushButton *button1;

signals:
    void bbb(int a);

public slots:
    void aaa();

};

#endif // SONWIDGT_H
