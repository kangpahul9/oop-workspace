void changeValue(double * ptr)
{
   *ptr=42;
};
void printArray(double*ptr1,int size)
{
    for (int i=0; i<size; i++)
    {
        std::cout<<*(ptr1+i)<<" ";
        
    }
    std::cout<<std::endl;
};
double arrayMax(double*p, int &size)
{
    double max=0;
    for (int i=0; i<size-1; i++) {
        if (p[i]>=p[i+1]) {
            max=p[i];
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
    return arr;
};
