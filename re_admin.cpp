#include "re_admin.h"
#include "ui_re_admin.h"

Re_admin::Re_admin(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::Re_admin)
{
  ui->setupUi(this);
}

Re_admin::~Re_admin()
{
  delete ui;
}

void Re_admin::get(QString a,QString b,QString c)
{
  ui->lineEdit->setText(a);
  ui->lineEdit_2->setText(b);
  ui->lineEdit_3->setText(c);
}

void Re_admin::on_pushButton_clicked()
{

  QMessageBox *msgbox = new QMessageBox(this);
  msgbox->information(this,"提示","修改成功！");
  this->close();
}
