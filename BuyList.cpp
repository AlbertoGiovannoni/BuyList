//
// Created by alberto on 15/09/20.
//

#include "BuyList.h"

void BuyList::add(Product &P) {
    bool inList = false;
    for(auto &it : list){
        if(it.first == P.getName()){
            cout<<"Già presente nella lista"<<endl;
            inList=true;
        }
    }
    if (!inList){
        list.insert(make_pair(P.getName(),&P));
        total += P.getQty();
    }

}

void BuyList::remove(string& n) {
    auto it = list.find(n);
    if (it != list.end()){
        total -= it->second->getQty();
        list.erase(it);
    }
    else {
        cout<< "Elemento non trovato " << endl;
    }
}

void BuyList::modify(string &pr, string ty, int q, bool a) {
    auto it = list.find(pr);
    if (it != list.end()) {
        if(a){
            total -= it->second->getQty();
            total += q;
        }
        it->second->setType(ty);
        it->second->setQty(q);
        it->second->setAcquired(a);
    }
}



