#include "home.h"
#include "ui_home.h"
#include "project/librarysystem/Manager.h"
#include <QMessageBox>

Home::Home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Home)
{
    int i = 0;
    ui->setupUi(this);
    setWindowIcon(QIcon(":/library.png"));
    setWindowTitle("用户界面");
    ui->tableView_1->setEditTriggers(QAbstractItemView::NoEditTriggers);//不可编辑
    ui->tableView_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView_1->setSelectionBehavior(QAbstractItemView::SelectRows);//设置选中模式为选中行
    ui->tableView_1->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
    ui->tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);//设置选中模式为选中行
    ui->tableView_2->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
    ui->tableView_1->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);//自动调节
    ui->tableView_2->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    model1 = new QStandardItemModel( ui-> tableView_1);
    model2 = new QStandardItemModel( ui-> tableView_2);
    ui -> tableView_1 -> setModel ( model1 );
    ui -> tableView_2 -> setModel ( model2 );
    model1->setHorizontalHeaderLabels(QStringList()<<"图书编号"<<"图书名称"<<"作者"<<"出版社"<<"专业领域"<<"入库时间"<<"剩余本数"<<"总本数");
    model2->setHorizontalHeaderLabels(QStringList()<<"图书编号"<<"图书名称"<<"作者"<<"出版社"<<"专业领域"<<"借书时间"<<"还书时间");
    for(Book &b : Manager::booklist) {
          showbookline1(&b,i++);
        }

}

Home::~Home()
{
    delete ui;
}


void Home::on_btn_ok_clicked()
{
    int row = ui-> tableView_1 ->currentIndex().row();//获得当前行索引
    if(row!= -1)
      {
        QModelIndex index = model1->index(row,0);
        QString id = model1->data(index).toString();
        Book* book0;
        book0 = Manager::FindBook(id.toStdString());
        if(book0->GetBookLeftnum() == 0)
          {
            QMessageBox *msgbox = new QMessageBox(this);
            msgbox->information(this,"提示","无剩余书籍！");
          }
        else if(mainreader->GetNumber() == 0)
        {
            QMessageBox *msgbox = new QMessageBox(this);
            msgbox->information(this,"提示","无借书份额，请先还书！");
        }else if(!mainreader->GetState())
          {
            QMessageBox *msgbox = new QMessageBox(this);
            msgbox->information(this,"提示","请先交罚款！");
          }
        else
          {
            mainreader->BorrowBook(id.toStdString());
            mainreader->CheckRecord();
            QMessageBox *msgbox = new QMessageBox(this);
            msgbox->information(this,"提示","借阅成功！");
          }
        int i = 0;
        model1->removeRows(0,model1->rowCount());//清除
        for(Book &b : Manager::booklist) {
            Home::showbookline1(&b,i++);
          }
      }
}



void Home::on_btn_back_clicked()
{
    int row = ui-> tableView_2 ->currentIndex().row();//获得当前行索引
    if(row != -1)
      {
        QModelIndex index = model2->index(row,0);
        QString id = model2->data(index).toString();
        Manager::ReturnBook(id.toStdString());
        QMessageBox *msgbox = new QMessageBox(this);
        msgbox->information(this,"提示","还书成功！");
      }


}

void Home::on_btn_all_clicked()
{
  int i = 0;
    model1->removeRows(0,model1->rowCount());//清除
    for(Book &b : Manager::booklist) {
          Home::showbookline1(&b,i++);
        }
}

void Home::on_btn_search_clicked()
{
    model1->removeRows(0,model1->rowCount());//清除
    int index=0;
    index=ui->comboBox->currentIndex();
    if(index == 0)
      {
          string name = ui->lineEdit->text().toStdString();
          int n = name.length();
          for(Book &b : Manager::booklist) {
              for(int i=0;i<n;i++) {
                  Chinese c1;
                  Chinese c2;
                  wstring w1_str = c1.strToWstr(name);
                  string temp = b.GetBookName();
                  wstring w2_str = c2.strToWstr(temp);
                  if(temp.find(name) != temp.npos) {
                      b.flag++;
                  }
              }
          }
          int line=0;
          for(Book &b : Manager::booklist) {
              if(b.flag != 0) {
                  showbookline1(&b,line++);
              }
          }
            }
      else if(index == 2)
      {
        string field = ui->lineEdit->text().toStdString();
        int n = field.length();
        for(Book &b : Manager::booklist) {
            for(int i=0;i<n;i++) {
                Chinese c1;
                Chinese c2;
                wstring w1_str = c1.strToWstr(field);
                string temp = b.GetBookField();
                wstring w2_str = c2.strToWstr(temp);
                if(temp.find(field) != temp.npos) {
                    b.flag++;
                }
            }
        }
        int line = 0;
        for(Book &b : Manager::booklist) {
            if(b.flag != 0) {
                showbookline1(&b,line++);
            }
          }
      }
    else if(index == 1)
      {
            string writer = ui->lineEdit->text().toStdString();
            int n = writer.length();
            for(Book &b :Manager::booklist) {
                for(int i=0;i<n;i++) {
                    Chinese c1;
                    Chinese c2;
                    wstring w1_str = c1.strToWstr(writer);
                    string temp = b.GetBookWriter();
                    wstring w2_str = c2.strToWstr(temp);
                    if(temp.find(writer) != temp.npos) {
                        b.flag++;
                    }
                }
            }
            int line = 0;
            for(Book &b : Manager::booklist) {
                if(b.flag != 0) {
                    showbookline1(&b,line++);
                }
            }
      }
}


void Home::showbookline1(Book *b, int i)
{
  model1->setItem(i,0,new QStandardItem(QString::fromStdString(b->GetBookID())));
  model1->setItem(i,1,new QStandardItem(QString::fromStdString(b->GetBookName())));
  model1->setItem(i,2,new QStandardItem(QString::fromStdString(b->GetBookWriter())));
  model1->setItem(i,3,new QStandardItem(QString::fromStdString(b->GetBookPublisher())));
  model1->setItem(i,4,new QStandardItem(QString::fromStdString(b->GetBookField())));
  QString year = QString::number(b->m_indate.Ryear());
  QString month = QString::number(b->m_indate.Rmonth());
  QString day = QString::number(b->m_indate.Rday());
  QString data = QString("%1/%2/%3").arg(year).arg(month).arg(day);
  model1->setItem(i,5,new QStandardItem(data));
  model1->setItem(i,6,new QStandardItem(QString::number(b->GetBookLeftnum())));
  model1->setItem(i,7,new QStandardItem(QString::number(b->GetBookTotalnum())));
  //qDebug()<<QString::fromStdString(b.GetBookID())<<QString::fromStdString(b.GetBookName())<<QString::fromStdString(b.GetBookWriter())<<QString::fromStdString(b.GetBookPublisher())<<QString::fromStdString(b.GetBookField());
}

void Home::showbookline2(Bookrecord *b, int i)
{
  model2->setItem(i,0,new QStandardItem(QString::fromStdString(b->m_id)));
  model2->setItem(i,1,new QStandardItem(QString::fromStdString(b->m_name)));
  model2->setItem(i,2,new QStandardItem(QString::fromStdString(b->m_writer)));
  model2->setItem(i,3,new QStandardItem(QString::fromStdString(b->m_publisher)));
  model2->setItem(i,4,new QStandardItem(QString::fromStdString(b->m_field)));
  QString byear = QString::number(b->m_bdate.Ryear()),ryear = QString::number(b->m_rdate.Ryear());
  QString bmonth = QString::number(b->m_bdate.Rmonth()),rmonth = QString::number(b->m_rdate.Rmonth());
  QString bday = QString::number(b->m_bdate.Rday()),rday = QString::number(b->m_rdate.Rday());
  QString bdata = QString("%1/%2/%3").arg(byear).arg(bmonth).arg(bday);
  QString rdata = QString("%1/%2/%3").arg(ryear).arg(rmonth).arg(rday);
  model2->setItem(i,5,new QStandardItem(bdata));
  model2->setItem(i,6,new QStandardItem(rdata));


}

void Home::on_btn_exit_clicked()
{
    this->close();
    library* lab = new library;
    lab->show();
}
