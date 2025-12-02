#include <stdio.h>

long int disp_count_HCF2(int,int);

int main()
{
    int x,y;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    
    printf("%ld\n",disp_count_HCF2(x,y));
    return 0;
}

long int disp_count_HCF2(int x,int y)
{
    int min;
    if (x < y) min = x;
    else min = y;
    long int w = 0,division = 2,multiplication = 1;
    while (min!=division)
    {
        w = 0;
        if (!(x % division) && !(y%division))
        {
            x /= division;
            y /= division;
            multiplication *= division;
            w = 1;
        }
        if (!(w))
        {
            division++;
        }
    }
    return multiplication;
}