//
// Created by alberto on 15/09/20.
//

#ifndef UNTITLED_PRODUCT_H
#define UNTITLED_PRODUCT_H
#include <iostream>

using namespace std;
class Product {
public:
    Product(string N, string T, int Q, bool A = false) : name(N), type(T), qty(Q), acquired(A) {};

private:
    string name;
    string type;
    int qty;
    bool acquired;
public:
    const string &getName() const {
        return name;
    }

    const string &getType() const {
        return type;
    }


    void setType(const string &type) {
        Product::type = type;
    }

    void setQty(int qty) {
        Product::qty = qty;
    }

    void setAcquired(bool acquired) {
        Product::acquired = acquired;
    }

    int getQty() const {
        return qty;
    }

    bool isAcquired() const {
        return acquired;
    }
};


#endif //UNTITLED_PRODUCT_H
