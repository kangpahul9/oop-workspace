#include<iostream>
extern int sum_two_arrays(int array[], int secondarray[], int n);
int main()
{
    int array[5]={1,2,3,4,5};
    int secondarray[5]={6,7,8,9,10};
    int n=5;
    std::cout<<"The sum of both arrays = "<<sum_two_arrays(array,secondarray,n);
    return 0;
}
