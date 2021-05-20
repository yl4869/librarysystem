#include "re_account.h"
#include "ui_re_account.h"

Re_account::Re_account(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Re_account)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/library.png"));
    setWindowTitle("修改账户");
    ui->comboBox->addItem("男");
    ui->comboBox->addItem("女");
}

Re_account::~Re_account()
{
    delete ui;
}
void Re_account::get(QString a,QString b,int sex,QString d)
{
    ui->lineEdit_1->setText(a);
    ui->lineEdit_2->setText(b);
    ui->lineEdit_4->setText(d);
    ui->comboBox->setCurrentIndex(sex);
    //ui->comboBox_2->addItem(f);

}

void Re_account::on_btn_save_clicked()
{

  QMessageBox *msgbox = new QMessageBox(this);
  msgbox->information(this,"提示","修改成功！");
  this->close();
}

//void Re_account::on_pushButton_2_clicked()
//{
//  string name = ui->comboBox_2->currentText().toStdString();
//  Book* book0;
//  book0 = Manager::FindBookName(name);
//  Book* base = Manager::ReturnBook(book0->GetBookID());
//  QMessageBox *msgbox = new QMessageBox(this);
//  msgbox->information(this,"提示","还书成功！");
//}
