#ifndef LIBRARY_H
#define LIBRARY_H

#include <QMainWindow>
#include <QMessageBox>
#include "register_qt.h"
#include "forget.h"
#include "home.h"
#include "manage.h"
#include "project/librarysystem/Reader.h"
#include "project/librarysystem/Manager.h"
#include "project/librarysystem/Ladmin.h"
#include "cpp_re.h"
QT_BEGIN_NAMESPACE
namespace Ui { class library; }
QT_END_NAMESPACE

class library : public QMainWindow
{
    Q_OBJECT

public:
    library(QWidget *parent = nullptr);
    ~library();

private slots:
    void on_btn_login_clicked();

    void on_btn_register_clicked();

    void on_btn_retrieve_clicked();

    void on_comboBox_activated(int index);

    void on_line_account_returnPressed();

    void on_line_password_returnPressed();

private:
    Ui::library *ui;
};
#endif // LIBRARY_H
