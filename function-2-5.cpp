bool is_descending(int array[], int n)
{
    if (n<1) {
        return false;
    }
    else {
        bool a=false;int i=0;
        for (int i=0; i<n-1; i++) {
            if(array[i]>array[i+1]){
                a=true;
                }
            else{
                return false;
            }
        }
        return a;
        }
}
