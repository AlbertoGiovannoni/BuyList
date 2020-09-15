//
// Created by alberto on 15/09/20.
//

#ifndef UNTITLED_USER_H
#define UNTITLED_USER_H
#include "BuyList.h"
#include <iostream>
#include <list>

using namespace std;
class User {
public:
    User() = default;
    explicit User(list<BuyList*> l) : lists(l){};

    void addList(BuyList* B);

    void removeList(BuyList* B);

    void printTotal(BuyList* B);


private:
    list<BuyList*> lists;
};

#endif //UNTITLED_USER_H
