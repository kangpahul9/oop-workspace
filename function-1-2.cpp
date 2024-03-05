int is_identity(int array[10][10])
{
    int temp=0;
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            if (i==j) {
                if (array[i][j]==1) {
                    temp=1;
                }
                else {
                    return 0;
                }
            }
                else if(array[i][j]==0)
                    {
                        temp=1;
                    }
                    else{
                        return 0;
                    }
            }
        }
    return temp;
    }
