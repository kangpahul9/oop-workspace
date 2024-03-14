double arrayMin(double* array, int size)
{
    double temp=999999999999999.9;
    for (int i=0; i<size-1; i++) {
        if (array[i]<temp && array[i]<array[i+1]) {
            temp=array[i];
        }
    }
    return temp;
}
