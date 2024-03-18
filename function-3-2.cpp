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
int *reverseArray(int *numbers1,int length)
{
    int * temp=new int[length];int t=length;
    for (int i=0; i<length; i++) {
        t--;
        temp[t]=numbers1[i];
    }
    for (int j=0; j<length; j++) {
        std::cout<<temp[j]<<'\n';
    }
    return temp;
}
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

