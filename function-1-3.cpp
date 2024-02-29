int num_count(int array[], int n, int number)
{
    if (n<1) {
        return 0;
    }
    else{
        for (int i=0; i<n; i++){
            number++;
        }
        return number;
    }
}
