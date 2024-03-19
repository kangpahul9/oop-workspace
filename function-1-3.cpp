#include"Person.h"
PersonList deepCopyPersonList(PersonList pl)
{
    PersonList p;
    p.numPeople=pl.numPeople;
    p.people = new Person[p.numPeople];
    for (int i=0; i<p.numPeople; i++) {
        p.people[i].name=pl.people[i].name;
        p.people[i].age=pl.people[i].age;
    }
    return p;
}
