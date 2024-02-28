double array_mean(int array[], int n)
{
    if (n<1) {
        return 0;
    }
    else
    {
        double average=0.0;
        int sum=0;
        for (int i=0; i<n; i++) {
            sum+=array[i];
        }
        average=sum/(double)n;
        return average;
    }
}
