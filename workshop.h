void changeValue(double * ptr)
{
   *ptr=42;
};
void printArray(double*ptr1,int size)
{
    for (int i=0; i<size; i++)
    {
        std::cout<<ptr1[i]<<" ";
        
    }
    std::cout<<std::endl;
};
double arrayMax(double*ptr2, int &size)
{
    double max=0;
    for (int i=0; i<size-1; i++) {
        if (ptr2[i]>=ptr2[i+1]) {
            max=ptr2[i];
        }
    }
    return max;
}
double* dynamicArray(int N,double M)
{
    double* arr=new double[N];
    for (int i=0; i<N; i++)
    {
        arr[i]=M;
        
    }
    for (int i=0; i<N; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<'\n'<<arrayMax(arr,N)<<'\n';
    delete[] arr;
    return 0;
};
