#include<iostream>
extern int count_evens(int number);
int main()
{
    int number=10;
    std::cout<<"The number of even numbers between 1 and "<<number<<"are "<<count_evens(number);
    return 0;
}
