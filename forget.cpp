#include "forget.h"
#include "ui_forget.h"
#include "library.h"

forget::forget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::forget)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/forget.png"));
    setWindowTitle("找回密码");
}

forget::~forget()
{
    delete ui;
}


void forget::on_btn_register_2_clicked()
{
    this->close();
}
