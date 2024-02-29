
#include<iostream>
extern double array_mean(int array[], int n);
int main()
{
    int n=5;
    int array[5]={4,5,9,7,8};
    std::cout<<"The average of array "<<array_mean(array,n);
    return 0;
}
