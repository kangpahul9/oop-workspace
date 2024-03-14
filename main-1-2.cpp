#include<iostream>
extern void modifyArray(double* array, int size, double value);
int main()
{
    double a[10]={1.5,2,4,66,999,9,9.99,7,66};
    int size=10;
    double value=2.5;
    modifyArray(a,size,value);
    for (int j=0; j<size; j++) {
        std::cout<<a[j]<<" ";
    }
}

