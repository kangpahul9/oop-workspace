double* duplicateArray(double* array, int size)
{
    double * arr=new double[size];
    for (int i=0; i<size; i++) {
        arr[i]=array[i];
    }
    return arr;
}
