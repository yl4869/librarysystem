#include "re_book.h"
#include "ui_re_book.h"
#include "manage.h"
Re_book::Re_book(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Re_book)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/library.png"));
    setWindowTitle("修改图书信息");

}

Re_book::~Re_book()
{
    delete ui;
}

void Re_book::get(Book* re,QString a,QString b,QString c,QString d,int left,int tal)
{
    old = re;
    ui->lineEdit_2->setFocus();
    ui->lineEdit_2->setText(a);
    ui->lineEdit_3->setText(b);
    ui->lineEdit_4->setText(c);
    ui->lineEdit_5->setText(d);
    ui->lineEdit_1->setText(QString::number(left));
    ui->lineEdit_6->setText(QString::number(tal));

}

void Re_book::on_btn_re_clicked()
{
    if(ui->lineEdit_6->text().toInt() >= ui->lineEdit_1->text().toInt())
      {
        old->SetLeftnum(ui->lineEdit_1->text().toInt());
        old->SetBookName(ui->lineEdit_2->text().toStdString());
        old->SetBookWriter(ui->lineEdit_3->text().toStdString());
        old->SetBookPublisher(ui->lineEdit_4->text().toStdString());
        old->SetBookField(ui->lineEdit_5->text().toStdString());
        old->SetBookTotalnum(ui->lineEdit_6->text().toInt());
        QMessageBox *msgbox = new QMessageBox(this);
        msgbox->information(this,"提示","修改成功，请点击显示全表以查看！");
        save();
        this->close();
      }
    else{
        QMessageBox *msgbox = new QMessageBox(this);
        msgbox->information(this,"提示","总数量小于借出总数，请重新修改！");
        ui->lineEdit_6->clear();
        ui->lineEdit_1->clear();
        ui->lineEdit_1->setFocus();
      }
}

void Re_book::on_btn_rent_clicked()
{
    Rent* ren = new Rent;
    ren->setWindowModality(Qt::ApplicationModal);
    ren->show();
}

