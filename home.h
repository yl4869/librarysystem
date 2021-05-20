#ifndef HOME_H
#define HOME_H

#include <QWidget>
#include <QStandardItemModel>
#include <QDebug>
#include "project/librarysystem/Manager.h"
#include "library.h"
#include "manage.h"
namespace Ui {
class Home;
}

class Home : public QWidget
{
    Q_OBJECT

public:

    explicit Home(QWidget *parent = nullptr);
    ~Home();
    void showbookline1(Book *b, int i);
    void showbookline2(Bookrecord *b, int i);


private slots:

    void on_btn_ok_clicked();


    void on_btn_back_clicked();

    void on_btn_all_clicked();

    void on_btn_search_clicked();

    void on_btn_exit_clicked();

private:
    Ui::Home *ui;
    QStandardItemModel* model1;
    QStandardItemModel* model2;

};

#endif // HOME_H
