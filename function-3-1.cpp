#include<iostream>
bool is_fanarray(int array[], int n)
{
    bool ans=false;
    if (n<1) {
        return false;
    }
    else if (n%2==0)
    {
        for (int i=0; i<n/2; i++) 
        {
            
            if (array[i]==array[(n-1)-i])
            {
                ans=true;
            }
            else{
                return false;
            }
        }
    }
    else
    {
        for (int i=0; i<(n-1)/2; i++)
        {
            if (array[i]==array[(n-1)-i])
            {
                if (array[i]==array[(n-1)/2])
                {
                    return false;
                }
                else
                {
                    ans=true;
                }
            }
            else
            {
                return false;
            }
        }
    }
        return ans;
}
