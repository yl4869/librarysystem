#ifndef RENT_H
#define RENT_H

#include <QWidget>

namespace Ui {
class Rent;
}

class Rent : public QWidget
{
    Q_OBJECT

public:
    explicit Rent(QWidget *parent = nullptr);
    ~Rent();

private slots:
    void on_comboBox_activated(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::Rent *ui;
    int index;
};

#endif // RENT_H
