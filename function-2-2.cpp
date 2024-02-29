int max_element(int array[], int n)
{
    if (n<1) {
        return 0;
    }
    else
    {
        int max=0;
            for (int j=0; j<n; j++) {
                if (max<array[j]) {
                    max=array[j];
                }
            }
        return max;
    }
}
