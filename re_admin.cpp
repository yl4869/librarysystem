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

void Re_admin::get(Ladmin* lad,QString a,int sex,QString c)
{
  old = lad;
  ui->lineEdit_2->setText(a);
  ui->lineEdit_4->setText(c);
  ui->comboBox->setCurrentIndex(sex);
}

void Re_admin::on_pushButton_clicked()
{
  old->SetPsw(ui->lineEdit_4->text().toStdString());
  old->SetName(ui->lineEdit_2->text().toStdString());
  old->SetSex(ui->comboBox->currentIndex());
  QMessageBox *msgbox = new QMessageBox(this);
  msgbox->information(this,"提示","修改成功，请点击显示全表以查看！");
  save();
  this->close();
}
