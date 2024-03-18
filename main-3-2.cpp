#include<iostream>
extern int *readNumbers();
extern int *reverseArray(int *numbers1,int length) ;
extern bool equalsArray(int *numbers1,int *numbers2,int length) ;
int main()
{
    int length=10;
    int *numbers1 = readNumbers();
    int *numbers2=reverseArray(numbers1,length);
    std::cout<<equalsArray(numbers1,numbers2,length);
    delete[] numbers1;
    delete[] numbers2;
    return 0;
}


