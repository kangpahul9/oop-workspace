#include<iostream>
extern double* duplicateArray(double* array, int size);
int main()
{
    double array[10]={1.5,2,4,66,999,9,9.99,7,66};
    int size=10;
    double * ar=duplicateArray(array,size);
    for (int i=0; i<size; i++) {
        std::cout<<ar[i];
    }
    delete[] ar;
}

