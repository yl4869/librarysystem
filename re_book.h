#ifndef RE_BOOK_H
#define RE_BOOK_H

#include <QWidget>
#include <iostream>
#include <QDebug>
#include "rent.h"
#include "project/librarysystem/Manager.h"
#include "cpp_re.h"
#include <QMessageBox>
namespace Ui {
class Re_book;
}

class Re_book : public QWidget
{
    Q_OBJECT

public:
    explicit Re_book(QWidget *parent = nullptr);
    ~Re_book();
    void get(QString a,QString b,QString c,QString d,QString e,int num);

private slots:
//    void on_btn_re_clicked();

    void on_btn_rent_clicked();

private:
    Ui::Re_book *ui;
    QString line[7];
    Book* old;
};

#endif // RE_BOOK_H
