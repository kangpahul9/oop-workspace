#include<iostream>
int *readNumbers()
{
    int * numbers=new int[10];
    for(int i=0;i<10;i++)
    {
        std::cin>>numbers[i];
    }
    return numbers;
};
bool equalsArray(int *numbers1,int *numbers2,int length)
{
    bool result=false;
    for (int i=0; i<length; i++) {
        if (numbers1[i]==numbers2[i]) {
            result=true;
        }
        else {
            return false;
        }
    }
    return result;
}
