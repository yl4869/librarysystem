#ifndef LIBRARYSYSTEM_FILE_H
#define LIBRARYSYSTEM_FILE_H
#include "Reader.h"
#include <vector>
#include "Ladmin.h"
using namespace std;
class File
{
public:
    static bool LoadRecord(Reader &r,vector<Bookrecord> &record);
    static bool FlushRecord(Reader &r,vector<Bookrecord> &record);
    static bool LoadReader(vector<Reader> &readers);
    static bool FlushReader(vector<Reader> &readers);
    static bool LoadAdmin(vector<Ladmin> &ladmins);
    static bool FlushAdmin(vector<Ladmin> &ladmins);
    static bool LoadBook(vector<Book> &books);
    static bool FlushBook(vector<Book> &books);
    static void Init();
};
//
// Created by yl on 2021/5/7.
//


#endif //LIBRARYSYSTEM_FILE_H
