#include<cmath>
int binary_to_int(int binarydigits[],int number_of_digits)
{
    int no=0;int temp=number_of_digits;
    for (int i=0; i<number_of_digits; i++) {
        temp--;
        no+=binarydigits[temp]*std::pow(2,i);
    }
    return no;
}
