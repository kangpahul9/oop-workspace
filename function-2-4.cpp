int array_min(int integers[],int length);
int array_max(int integers[],int length);
int sum_min_max(int integers[],int length)
{
    if (length<1) {
        return -1;
    }
    int sum=array_min(integers,length)+array_max(integers,length);
    return sum;
};
int array_min(int integers[],int length)
{
    if (length<1) {
        return -1;
    }
    int min=999999999;
            for (int i=0; i<length; i++) {
                if (min>=integers[i]) {
                    min=integers[i];
                }
            }
            return min;
};
int array_max(int integers[],int length)
{
    if (length<1) {
        return -1;
    }
    int max=0;
        for (int j=0; j<length; j++) {
            if (max<=integers[j]) {
                max=integers[j];
            }
        }
    return max;
}
