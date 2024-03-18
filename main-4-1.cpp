#include<iostream>
extern int *readNumbers();
extern int secondSmallestSum(int *numbers,int length);
int main()
{
    int length=4;
    int *numbers = readNumbers();
    std::cout<<secondSmallestSum(numbers,length);
    return 0;
}

