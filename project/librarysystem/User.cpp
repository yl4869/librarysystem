#include "User.h"
#include <string>
using namespace std;
User::User(string id, string name, string psw,int sex)
{
    m_id = id;
    m_name = name;
    m_psw = psw;
    m_sex = sex;
}
User::User(){}
User::~User(){}
string User::GetID() { return m_id; }
string User::GetName() { return m_name; }
string User::GetPsw() { return m_psw; }
int User::GetSex() { return m_sex; }
void User::SetPsw(string psw) { m_psw = psw; }
void User::SetName(string name) { m_name = name; }
void User::SetSex(int sex) { m_sex = sex; }

//
// Created by yl on 2021/5/11.
//
