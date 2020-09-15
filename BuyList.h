//
// Created by alberto on 15/09/20.
//


#ifndef UNTITLED_BUYLIST_H
#define UNTITLED_BUYLIST_H

#include <iostream>
#include "Product.h"
#include <list>

using namespace std;
class BuyList {

public:
    BuyList() : total(0) {};

    void add(Product *P);

    void remove(Product *p);

    void modify(string pr, string ty, int n, bool a);

    int getTotal() const {
        return total;
    }




private:
    list<Product*> List;
    int total;

};


#endif //UNTITLED_BUYLIST_H
