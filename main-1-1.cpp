#include<iostream>
#include"Person.h"
extern Person* createPersonArray(int n);
int main()
{
    int n=10;
    Person * a=createPersonArray(n);
    for(int i=0;i<n;i++)
    {
        std::cout<<a[i].name;
        std::cout<<a[i].age;
    }
}

