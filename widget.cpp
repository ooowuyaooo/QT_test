#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->resize(800,800);
    button = new QPushButton(this);
    button->setText("close");

    connect(button,&QPushButton::clicked,this,&Widget::print);



    this->sonwidgtwindow=new sonwidgt;
    //sonwidgtwindow->show();

    connect(sonwidgtwindow,&sonwidgt::bbb,this,&Widget::print1);
}
void Widget::print1(int a){
    this->show();
    this->sonwidgtwindow->hide();
    qDebug()<<a;
}
void Widget::print(){
    this->hide();
    this->sonwidgtwindow->show();
}

Widget::~Widget()
{
    delete ui;
}
