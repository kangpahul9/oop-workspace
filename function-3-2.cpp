#include<iostream>
int median_array(int array[], int n)
{
    if (n<1 || n%2==0) {
        return 0;
    }
    else
    {
        int median=0;
        int temp=0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (array[j]>array[j+1]) {
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
            }
        }
        temp=(n+1)/2;
        median=array[temp];
        return median;
    }
}
