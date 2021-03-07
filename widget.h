#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <sonwidgt.h>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    QPushButton *button;

    sonwidgt *sonwidgtwindow;

public slots:
    void print();
    void print1(int a);
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
