#include<iostream>
extern double sum_even(double array[], int n);
int main()
{
    int n=5;
    double array[]={1,2,3,4,5};
    std::cout<<"The sum is "<<sum_even(array,n);
    return 0;
}
