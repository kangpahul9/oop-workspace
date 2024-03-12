#include<iostream>
#include"workshop.h"
int main()
{
    double a=50;
    double * ptr=&a;

    changeValue(ptr);
    double array[4]={1,5,9,4};
    int size=4;
    printArray(array,size);
    std::cout<<arrayMax(array,size);
    std::cout<<std::endl;
    int N=5;double M=5;
    double * arr=dynamicArray(N,M);
    
}
