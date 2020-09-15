//
// Created by alberto on 15/09/20.
//

#include "BuyList.h"


void BuyList::add(Product *P) {
    bool inList = false;
    for(auto &it : List){
        if(P->getName() == it->getName()){
            cout<<"Già presente nella lista"<<endl;
            inList=true;
        }
    }
    if (!inList){
        List.push_back(P);
        total += P->getQty();
    }

}

void BuyList::remove(Product* p) {
    total -= p->getQty();
    List.remove(p);
}

void BuyList::modify(string N, string ty, int q, bool a) {
    for (auto it : List) {
        if (it->getName() == N) {
            if (a) {
                total -= it->getQty();
            } else if (q != it->getQty()) {
                total -= it->getQty();
                total += q;
            }
            it->setType(ty);
            it->setQty(q);
            it->setAcquired(a);
        }
    }
}




