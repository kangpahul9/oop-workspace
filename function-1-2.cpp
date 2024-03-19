#include"Person.h"
PersonList createPersonList(int n)
{
    PersonList p;
    p.numPeople=n;
    p.people = new Person[n];
    for (int i=0; i<n; i++) {
        p.people[i].name="Jane Doe";
        p.people[i].age=1;
    }
    return p;
}
