#ifndef RENTBOOK_H
#define RENTBOOK_H

#include <QWidget>
#include <QMessageBox>
namespace Ui {
class Newmanage;
}

class Newmanage : public QWidget
{
    Q_OBJECT

public:
    explicit Newmanage(QWidget *parent = nullptr);
    ~Newmanage();

private slots:
  void on_pushButton_clicked();

private:
    Ui::Newmanage *ui;
};

#endif // RENTBOOK_H
