#include <algorithm>
#include "File.h"
#include "Manager.h"
#include <QWidget>
#include <QStandardItemModel>
#include <QDebug>
#include "library.h"
#include "ui_library.h"

using namespace std;
vector <Book>   Manager::booklist;
vector <Reader> Manager::readerlist;
vector <Ladmin> Manager::ladminlist;
bool Manager::DeleteBook(Reader &r) {
    for(Book &b : booklist) {
        for(Bookrecord &br : r.GetRecord()) {
            if(b.GetBookID() == br.GetID() && br.GetOutdate() == 1) {
                b.SetBookTotalnum(b.GetBookTotalnum()-1);
            }
        }
    }
    return 1;
}
bool Manager::DeleteRecord(Reader &r) {
    for(auto i  =r.GetRecord().begin(); i!=r.GetRecord().end();) {
        if(i->GetOutdate() == 1) {
            if(r.GetRecord().size() <=1 ) {
                r.GetRecord().pop_back();
            }else {
                i = r.GetRecord().erase(i);
            }
        }else {
            i++;
          }
    }
    return 1;
}
Book * Manager::FindBook(string id) {
    for(Book &b : booklist)
    {
        if(b.GetBookID() == id)
        {
            return &b;
        }
    }
    return nullptr;
}
bool Manager::AddNewBook(string id, string name, string writer, string publisher,int num,string field) {
    for( Book &b : booklist)
    {
        if(b.GetBookID() == id)
        {
            return false;
        }
    }
    booklist.push_back(Book(id,name,writer,publisher,num,field));
    booklist.back().m_no = int(booklist.size());
    return true;
}
bool Manager::AddOldBook(string id,int num) {
    int flag = 0;
    for( Book &b : booklist)
    {
        if(b.GetBookID() == id)
        {
            //b.m_totalnum+=num;
            b.SetTotalnum(b.GetBookTotalnum()+num);
            flag = 1;
        }
    }
    return flag;
}
bool Manager::RemoveBook(string id) {
    int flag = 0;
    for(auto i  =booklist.begin(); i!=booklist.end();) {
        if(i->GetBookID() == id) {
            if(booklist.size() <=1 ) {
                booklist.pop_back();
            }else {
                i = booklist.erase(i);
            }
            flag = 1;
        }else {
            i++;
          }
    }
    return flag;
}
Reader* Manager::FindReader(string id) {
    for(Reader &r : readerlist)
    {
        if(r.GetID() == id) {
            return &r;
        }
    }
    return NULL;
}
bool Manager::AddReader(string id, string name, string psw,int sex)
{
    for( Reader &r : readerlist)
    {
        if(r.GetID() == id) {
            return false;
        }
    }
    readerlist.push_back( Reader(id,name,psw,sex));
    readerlist.back().m_no = int(readerlist.size());
    return true;
}
bool Manager::RemoveReader(string id) {
//    int flag = 0;
//    for( auto i = readerlist.begin();i != readerlist.end();i++) {
//        if(i->GetID() == id) {
//            readerlist.erase(i);
//            flag = 1;
//        }
//    }
//    return flag;
  int flag = 0;
  for(auto i  =readerlist.begin(); i!=readerlist.end();) {
      if(i->GetID() == id) {
          if(readerlist.size() <=1 ) {
              readerlist.pop_back();
          }else {
              i = readerlist.erase(i);
          }
          flag = 1;
      }else {
          i++;
        }
  }
  return flag;
}
Ladmin* Manager::FindAdmin(string id) {
    for(Ladmin &a : ladminlist)
    {
        if(a.GetID() == id)
        {
            return &a;
        }
    }
    return nullptr;
}
bool Manager::RemoveAdmin(string id) {
//    int flag = 0;
//    for(auto i = ladminlist.begin(); i!=ladminlist.end(); i++) {
//        if(i->GetID() == id) {
//            ladminlist.erase(i);
//            flag = 1;
//        }
//    }
//    return flag;
  int flag = 0;
  for(auto i  =ladminlist.begin(); i!=ladminlist.end();) {
      if(i->GetID() == id) {
          if(ladminlist.size() <=1 ) {
              ladminlist.pop_back();
          }else {
              i = ladminlist.erase(i);
          }
          flag = 1;
      }else {
          i++;
        }
  }
  return flag;
}
bool Manager::AddAdmin(string id, string name, string psw,int sex) {
    for(Ladmin & a : ladminlist) {
        if(a.GetID() == id) {
            return false;
        }
    }
    ladminlist.push_back(Ladmin(id,name,psw,sex));
    return 1;
}
Book* Manager::BorrowBook(string id) {
    int flag = 0;
    for(Book &b : booklist) {
        if(b.GetBookID() == id) {
            if(b.GetBookLeftnum() == 0) {
                return 0;
            } else {
                //b.m_leftnum--;
                b.SetLeftnum(b.GetBookLeftnum()-1);
                flag = 1;
                break;
            }
        }
    }
}
bool Manager::ResetReaderPsw(string id, string psw) {
    int flag = 0;
    for(Reader &b : readerlist) {
        if(b.GetID() == id) {
            b.SetPsw(psw);
            flag = 1;
        }
    }
    return flag;
}
bool Manager::ResetReaderName(string id, string name) {
    int flag = 0;
    for(Reader &b : readerlist) {
        if(b.GetID() == id) {
            b.SetName(name);
            flag = 1;
        }
    }
    return flag;
}
bool Manager::ResetReaderSex(string id, int sex) {
    int flag = 0;
    for(Reader &b : readerlist) {
        if(b.GetID() == id) {
            b.SetSex(sex);
            flag = 1;
        }
    }
    return flag;
}
bool Manager::ResetAdminPsw(string id, string psw) {
    int flag = 0;
    for(Ladmin &l : ladminlist) {
        if(l.GetID() == id) {
            l.SetPsw(psw);
            flag = 1;
        }
    }
    return flag;
}
bool Manager::ResetAdminName(string id, string name) {
    int flag = 0;
    for(Ladmin &l : ladminlist) {
        if(l.GetID() == id) {
            l.SetName(name);
            flag = 1;
        }
    }
    return flag;
}
bool Manager::ResetAdminSex(string id, int sex) {
    int flag = 0;
    for(Ladmin &l : ladminlist) {
        if(l.GetID() == id) {
            l.SetSex(sex);
            flag = 1;
        }
    }
    return flag;
}
void Manager::ReturnBook(string id) {
    for(Book &b : booklist) {
        if(b.GetBookID() == id){
            b.SetLeftnum(b.GetBookLeftnum()+1);
        }
    }
}
bool Manager::ResetBookName(string id, string name) {
    int flag = 0;
    for(Book &b : booklist) {
        if(b.GetBookID() == id) {
            b.SetBookName(name);
            flag = 1;
        }
    }
    return flag;
}
bool Manager::ResetBookWriter(string id, string writer) {
    int flag = 0;
    for(Book &b : booklist) {
        if(b.GetBookID() == id) {
            b.SetBookWriter(writer);
            flag = 1;
        }
    }
    return flag;
}
bool Manager::ResetBookPublisher(string id, string publisher) {
    int flag = 0;
    for(Book &b : booklist) {
        if(b.GetBookID() == id) {
            b.SetBookPublisher(publisher);
            flag = 1;
        }
    }
    return flag;
}
bool Manager::ResetBookField(string id, string field) {
    int flag = 0;
    for(Book &b : booklist) {
        if(b.GetBookID() == id) {
            b.SetBookField(field);
            flag = 1;
        }
    }
    return flag;
}
bool Manager::ResetBookTotalnum(string id, int totalnum) {
    int flag = 0;
    for(Book &b : booklist) {
        if(b.GetBookID() == id) {
            b.SetBookTotalnum(totalnum);
            flag = 1;
        }
    }
    return flag;
}
bool Manager::ResetBookLeftnum(string id, int leftnum) {
    int flag = 0;
    for(Book &b : booklist) {
        if(b.GetBookID() == id) {
            b.SetBookLeftnum(leftnum);
            flag = 1;
        }
    }
    return flag;
}



//void Manager::FindBookField(Home* home,string field) {
//    int n = field.length();
//    for(Book &b : booklist) {
//        for(int i=0;i<n;i++) {
//            Chinese c1;
//            Chinese c2;
//            wstring w1_str = c1.strToWstr(field);
//            string temp = b.GetBookName();
//            wstring w2_str = c2.strToWstr(temp);
//            if(temp.find(field) != temp.npos) {
//                b.flag++;
//            }
//        }
//    }
//    int line = 0;
//    for(Book &b : booklist) {
//        if(b.flag != 0) {
//            home->showbookline1(&b,line++);
//        }
//    }
//}
//void Manager::FindBookWriter (Home* home,string writer) {
//    int n = writer.length();
//    for(Book &b : booklist) {
//        for(int i=0;i<n;i++) {
//            Chinese c1;
//            Chinese c2;
//            wstring w1_str = c1.strToWstr(writer);
//            string temp = b.GetBookName();
//            wstring w2_str = c2.strToWstr(temp);
//            if(temp.find(writer) != temp.npos) {
//                b.flag++;
//            }
//        }
//    }

//    int line = 0;
//    for(Book &b : booklist) {
//        if(b.flag != 0) {
//            home->showbookline1(&b,line++);
//        }
//    }
//}

//void Manager::FindBookName(Manage *man,string name) {
//    int n = name.length();
//    for(Book &b : booklist) {
//        for(int i=0;i<n;i++) {
//            Chinese c1;
//            Chinese c2;
//            wstring w1_str = c1.strToWstr(name);
//            string temp = b.GetBookName();
//            wstring w2_str = c2.strToWstr(temp);
//            if(temp.find(name) != temp.npos) {
//                b.flag++;
//            }
//        }
//    }
//    int line=0;
//    for(Book &b : booklist) {
//        if(b.flag != 0) {
//            man->showbookline3(&b,line++);
//        }
//    }
//}

//void Manager::FindBookField(Manage* man,string field) {
//    int n = field.length();
//    for(Book &b : booklist) {
//        for(int i=0;i<n;i++) {
//            Chinese c1;
//            Chinese c2;
//            wstring w1_str = c1.strToWstr(field);
//            string temp = b.GetBookName();
//            wstring w2_str = c2.strToWstr(temp);
//            if(temp.find(field) != temp.npos) {
//                b.flag++;
//            }
//        }
//    }
//    int line = 0;
//    for(Book &b : booklist) {
//        if(b.flag != 0) {
//            man->showbookline3(&b,line++);
//        }
//    }
//}
//void Manager::FindBookWriter (Manage* man,string writer) {
//    int n = writer.length();
//    for(Book &b : booklist) {
//        for(int i=0;i<n;i++) {
//            Chinese c1;
//            Chinese c2;
//            wstring w1_str = c1.strToWstr(writer);
//            string temp = b.GetBookName();
//            wstring w2_str = c2.strToWstr(temp);
//            if(temp.find(writer) != temp.npos) {
//                b.flag++;
//            }
//        }
//    }

//    int line = 0;
//    for(Book &b : booklist) {
//        if(b.flag != 0) {
//            man->showbookline3(&b,line++);
//        }
//    }
//}
//void Manager::FindBookName(Home *home,string name) {
//    int n = name.length();
//    for(Book &b : booklist) {
//        for(int i=0;i<n;i++) {
//            Chinese c1;
//            Chinese c2;
//            wstring w1_str = c1.strToWstr(name);
//            string temp = b.GetBookName();
//            wstring w2_str = c2.strToWstr(temp);
//            if(temp.find(name) != temp.npos) {
//                b.flag++;
//            }
//        }
//    }
//    int line=0;
//    for(Book &b : booklist) {
//        if(b.flag != 0) {
//            home->showbookline1(&b,line++);
//        }
//    }
//}
//
// Created by yl on 2021/5/11.
//

