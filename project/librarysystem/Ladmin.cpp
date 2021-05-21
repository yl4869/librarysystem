#include "Ladmin.h"
#include <iostream>
#include <utility>
#include "Manager.h"
void Init();
void Refresh();
using namespace std;
void AddAdmin()
{
    string id;
    string name;
    string psw;
    int sex;
    if(Manager::FindAdmin(id)) cout << "has exist" << endl;
    else Manager::AddAdmin(id,name,psw,sex);
}
void AddBook()
{
    string id;
    string name;
    string writer;
    string publisher;
    string field;
    int num;
    if(Manager::FindBook(id)) Manager::AddOldBook(id,num);
    else Manager::AddNewBook(id,name,writer,publisher,num,field);
}
void Ladmin::GetUsers()  {
    for(auto & i : Manager::readerlist) {
        if(i.GetState()) cout <<"可借";
        else cout <<"不可借";
        cout << endl;
    }
}
void Ladmin::GetBooks() {
for(auto & i : Manager::booklist) {
    }
}
Ladmin::Ladmin() = default;
Ladmin::Ladmin(string id, string name, string psw,int sex):User(id,name,psw,sex) {}
Ladmin::~Ladmin() = default;
//
// Created by yl on 2021/5/15.
//

