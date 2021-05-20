#include "register_qt.h"
#include "ui_register_qt.h"

register_qt::register_qt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::register_qt)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/register.png"));
    setWindowTitle("立即注册");
}

register_qt::~register_qt()
{
    delete ui;
}


void register_qt::on_btn_register_clicked()
{
  if(ui->re_password1->text()!=ui->re_password2->text())
    {
      QMessageBox *msgbox = new QMessageBox(this);
      msgbox->information(this,"提示","两次密码不同，请重新输入！");
      ui->re_num->clear();
      ui->re_name->clear();
      ui->re_password1->clear();
      ui->re_password2->clear();
      ui->re_num->setFocus();
    }
  else
    {
      Manager::AddReader(ui->re_num->text().toStdString(),ui->re_name->text().toStdString(),ui->re_password1->text().toStdString(),ui->re_sex->currentIndex());
      QMessageBox *msgbox = new QMessageBox(this);
      msgbox->information(this,"提示","注册成功！");
      this->close();

    }
}
