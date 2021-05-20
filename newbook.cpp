#include "newbook.h"
#include "ui_newbook.h"
#include "project/librarysystem/Manager.h"
#include <QMessageBox>
NewBook::NewBook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewBook)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/library.png"));
    setWindowTitle("添加图书");
    ui->lineEdit_6->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));
}

NewBook::~NewBook()
{
    delete ui;
}

void NewBook::on_btn_addbook_clicked()
{
    Manager::AddNewBook(ui->lineEdit_1->text().toStdString(),
                        ui->lineEdit_2->text().toStdString(),
                        ui->lineEdit_3->text().toStdString(),
                        ui->lineEdit_4->text().toStdString(),
                        ui->lineEdit_6->text().toInt(),
                        ui->lineEdit_5->text().toStdString());
    QMessageBox *msgbox = new QMessageBox(this);
    msgbox->information(this,"提示","添加图书成功！");
    this->close();
}
