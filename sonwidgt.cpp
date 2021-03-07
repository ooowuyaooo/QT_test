#include "sonwidgt.h"


sonwidgt::sonwidgt(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("son");
    button1 = new QPushButton(this);
    button1->setText("1221313213");

    connect(button1,&QPushButton::clicked,this,&sonwidgt::aaa);


}
void sonwidgt::aaa(){
    emit bbb(10);

}
