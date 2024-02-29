#include<iostream>
extern int median_array(int array[], int n);
int main()
{
    int array[5]={9,4,3,2,1};
    int n=5;
    std::cout<<"The median is "<<median_array(array,n);
    return 0;
}

