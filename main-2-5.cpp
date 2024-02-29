#include<iostream>
extern bool is_descending(int array[], int n);
int main()
{
    int array[5]={10,9,8,7,6};
    int n=5;
    std::cout<<"The array is "<<is_descending(array,n);
    return 0;
}



