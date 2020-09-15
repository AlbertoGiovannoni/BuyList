//
// Created by alberto on 15/09/20.
//

#ifndef UNTITLED_BUYLIST_H
#define UNTITLED_BUYLIST_H

#include <iostream>
#include "Product.h"
#include <map>
using namespace std;
class BuyList {
public:
    BuyList() = default;
    explicit BuyList(map<string, Product*> L) : list(L) {};
    void add(Product& P);
    void remove(string& n);
    void modify (string& pr, string ty, int n, bool a);



private:
    map<string, Product*> list;
    int total = 0;
};


#endif //UNTITLED_BUYLIST_H
