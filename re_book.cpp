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

void Re_book::get(QString a,QString b,QString c,QString d,QString e,int num)
{
    ui->lineEdit_1->setFocus();
    ui->lineEdit_1->setText(a);
    ui->lineEdit_2->setText(b);
    ui->lineEdit_3->setText(c);
    ui->lineEdit_4->setText(d);
    ui->lineEdit_5->setText(e);
    ui->lineEdit_6->setText(QString::number(num));
    old = Manager::FindBook(a.toStdString());

}

//void Re_book::on_btn_re_clicked()
//{
//  int i = 0;
//    if(ui->lineEdit_6->text().toInt() >= old->m_leftnum - old->m_totalnum)
//      {
//        Cpp_re::Rebook(old,
//                       ui->lineEdit_1->text().toStdString(),
//                       ui->lineEdit_2->text().toStdString(),
//                       ui->lineEdit_3->text().toStdString(),
//                       ui->lineEdit_4->text().toStdString(),
//                       /*ui->lineEdit_5->text().toStdString(),*/
//                       ui->lineEdit_6->text().toInt());
//        QMessageBox *msgbox = new QMessageBox(this);
//        msgbox->information(this,"提示","修改成功！");
//        File f;
//        File::FlushBook(Manager::booklist);
//        this->close();
//      }
//    else{
//        QMessageBox *msgbox = new QMessageBox(this);
//        msgbox->information(this,"提示","数量小于借出总数！");
//        ui->lineEdit_6->clear();
//        ui->lineEdit_6->setFocus();
//      }
//}

void Re_book::on_btn_rent_clicked()
{
    Rent* ren = new Rent;
    ren->setWindowModality(Qt::ApplicationModal);
    ren->show();
}

