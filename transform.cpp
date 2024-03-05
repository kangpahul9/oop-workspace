#include<iostream>
int main()
{
    int n=75;int i=0;int arr[n];
    while (n!=0) {
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    for (int j=i-1; j>=0; j--) {
        std::cout<<arr[j];
    }
    return 0;
}
