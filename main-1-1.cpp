#include<iostream>
extern double arrayMin(double* array, int size);
int main()
{
    double array[10]={1.5,2,4,66,999,9,9.99,7,66};
    int size=10;
    std::cout<<arrayMin(array,size);
}
