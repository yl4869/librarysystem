#include "Bookrecord.h"
string Bookrecord::GetID() { return m_id; }
string Bookrecord::GetName() { return m_name; }
string Bookrecord::GetWriter() { return m_writer; }
string Bookrecord::GetPublisher() { return m_publisher; }
string Bookrecord::GetField() { return m_field; }
Date& Bookrecord::GetBDate() { return m_bdate; }
Date& Bookrecord::GetRDate() { return m_rdate; }
void Bookrecord::CheckRecord() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    Date n(ltm->tm_year+1900,1+ltm->tm_mon,ltm->tm_mday);
    if(n>m_rdate) outdate = 1;
}
Bookrecord::Bookrecord() = default;
Bookrecord::~Bookrecord() = default;
Bookrecord::Bookrecord(string id,string name,string writer,int byear,int bmonth,int bday,int ryear,int rmonth,int rday,string publisher,string field) : m_bdate(byear,bmonth,bday),m_rdate(ryear,rmonth,rday) {
    m_id = id;
    m_name = name;
    m_writer = writer;
    m_publisher = publisher;
    m_field = field;
    outdate = 0;
}
bool Bookrecord::GetOutdate() { return outdate; }
//
// Created by yunlang on 2021/5/17.
//

