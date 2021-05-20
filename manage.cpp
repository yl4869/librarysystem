#include "manage.h"
#include "ui_manage.h"
#include "newmanage.h"
#include <iostream>
#include "project/librarysystem/Manager.h"
#include <QMessageBox>
Manage::Manage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Manage)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/library.png"));
    setWindowTitle("管理员界面");
    ui->tableView_3->setEditTriggers(QAbstractItemView::NoEditTriggers);//不可编辑
    ui->tableView_4->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView_5->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->tableView_3->setSelectionBehavior(QAbstractItemView::SelectRows);//设置选中模式为选中行
    ui->tableView_5->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView_4->setSelectionBehavior(QAbstractItemView::SelectRows);

    ui->tableView_4->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
    ui->tableView_3->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
    ui->tableView_5->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);


    ui->tableView_3->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);//自动调节
    ui->tableView_4->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableView_5->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    model3 = new QStandardItemModel( ui-> tableView_3);
    model4 = new QStandardItemModel( ui-> tableView_4);
    model5 = new QStandardItemModel( ui-> tableView_5);
    ui -> tableView_3 -> setModel ( model3 );
    ui -> tableView_4 -> setModel ( model4 );
    ui -> tableView_5 -> setModel ( model5 );
    model3->setHorizontalHeaderLabels(QStringList()<<"图书编号"<<"图书名称"<<"作者"<<"出版社"<<"专业领域"<<"入库时间"<<"剩余本数"<<"总本数");
    model4->setHorizontalHeaderLabels(QStringList()<<"学号"<<"姓名"<<"性别"<<"密码");
    model5->setHorizontalHeaderLabels(QStringList()<<"账号"<<"姓名"<<"性别"<<"密码");
    int i = 0;
   for(Book &b : Manager::booklist) {
        Manage::showbookline3(&b,i++);
       }
   i=0;
   for(Reader &b : Manager::readerlist) {
        Manage::showreaderline4(&b,i++);
       }
    i = 0;
   for(Ladmin &b : Manager::ladminlist) {
        Manage::showadminline5(&b,i++);
       }

}

Manage::~Manage()
{
    delete ui;
}

void Manage::on_btn_add_clicked()
{
    NewBook* book0 = new NewBook;
    book0->setWindowModality(Qt::ApplicationModal);
    book0->show();
}


void Manage::on_btn_add_2_clicked()
{
    register_qt* rg = new register_qt;
    rg->setWindowModality(Qt::ApplicationModal);
    rg->show();

}


void Manage::on_btn_re_book_clicked()
{
    int row = ui-> tableView_3 ->currentIndex().row();//获得当前行索引
    QModelIndex index;
    QString name[5];
    if(row!=-1)
      {
        for(int i = 0;i < 5;i++)
          {
            index = model3->index(row,i);
            name[i] = model3->data(index).toString();
          }
        index = model3->index(row,7);
        int tal = model3->data(index).toInt();
        Re_book* reb = new Re_book;
        reb->get(name[0],name[1],name[2],name[3],name[4],tal);
        reb->setWindowModality(Qt::ApplicationModal);
        reb->show();
      }
}

void Manage::on_btn_deletebook_clicked()
{
    int row = ui-> tableView_3 ->currentIndex().row();//获得当前行索引
    QModelIndex index;
    index = model3->index(row,0);
    if(row != -1)
      {
        string id = model3->data(index).toString().toStdString();
        Manager::RemoveBook(id);
        QMessageBox *msgbox = new QMessageBox(this);
        msgbox->information(this,"提示","删除成功！");
      }
      on_btn_all_2_clicked();
}

void Manage::on_btn_search_2_clicked()
{
    model3->removeRows(0,model3->rowCount());//清除
    int index=0;
    index=ui->comboBox_2->currentIndex();
    if(index == 0)
      {
          string name = ui->lineEdit_2->text().toStdString();
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
                  showbookline3(&b,line++);
              }
          }
            }
      else if(index == 2)
      {
        string field = ui->lineEdit_2->text().toStdString();
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
                showbookline3(&b,line++);
            }
          }
      }
    else if(index == 1)
      {
            string writer = ui->lineEdit_2->text().toStdString();
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
                    showbookline3(&b,line++);
                }
            }
      }
}
void Manage::on_btn_all_2_clicked()
{
    model3->removeRows(0,model3->rowCount());//清除
    int i = 0;
   for(Book &b : Manager::booklist) {
        Manage::showbookline3(&b,i++);
       }
}

void Manage::on_btn_re_account_clicked()
{
    int row = ui-> tableView_4 ->currentIndex().row();//获得当前行索引
    QModelIndex index;
    int sex = 1;
    QString name[3];
    for(int i = 0;i < 2;i++)
    {
        index = model4->index(row,i);
        name[i] = model4->data(index).toString();
    }
    index = model4->index(row,3);
    name[2] = model4->data(index).toString();
    index = model4->index(row,4);
    if(model4->data(index).toString() == "男")
      sex = 0;
    else sex = 1;
    Re_account* rea = new Re_account;
    rea->get(name[0],name[1],sex,name[2]);
    rea->setWindowModality(Qt::ApplicationModal);
    rea->show();
}

void Manage::on_btn_all_3_clicked()
{
    model4->removeRows(0,model4->rowCount());//清除
    int i = 0;
    for(Reader &b : Manager::readerlist) {
         Manage::showreaderline4(&b,i++);
        }
}

void Manage::on_btn_search_3_clicked()
{
  Reader* reader0 = NULL;
  reader0 = Manager::FindReader(ui->lineEdit_4->text().toStdString());
    if(reader0 != NULL)
          {
            model4->removeRows(0,model4->rowCount());//清除
            model4->setItem(0,0,new QStandardItem(QString::fromStdString(reader0->GetID())));
            model4->setItem(0,1,new QStandardItem(QString::fromStdString(reader0->GetName())));
            model4->setItem(0,3,new QStandardItem(QString::fromStdString(reader0->GetPsw())));
            if(reader0->GetSex() == 0)
              {
                 model4->setItem(0,2,new QStandardItem("男"));
              }
            else
              {
                model4->setItem(0,2,new QStandardItem("女"));
              }
          }
        else
          {
            QMessageBox *msgbox = new QMessageBox(this);
            msgbox->information(this,"提示","无此用户信息！");
          }

}

void Manage::on_btn_deleteaccount_clicked()
{
  int row = ui-> tableView_4 ->currentIndex().row();//获得当前行索引
  QModelIndex index;
  index = model4->index(row,0);
  if(row != -1)
    {
      string id = model4->data(index).toString().toStdString();
      Manager::RemoveReader(id);
      QMessageBox *msgbox = new QMessageBox(this);
      msgbox->information(this,"提示","删除成功！");
    }
}

void Manage::on_btn_addman_clicked()
{
    Newmanage* man = new Newmanage;
    man->setWindowModality(Qt::ApplicationModal);
    man->show();
}

void Manage::on_btn_reman_clicked()
{
  int row = ui-> tableView_5 ->currentIndex().row();//获得当前行索引
  int sex;
  QModelIndex index;
  QString name[3];
  for(int i = 0;i < 2;i++)
  {
      index = model5->index(row,i);
      name[i] = model5->data(index).toString();
  }
  index = model5->index(row,3);
  name[2] = model5->data(index).toString();
  index = model5->index(row,2);
  if(model5->data(index).toString() == "男")
    sex = 0;
  else sex = 1;
  Re_account* rea = new Re_account;
  rea->get(name[0],name[1],sex,name[2]);
  rea->setWindowModality(Qt::ApplicationModal);
  rea->show();
}

void Manage::on_btn_deleteman_clicked()
{
  int row = ui-> tableView_5 ->currentIndex().row();//获得当前行索引
  QModelIndex index;
  index = model5->index(row,0);
  if(row != -1)
    {
      string id = model5->data(index).toString().toStdString();
      Manager::RemoveAdmin(id);
      QMessageBox *msgbox = new QMessageBox(this);
      msgbox->information(this,"提示","删除成功！");
    }
}

void Manage::on_btn_search_clicked()
{
  Ladmin* ladmin0 = NULL;
  ladmin0 = Manager::FindAdmin(ui->lineEdit->text().toStdString());
    if(ladmin0 != NULL)
          {
            model5->removeRows(0,model3->rowCount());//清除
            model5->setItem(0,1,new QStandardItem(QString::fromStdString(ladmin0->GetID())));
            model5->setItem(0,2,new QStandardItem(QString::fromStdString(ladmin0->GetName())));
            model5->setItem(0,4,new QStandardItem(QString::fromStdString(ladmin0->GetPsw())));
          }
        else
          {
            QMessageBox *msgbox = new QMessageBox(this);
            msgbox->information(this,"提示","无此管理员信息！");
          }
}

void Manage::showbookline3(Book* b,int i)
{
  model3->setItem(i,0,new QStandardItem(QString::fromStdString(b->GetBookID())));
  model3->setItem(i,1,new QStandardItem(QString::fromStdString(b->GetBookName())));
  model3->setItem(i,2,new QStandardItem(QString::fromStdString(b->GetBookWriter())));
  model3->setItem(i,3,new QStandardItem(QString::fromStdString(b->GetBookPublisher())));
  model3->setItem(i,4,new QStandardItem(QString::fromStdString(b->GetBookField())));
  QString year = QString::number(b->m_indate.Ryear());
  QString month = QString::number(b->m_indate.Rmonth());
  QString day = QString::number(b->m_indate.Rday());
  QString data = QString("%1/%2/%3").arg(year).arg(month).arg(day);
  model3->setItem(i,5,new QStandardItem(data));
  model3->setItem(i,7,new QStandardItem(QString::number(b->GetBookLeftnum())));
  model3->setItem(i,6,new QStandardItem(QString::number(b->GetBookTotalnum())));

}


void Manage::showreaderline4(Reader* b,int i)
{
  model4->setItem(i,0,new QStandardItem(QString::fromStdString(b->GetID())));
  model4->setItem(i,1,new QStandardItem(QString::fromStdString(b->GetName())));
  model4->setItem(i,3,new QStandardItem(QString::fromStdString(b->GetPsw())));
  if(b->GetSex() == 0)
    {
       model4->setItem(i,2,new QStandardItem("男"));
    }
  else
    {
      model4->setItem(i,2,new QStandardItem("女"));
    }

}
void Manage::showadminline5(Ladmin* b,int i)
{
  model5->setItem(i,0,new QStandardItem(QString::fromStdString(b->GetID())));
  model5->setItem(i,1,new QStandardItem(QString::fromStdString(b->GetName())));
  model5->setItem(i,3,new QStandardItem(QString::fromStdString(b->GetPsw())));
  if(b->GetSex() == 0)
    {
       model5->setItem(i,2,new QStandardItem("男"));
    }
  else
    {
      model5->setItem(i,2,new QStandardItem("女"));
    }

}

void Manage::on_btn_all_clicked()
{
  model5->removeRows(0,model5->rowCount());//清除
  int i = 0;
  for(Ladmin &b : Manager::ladminlist) {
      Manage::showadminline5(&b,i++);
     }

}


void Manage::on_btn_exit_clicked()
{
    library* rab = new library;
    rab->show();
    this->close();
}
