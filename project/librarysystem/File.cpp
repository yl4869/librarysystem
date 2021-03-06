#include "File.h"
#include "fstream"
#include <unistd.h>
#include <QDebug>
#include <QWidget>
using namespace std;
void File::Init() {
    ofstream fout;
    if(access("D:/qt/librarysystem-master/demo/reader.data",F_OK) == -1) { fout.open("D:/qt/librarysystem-master/demo/reader.data"); fout.close(); }
    if(access("D:/qt/librarysystem-master/demo/ladmin.data",F_OK) == -1 ) { fout.open("D:/qt/librarysystem-master/demo/ladmin.data"); fout.close(); }
    if(access("D:/qt/librarysystem-master/demo/book.data",F_OK) == -1 ) {fout.open("D:/qt/librarysystem-master/demo/book.data"); fout.close(); }
}
bool File::LoadRecord(Reader &r,vector<Bookrecord> &record) {
    string s = "D:/qt/librarysystem-master/demo/" + r.GetID()+".data";
    ifstream fin;
    fin.open(s.c_str());
    string id;
    string name;
    string writer;
    string publisher;
    string field;
    int no = 0;
    int byear;
    int bmonth;
    int bday;
    int ryear;
    int rmonth;
    int rday;
    while (fin >> id >> name >> writer >> publisher >> field >> byear >> bmonth >> bday >> ryear >> rmonth >> rday) {
        record.push_back(Bookrecord( id,name,writer,byear,bmonth,bday,ryear,rmonth,rday,publisher,field,no++) );
    }
    fin.close();
    return 1;
}
bool File::FlushRecord(Reader &r, vector<Bookrecord> &record) {
    string s ="D:/qt/librarysystem-master/demo/" + r.GetID()+".data";
    ofstream  fout;
    fout.open(s.c_str());
    for ( auto i = record.begin(); i != record.end(); i++) {
        fout << i->GetID() << " " << i->GetName() << " " << i->GetWriter() << " " << i->GetPublisher() << " " <<i->GetField() <<" " << i->GetBDate().Ryear() << " " << i->GetBDate().Rmonth() << " " << i->GetBDate().Rday() << " " << i->GetRDate().Ryear() << " " << i->GetRDate().Rmonth() << " " << i->GetRDate().Rday() << " "<< endl;
    }
    fout.close();
    return 1;
}
bool File::LoadBook(vector<Book> &books) {
    string id;
    string name;
    string writer;
    string publisher;
    string field;
    int year;
    int month;
    int day;
    int total;
    int leftnum;
    ifstream fin;
    fin.open("D:/qt/librarysystem-master/demo/book.data",ios::binary);
    while(fin >> id >> name >> writer >> publisher >> year >> month >> day >> total >> leftnum >> field) {
        books.push_back(Book(id,name,writer,publisher,year,month,day,total,leftnum,field));
    }
    fin.close();
    return 1;
}
bool File::FlushBook(vector<Book> &books) {
    ofstream fout;
    fout.open("D:/qt/librarysystem-master/demo/book.data",ios::binary);
    for(auto i = books.begin(); i != books.end(); i++) {
        fout << i->GetBookID() << " " << i->GetBookName() << " " << i->GetBookWriter() << " " << i->GetBookPublisher() << " " <<i->GetInDate().Ryear() << " " << i->GetInDate().Rmonth() << " " << i->GetInDate().Rday() << " " << i->GetBookTotalnum() << " " << i->GetBookLeftnum() << " " << i->GetBookField() << endl;
    }
    fout.close();
    return 1;
}
bool File::LoadReader(vector<Reader> &readers) {
    string id;
    string name;
    string psw;
    int sex;
    bool borrow_able;
    int borrow_number;
    ifstream fin;
    fin.open("D:/qt/librarysystem-master/demo/reader.data",ios::binary);
    while (fin >> id >> name >> psw >> sex >> borrow_able >> borrow_number) {
        readers.push_back( Reader(id,name,psw,sex,borrow_able,borrow_number) );
    }
    fin.close();
    return 1;
}
bool File::FlushReader(vector<Reader> &readers) {
    ofstream fout;
    fout.open("D:/qt/librarysystem-master/demo/reader.data",ios::binary);
    for(auto i = readers.begin(); i != readers.end(); i++) {
        fout<<( i->GetID())<<" "<< i->GetName()<<" "<<i->GetPsw() << " " << i->GetSex() << " "<< i->GetState() << " " << i->GetNumber() << endl;
    }
    fout.close();
    return 1;
}
bool File::LoadAdmin(vector<Ladmin> &ladmins) {
    string id;
    string name;
    string psw;
    int sex;
    ifstream fin;
    fin.open("D:/qt/librarysystem-master/demo/ladmin.data",ios::binary);
    while(fin >> id >> name >> psw >> sex) {
        ladmins.push_back( Ladmin(id,name,psw,sex) );
    }
    fin.close();
    return 1;
}
bool File::FlushAdmin(vector<Ladmin> &ladmins) {
    ofstream fout;
        fout.open("D:/qt/librarysystem-master/demo/ladmin.data",ios::binary);
    for(auto i = ladmins.begin(); i!=ladmins.end(); i++) {
        fout << i->GetID() << " " << i->GetName() << " " << i->GetPsw() << " " << i->GetSex() << endl;
    }
    fout.close();
    return 1;
}
//
// Created by yl on 2021/5/7.
//

