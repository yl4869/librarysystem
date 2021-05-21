#ifndef LIBRARYSYSTEM_DATE_H
#define LIBRARYSYSTEM_DATE_H
#include<iostream>
using namespace std;
class Date
{
private:
    int m_year;
    int m_month;
    int m_day;;
public:
    Date();
    Date(int,int,int);
    Date(const Date& t);
    ~Date();
    bool Isleapyear(int year);
    bool operator>(const Date& d);
    int Getday(int year,int month);
    Date operator+(int day);
    int operator-(const Date& d);
    int Ryear();
    int Rmonth();
    int Rday();
};
//
// Created by yl on 2021/5/7.
//

#endif //LIBRARYSYSTEM_DATE_H
