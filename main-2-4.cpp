#include<iostream>
extern int sum_min_max(int integers[],int length);
int main()
{
    int integers[5]={1,5,3,7,1};
    int length=5;
    std::cout<<sum_min_max(integers,length);
    return 0;
}

