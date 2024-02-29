#include<iostream>
extern int max_element(int array[], int n);
int main()
{
    int array[5]={1,55,6,1,4};
    int n=5;
    std::cout<<"The max number "<<max_element(array,n);
    return 0;
}

