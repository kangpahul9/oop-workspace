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
int secondSmallestSum(int *numbers,int length)
{
    int sum=99999999;
    int secondsum=99999999;int temp=0;
    for (int i=0; i<length; i++) {
            if (secondsum>numbers[i]) {
                secondsum=numbers[i];
                if (sum>secondsum) {
                    temp=sum;
                    sum=secondsum;
                    secondsum=temp;
                }
        }
    }
    return secondsum;
}
