#include<iostream>
void print_scaled(int array[3][3],int scale)
{
    int temp;
    for (int i=0; i<scale; i++) {
        for (int j=i+1; j<scale; j++) {
            temp=array[i][j];
            array[i][j]=array[j][i];
            array[j][i]=temp;
        }
    }
    for (int i=0; i<scale; i++) {
        for (int j=0; j<scale; j++) {
            std::cout<<array[i][j]<<" ";
        }
        std::cout<<'\n';
    }
}
