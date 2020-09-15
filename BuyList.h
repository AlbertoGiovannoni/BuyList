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
    BuyList() : total(0){};
    explicit BuyList(map<string, Product*> L) : list(L), total(0){};
    void add(Product& P);
    void remove(string& n);
    void modify (string& pr, string ty, int n, bool a);

    int getTotal() const {
        return total;
    }

    const map<string, Product *> &getList() const {
        return list;
    }

private:
    map<string, Product*> list;
    int total;
};


#endif //UNTITLED_BUYLIST_H
