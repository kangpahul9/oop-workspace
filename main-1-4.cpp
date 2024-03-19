
#include<iostream>
#include"Person.h"
extern PersonList shallowCopyPersonList(PersonList pl);
int main()
{
    PersonList pl;
    pl.numPeople=4;
    pl.people=new Person[pl.numPeople];
    for (int i=0; i<pl.numPeople; i++) {
        pl.people[i].name="John";
        pl.people[i].age=18;
    }
    PersonList a=shallowCopyPersonList(pl);
    for(int i=0;i<a.numPeople;i++)
    {
        std::cout<<a.people[i].name;
        std::cout<<a.people[i].age;
    }
}



