#ifndef RE_ACCOUNT_H
#define RE_ACCOUNT_H

#include <QWidget>
#include "project/librarysystem/Manager.h"
#include "cpp_re.h"
#include <QMessageBox>
namespace Ui {
class Re_account;
}

class Re_account : public QWidget
{
    Q_OBJECT

public:
    explicit Re_account(QWidget *parent = nullptr);
    ~Re_account();
    void get(QString a,QString b,int sex,QString d);

private slots:
    void on_btn_save_clicked();


private:
    Ui::Re_account *ui;
    Reader* old;
};

#endif // RE_ACCOUNT_H
