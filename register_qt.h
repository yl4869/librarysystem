#ifndef REGISTER_QT_H
#define REGISTER_QT_H

#include <QWidget>
#include "library.h"
#include "project/librarysystem/File.h"
#include "project/librarysystem/Manager.h"
namespace Ui {
class register_qt;
}

class register_qt : public QWidget
{
    Q_OBJECT

public:
    explicit register_qt(QWidget *parent = nullptr);
    ~register_qt();

private slots:

    void on_btn_register_clicked();

private:
    Ui::register_qt *ui;
};

#endif // REGISTER_QT_H
