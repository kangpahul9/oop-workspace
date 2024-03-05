#include<iostream>
#include<cmath>
void addition(int ar[], int arr[],int size,int s,int S);
void subtraction(int ar[], int arr[],int size,int s,int S);
int main()
{
    int ar[]={1,1,1,0,1,1,1,0,1,0,1,1};
    int arr[]={1,1};
    int s=sizeof(ar)/sizeof(ar[0]);
    int S=sizeof(arr)/sizeof(arr[0]);
    int size=0;
    if (s>S) {
        size=s;
    }
    else {
        size=S;
    }
    addition(ar,arr,size,s,S);
    std::cout<<'\n';
    subtraction(ar,arr,size,s,S);
    return 0;
}
void addition(int ar[], int arr[],int size,int s,int S)
{
    int temp1=s;
    int temp2=S;
        int sumar[size];
        int no1=0;int no2=0;
    for (int i=0; i<size; i++) {
        temp1--;temp2--;
        if(temp1>=0)no1+=ar[temp1]*std::pow(2,i);
        if(temp2>=0)no2+=arr[temp2]*std::pow(2,i);
    }
    int sum=no1+no2;
    for (int k=0;k<size;k++){
        sumar[k]=sum%2;
        sum=sum/2;
    }
    for (int j=size-1; j>=0; j--) {
        std::cout<<sumar[j];
    }
};
void subtraction(int ar[], int arr[],int size,int s,int S)
{
    int temp1=s;
    int temp2=S;int sum;
        int sumar[size];
        int no1=0;int no2=0;
    for (int i=0; i<size; i++) {
        temp1--;temp2--;
        if(temp1>=0)no1+=ar[temp1]*std::pow(2,i);
        if(temp2>=0)no2+=arr[temp2]*std::pow(2,i);
    }
    if (no1>no2) {
        sum=no1-no2;
    }
    else {
        sum=no2-no1;
    }
    for (int k=0;k<size;k++){
        sumar[k]=sum%2;
        sum=sum/2;
    }
    for (int j=size-1; j>=0; j--) {
        std::cout<<sumar[j];
    }
};


