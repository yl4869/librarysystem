#ifndef LIBRARYSYSTEM_USER_H
#define LIBRARYSYSTEM_USER_H
#include <string>
using namespace std;
class User
{
private:
    string m_id;
    string m_name;
    string m_psw;
    int m_sex;
public:
    User();
    User(string id,string name,string psw,int sex);
    ~User();
    string GetID();
    string GetName();
    string GetPsw();
    void SetPsw(string psw);
    void SetName(string name);
    void SetSex(int sex);
    int GetSex();
};
//
// Created by yl on 2021/5/11.
//

#endif //LIBRARYSYSTEM_USER_H
