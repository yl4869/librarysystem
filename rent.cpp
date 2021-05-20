#include "rent.h"
#include "ui_rent.h"

Rent::Rent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Rent)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/library.png"));
    setWindowTitle("租界详情");
    ui->comboBox->addItem("yihao");
    ui->comboBox->addItem("yiha");
    ui->comboBox->addItem("yio");
    ui->lineEdit->setFocusPolicy(Qt::NoFocus);
    ui->lineEdit_2->setFocusPolicy(Qt::NoFocus);
    ui->lineEdit_3->setFocusPolicy(Qt::NoFocus);
    index=ui->comboBox->currentIndex();
    ui->lineEdit_2->setText(ui->comboBox->itemText(index));
    ui->lineEdit_3->setText(ui->comboBox->itemText(index));
}


Rent::~Rent()
{
    delete ui;
}

void Rent::on_comboBox_activated(const QString &arg1)
{
    index=ui->comboBox->currentIndex();
    ui->lineEdit_2->setText(ui->comboBox->itemText(index));
    ui->lineEdit_3->setText(ui->comboBox->itemText(index));
}

void Rent::on_pushButton_clicked()
{
    this->close();
}
