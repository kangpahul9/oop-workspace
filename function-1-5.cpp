#include<iostream>
void print_summed(int array1[3][3],int array2[3][3])
{
    int sum[3][3];
    for (int k=0; k<3; k++) {
        for (int l=0; l<3; l++) {
            sum[k][l]=array1[k][l]+array2[k][l];
        }
    }
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            std::cout<<sum[i][j]<<" ";
        }
        std::cout<<'\n';
    }
}

