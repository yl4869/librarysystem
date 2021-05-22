//
// Created by yunlang on 2021/5/17.
//
#include <ctime>
#include <iostream>
#include "Date.h"
using namespace std;
#ifndef LIBRARYSYSTEM_BOOKRECORD_H
#define LIBRARYSYSTEM_BOOKRECORD_H
class Bookrecord {
private:
    string m_id;
    string m_name;
    string m_writer;
    string m_publisher;
    string m_field;
    Date m_bdate;
    Date m_rdate;
    bool outdate;
    int m_no;
public:
    string GetID();
    string GetName();
    string GetWriter();
    string GetPublisher();
    string GetField();
    int GetNo();
    Date& GetBDate();
    Date& GetRDate();
    void CheckRecord();
    bool GetOutdate();
    Bookrecord();
    ~Bookrecord();
    Bookrecord(string id,string name,string writer,int byear,int bmonth,int bday,int ryear,int rmonth,int rday,string publisher,string field,int no);
};
#endif //LIBRARYSYSTEM_BOOKRECORD_H
