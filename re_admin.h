#ifndef RE_ADMIN_H
#define RE_ADMIN_H

#include <QWidget>
#include "project/librarysystem/Manager.h"
#include "cpp_re.h"
#include <QMessageBox>
#include "manage.h"
namespace Ui {
  class Re_admin;
}

class Re_admin : public QWidget
{
  Q_OBJECT

public:
  explicit Re_admin(QWidget *parent = nullptr);
  ~Re_admin();
  void get(Ladmin* lad,QString a,int sex,QString c);

private slots:
  void on_pushButton_clicked();

private:
  Ui::Re_admin *ui;
  Ladmin* old;
};

#endif // RE_ADMIN_H
