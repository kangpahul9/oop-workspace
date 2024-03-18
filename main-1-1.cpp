#include<iostream>
int *readNumbers();
void printNumbers(int *numbers,int length);
int main()
{
    int length=10;
    int *numbers = readNumbers();
    printNumbers(numbers,length);
    return 0;
}
