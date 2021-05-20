#include "library.h" 
#include <QApplication>
void Flush();
void Load();
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    library w;
    File f;
    f.Init();
    f.LoadBook(Manager::booklist);
    f.LoadAdmin(Manager::ladminlist);
    f.LoadReader(Manager::readerlist);
    w.show();
    return a.exec();
}
void Flush() {
  File f;
  f.Init();
  f.LoadBook(Manager::booklist);
  f.LoadAdmin(Manager::ladminlist);
  f.LoadReader(Manager::readerlist);
}
void Load() {
  File f;
  f.Init();
  f.LoadBook(Manager::booklist);
  f.LoadAdmin(Manager::ladminlist);
  f.LoadReader(Manager::readerlist);
}
/*#include <iostream>
#include <string>
#include "Manager.h"
#include "File.h"
#include "Menu.h"
using namespace std;
vector<Book> Manager::booklist;
vector<Reader> Manager::readerlist;
vector<Ladmin> Manager::ladminlist;
void Init() {
    File file;
    Menu menu;
    menu.FirstMenu();
    file.LoadReader(Manager::readerlist);
    file.LoadAdmin(Manager::ladminlist);
    file.LoadBook(Manager::booklist);
   cout << "请输入命令" <<endl;
    int command = -1;
    cin >> command;
    while (command != 1 && command != 2 && command != 3) {
        cout << "命令输入有误，请重新输入" << endl;
        cout << "请输入命令" <<endl;
        cin>>command;
    }
    string id;
    string psw;
    string ppsw;
    string name;
    Reader *reader = nullptr;
    Ladmin *ladmin = nullptr;
    switch (command) {
        case 1:
            cout << "请输入账号" << endl;
            cin>>id;
            while (Manager::FindAdmin(id) == nullptr) {
                cout << "账号不存在，请重新输入" << endl;
                cin>>id;
            }
            ladmin = Manager::FindAdmin(id);
            cout << "请输入密码" << endl;
            cin >> psw;
            if(psw != ladmin->GetPsw()) {
                cout << "密码错误，请重新输入" << endl;
                cout << "请输入密码" << endl;
                cin >> psw;
            }
            cout << "登陆成功，按任意键跳转至主菜单" << endl;
            ladmin->ShowMenu();
        case 2:
            cout << "请输入账号" << endl;
            cin>>id;
            while (Manager::FindReader(id) == nullptr) {
                cout << "账号不存在，请重新输入" << endl;
                cin>>id;
            }
            reader = Manager::FindReader(id);
            cout << "请输入密码" << endl;
            cin >> psw;
            if(psw != reader->GetPsw()) {
                cout << "密码错误，请重新输入" << endl;
                cout << "请输入密码" << endl;
                cin >> psw;
            }
            cout << "登陆成功，按任意键跳转至主菜单" << endl;
            reader->ShowMenu();
        case 3:
            cout << "请输入账号" << endl;
            cin>>id;
            while (Manager::FindReader(id) != nullptr) {
                cout << "账号已存在，请重新输入" << endl;
                cin>>id;
            }
            cout << "请输入密码" << endl;
            cin >> psw;
            cout << "请再次输入" << endl;
            cin >> ppsw;
            while (psw != ppsw) {
                cout << "两次密码不一致，请重新输入" << endl;
                cout << "请输入密码" << endl;
                cin >> psw;
                cout << "请再次输入" << endl;
                cin >> ppsw;
            }
            cout << "请输入姓名" << endl;
            cin >> name;
            Manager::AddReader(id,name,psw);
            File::FlushReader(Manager::readerlist);
            cout << "注册成功，按任意键返回" << endl;
            system("pause");
            Init();
            break;
    }
}
void Refresh()
{
    File f;
    File::FlushReader(Manager::readerlist);
    File::FlushAdmin(Manager::ladminlist);
    File::FlushBook(Manager::booklist);
}
int main() {
    cout<<"正在初始化..."<<endl;
    File file;
    file.Init();
    cout<<"初始化完成"<<endl;
    Init();
    return 0;
}*/
