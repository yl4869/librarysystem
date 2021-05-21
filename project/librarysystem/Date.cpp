#include "Date.h"
using namespace std;
Date::Date(){}
Date::~Date(){}
Date::Date(int year,int month,int day)
{
    m_year = year;
    m_month = month;
    m_day = day;
}
Date::Date(const Date& t)
{
    m_year = t.m_year;
    m_month = t.m_month;
    m_day = t.m_day;
}
bool Date::operator>(const Date& d)
{
    if(m_year > d.m_year) return true;
    else if(m_year == d.m_year && m_month>d.m_month) return true;
    else if(m_year == d.m_year && m_month == d.m_month && m_day > d.m_day) return true;
    else return false;
}
bool Date::Isleapyear(int year)
{
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) return true;
    else return false;
}
int Date::Getday(int year,int month)
{
    const int monthArray[13] =  {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int day = monthArray[month];
    if(month == 2 && Isleapyear(year))
    {
        day++;
    }
    return day;
}
Date Date::operator+(int aday)
{
    int year = m_year;
    int month = m_month;
    int day = m_day+aday;
    while( day > Getday(year,month))
    {
        day-=Getday(year,month);
        month++;
        if (month>12)
        {
            year++;
            month = 1;
        }
    }
    return Date(year,month,day);
}
int Date::Ryear() { return m_year; }
int Date::Rmonth() { return m_month; }
int Date::Rday() { return m_day; }
int Date::operator-(const Date& d)
{
    int year = m_year;
    int month = m_month;
    int day = m_day;
    int sum = 0;
    int f1 = 0;
    int f2 = 0;
    for(int i=year;i>d.m_year;i--) {
        if(Isleapyear(i)) sum+=366;
        else sum+=365;
    }
    for(int i=1;i<=month;i++)
    {
        f1+=Getday(year,i);
    }
    for(int i=1;i<=d.m_month;i++)
    {
        f1+=Getday(d.m_year,i);
    }
    sum = sum+f1-f2;
    return sum;
}//
// Created by yl on 2021/5/7.
//

