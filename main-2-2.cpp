#include<iostream>
extern int binary_to_int(int binarydigits[],int number_of_digits);
int main()
{
    
    int binarydigits[]={1,1,1,0,1,1,1,0,1,0,1,1};
    int number_of_digits=12;
    std::cout<<binary_to_int(binarydigits,number_of_digits);
    return 0;
}
