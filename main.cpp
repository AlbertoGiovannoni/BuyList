#include <iostream>
#include "User.h"

using namespace std;
int main() {
    User person;

    Product prod1("banane", "frutta", 7);
    Product prod2("pomodori", "verdura", 3);
    Product prod3("pollo", "carne", 5);
    Product prod4("insalata", "vardura", 2);


    BuyList myListA;
    BuyList myListB;

    myListA.add(&prod1);
    myListA.add(&prod2);

    myListB.add(&prod3);
    myListB.add(&prod3);


    person.addList(&myListA);
    person.addList(&myListB);

    person.printTotal(&myListA);



    myListA.modify("pomodori", "frutta", 6,false);
    person.printTotal(&myListA);

}
