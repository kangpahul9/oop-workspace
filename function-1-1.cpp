#include"Person.h"
Person* createPersonArray(int n)
{
    Person *p=new Person[n];
    for (int i=0; i<n; i++) {
        p[i].name="John Doe";
        p[i].age=0;
    }
    return p;
}
