#ifndef NEWBOOK_H
#define NEWBOOK_H

#include <QWidget>

namespace Ui {
class NewBook;
}

class NewBook : public QWidget
{
    Q_OBJECT

public:
    explicit NewBook(QWidget *parent = nullptr);
    ~NewBook();

private slots:
    void on_btn_addbook_clicked();

private:
    Ui::NewBook *ui;
};

#endif // NEWBOOK_H
