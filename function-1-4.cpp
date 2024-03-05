#include<iostream>
void print_scaled(int array[3][3],int scale)
{
    for (int i=0; i<scale; i++) {
        for (int j=0; j<scale; j++) {
            std::cout<<array[j][i]<<" ";
        }
        std::cout<<'\n';
    }
}
