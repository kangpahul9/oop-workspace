int num_count(int array[], int n, int number)
{
    if (n<1) {
        return 0;
    }
    else{
        int count=0;
        for (int i=0; i<n; i++){
            if (number==array[i]) {
                count++
            }
        }
        return count++;
    }
}
