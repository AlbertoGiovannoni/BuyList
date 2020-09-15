#include <iostream>
#include "User.h"

using namespace std;
int main() {
    User person;

    map<string, Product*> list1;
    map<string, Product*> list2;

    Product prod1("banane", "frutta", 7);
    Product prod2("pomodori", "verdura", 3);

    Product prod3("pollo", "carne", 5);
    Product prod4("insalata", "vardura", 2);


    BuyList myList1;
    BuyList myList2;

    myList1.add(prod1);
    myList1.add(prod2);

    myList2.add(prod3);
    myList2.add(prod3);


    person.addList(&myList1);
    person.addList(&myList2);

    person.printTotal(&myList1);


    myList1.modify("pomodori", "frutta", 4,false);
    person.printTotal(&myList1);

}
