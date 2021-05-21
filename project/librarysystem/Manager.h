#ifndef LIBRARYSYSTEM_MANAGER_H
#define LIBRARYSYSTEM_MANAGER_H

#include "Book.h"
#include "string"
#include "Reader.h"
#include <vector>
#include "Ladmin.h"
#include "home.h"
class Manager
{
public:
    static vector<Book> booklist;
    static vector<Reader> readerlist;
    static vector<Ladmin> ladminlist;
    static bool DeleteBook(Reader &r);
    static bool DeleteRecord(Reader &r);
    static Book* FindBook(string id);
    static bool RemoveBook(string id);
    static bool AddNewBook(string id, string name, string writer, string publisher,int num,string field);
    static bool AddOldBook(string id,int num);
    static Reader* FindReader(string id);
    static bool AddReader(string id,string name,string psw,int sex);
    static bool RemoveReader(string id);
    static Ladmin* FindAdmin(string id);
    static bool RemoveAdmin(string id);
    static bool AddAdmin(string id,string name,string psw,int sex);
    static Book* BorrowBook(string id);
    static void ReturnBook(string id);
    static bool ResetReaderPsw(string id,string psw);
    static bool ResetAdminPsw(string id,string psw);
    static bool ResetReaderName(string id,string name);
    static bool ResetAdminName(string id,string name);
    static bool ResetReaderSex(string id,int sex);
    static bool ResetAdminSex(string id,int sex);
    static bool ResetBookName(string id,string name);
    static bool ResetBookPublisher(string id,string publisher);
    static bool ResetBookWriter(string id,string writer);
    static bool ResetBookField(string id,string field);
    static bool ResetBookTotalnum(string id,int totalnum);
    static bool ResetBookLeftnum(string id,int leftnum);
};

//
// Created by yl on 2021/5/11.
//
#endif //LIBRARYSYSTEM_MANAGER_H
