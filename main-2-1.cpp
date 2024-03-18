#include<iostream>
extern int *readNumbers();
extern void hexDigits(int *numbers,int length);
int main()
{
    int length=10;
    int *numbers = readNumbers();
    hexDigits(numbers,length);
    return 0;
}

