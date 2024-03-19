#include<iostream>
#include"Person.h"
extern PersonList createPersonList(int n);
int main()
{
    int n=10;
    PersonList a=createPersonList(n);
    for(int i=0;i<n;i++)
    {
        std::cout<<a.people[i].name;
        std::cout<<a.people[i].age;
    }
}


