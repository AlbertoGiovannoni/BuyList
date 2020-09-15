//
// Created by alberto on 15/09/20.
//

#include "User.h"

void User::addList(BuyList *B)  {
    lists.push_back(B);
}

void User::removeList(BuyList *B) {
    lists.remove(B);
}

void User::printTotal(BuyList *B) {

    cout<< "Articoli da comprare: " << B->getTotal() <<endl;

}


