#ifndef LIBRARYSYSTEM_READER_H
#define LIBRARYSYSTEM_READER_H
#include "User.h"
#include "Book.h"
#include <vector>
#include "Bookrecord.h"
using namespace std;
class Reader : public User
{
private:
    bool m_borrow_able;
    int m_borrow_number;
    vector<Bookrecord> record;
public:
    vector<Bookrecord>& GetRecord();
    void SetAble();
    void SetNUmber();
    string GetID();
    int m_no{};
    bool ReturnBook(int no);
    bool BorrowBook(string id);
    bool FindBook(string);
    bool pay();
    void ShowRecord();
    //void ShowMenu();
    int GetState();
    int GetNumber();
    Reader();
    Reader(string id,string name,string psw,int sex);
    Reader(string id,string name,string psw,int sex,bool borrow_able,int borrow_number);
    Reader(bool,int);
    ~Reader();
    void CheckRecord();
    void Init();
};
//
// Created by yl on 2021/5/7.
//
#endif //LIBRARYSYSTEM_READER_H
