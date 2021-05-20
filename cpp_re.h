#ifndef CPP_RE_H
#define CPP_RE_H

#include <QWidget>
#include "project/librarysystem/Manager.h"
extern Reader* mainreader;
class Cpp_re : public QWidget
{
  Q_OBJECT
public:
  explicit Cpp_re(QWidget *parent = nullptr);
  static bool Rebook(Book* book0,string id, string name, string writer, string publisher,int num);
  static bool Rereader(Reader* reader0,string id,string name,string psw);
  static bool Readmin(Ladmin* ladmin0,string id,string name,string psw);

signals:

};

#endif // CPP_RE_H
