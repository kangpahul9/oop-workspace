#include<iostream>
#include<iomanip>
extern double weighted_average(int array[], int n);
int main()
{
    int array[6]={1,2,1,4,1,3};
    int n=6;
    std::cout<<"The ans is "<<std::setprecision(1)<<std::fixed<<weighted_average(array,n);
    return 0;
}


