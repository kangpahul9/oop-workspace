int min_element(int array[], int n)
{
    if (n<1) {
        return 0;
    }
    else
    {
        int min=0;
        for (int i=0; i<n; i++) {
            if (min>array[i]) {
                min=array[i];
            }
        }
        return min;
    }
}
