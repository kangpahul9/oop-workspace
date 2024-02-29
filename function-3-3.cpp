double weighted_average(int array[], int n)
{
    double sum=0;
    int one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,zero=0;
    for (int i=0; i<n; i++) {
        switch (array[i]) {
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            case 4:
                four++;
                break;
            case 5:
                five++;
                break;
            case 6:
                six++;
                break;
            case 7:
                seven++;
                break;
            case 8:
                eight++;
                break;
            case 9:
                nine++;
                break;
            case 0:
                zero++;
        }
    }
    for (int i=0; i<n; i++) {
        switch (array[i]) {
            case 1:
                sum+=array[i]*one/(double)n;
                break;
            case 2:
                sum+=array[i]*two/(double)n;
                break;
            case 3:
                sum+=array[i]*three/(double)n;
                break;
            case 4:
                sum+=array[i]*four/(double)n;
                break;
            case 5:
                sum+=array[i]*five/(double)n;
                break;
            case 6:
                sum+=array[i]*six/(double)n;
                break;
            case 7:
                sum+=array[i]*seven/(double)n;
                break;
            case 8:
                sum+=array[i]*eight/(double)n;
                break;
            case 9:
                sum+=array[i]*nine/(double)n;
                break;
            case 0:
            sum+=array[i]*zero/(double)n;
        }
    }
    return sum;
}
