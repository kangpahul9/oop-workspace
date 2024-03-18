#include<iostream>
int *readNumbers()
{
    int * numbers=new int[10];
    for(int i=0;i<10;i++)
    {
        std::cin>>numbers[i];
    }
    return numbers;
};
void hexDigits(int *numbers,int length)
{
    for (int i=0; i<length; i++) {
        switch (numbers[i]) {
            case 10:
                std::cout<<i<<" "<<numbers[i]<<" A\n";
                break;
            case 11:
                std::cout<<i<<" "<<numbers[i]<<" B\n";
                break;
            case 12:
                std::cout<<i<<" "<<numbers[i]<<" C\n";
                break;
            case 13:
                std::cout<<i<<" "<<numbers[i]<<" D\n";
                break;
            case 14:
                std::cout<<i<<" "<<numbers[i]<<" E\n";
                break;
            case 15:
                std::cout<<i<<" "<<numbers[i]<<" F\n";
                break;
            default:
                std::cout<<i<<" "<<numbers[i]<<" "<<numbers[i]<<'\n';
        }
    }
}
