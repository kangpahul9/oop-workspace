bool is_palindrome(int integers[],int length);
int sum_array_elements(int integers[],int length);
int sum_if_palindrome(int integers[],int length)
{
    if (length<1) {
        return -1;
    }
    if(is_palindrome(integers,length)==1)
    {
        return sum_array_elements(integers,length);
    }
    return -2;
};

bool is_palindrome(int integers[],int length)
{
    if (length<1) {
        return false;
    }
    bool ans=false;
        if (length<1) {
            return false;
        }
        else if (length%2==0)
        {
            for (int i=0; i<length/2; i++)
            {
                
                if (integers[i]==integers[(length-1)-i])
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
            for (int i=0; i<(length-1)/2; i++)
            {
                if (integers[i]==integers[(length-1)-i])
                {
                    if (integers[i]==integers[(length-1)/2])
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

int sum_array_elements(int integers[],int length)
{
    if (length<1) {
        return -1;
    }
    int sum=0;
            for (int i=0; i<length; i++)
            {
                sum+=integers[i];
            }
            return sum;
};
