#include "newmanage.h"
#include "ui_newmanage.h"
#include "project/librarysystem/Manager.h"
Newmanage::Newmanage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Newmanage)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/library.png"));
}

Newmanage::~Newmanage()
{
    delete ui;
}

void Newmanage::on_pushButton_clicked()
{
  if(ui->lineEdit_2->text()!=ui->lineEdit_3->text())
    {
      QMessageBox *msgbox = new QMessageBox(this);
      msgbox->information(this,"提示","两次密码不同，请重新输入！");
      ui->lineEdit->clear();
      ui->lineEdit_2->clear();
      ui->lineEdit_3->clear();
      ui->lineEdit->setFocus();
    }
  else
    {
      Manager::AddAdmin(ui->lineEdit->text().toStdString(),ui->lineEdit_4->text().toStdString(),ui->lineEdit_2->text().toStdString(),ui->comboBox->currentIndex());
      QMessageBox *msgbox = new QMessageBox(this);
      msgbox->information(this,"提示","注册成功！");
      this->close();

    }
}
