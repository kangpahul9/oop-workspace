#include<iostream>
int *readNumbers()
{
    int * numbers=new int[10];
    for(int i=0;i<4;i++)
    {
        std::cin>>numbers[i];
    }
    return numbers;
};
int secondSmallestSum(int *numbers,int length)
{
    int secondsum=99999;int isec=99999;
    for (int i=0; i<length; i++) {
        int sum=0;
        for (int j=i; j<length; j++) {
            sum+=numbers[j];
            if (sum<isec) {
                secondsum=isec;
                isec=sum;}
          else if (sum<secondsum && sum!=isec) {
                    secondsum=sum;
           }
        }
    }
    return secondsum;
}
