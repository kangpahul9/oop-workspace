#include<iostream>
extern int num_count(int array[], int n, int number);
int main()
{
    int n=5;
    int array[5]={4,5,9,7,8};
    int number=0;
    std::cout<<"The number counts "<<num_count(array,n,number);
    return 0;
}
