#ifndef LIBRARYSYSTEM_LADMIN_H
#define LIBRARYSYSTEM_LADMIN_H

#include "User.h"
class Ladmin : public User {
public:
    void ShowMenu();
    Ladmin();
    Ladmin(string id,string name,string psw,int sex);
    ~Ladmin();
    void GetUsers();
    static void GetBooks();
};
//
// Created by yl on 2021/5/15.


#endif //LIBRARYSYSTEM_LADMIN_H
