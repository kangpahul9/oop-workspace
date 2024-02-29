#include<iostream>
extern int min_element(int array[], int n);
int main()
{
    int array[5]={0,55,-6,1,8};
    int n=5;
    std::cout<<"The minimum number "<<min_element(array,n);
    return 0;
}
