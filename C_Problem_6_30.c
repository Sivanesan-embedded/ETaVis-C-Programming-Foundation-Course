#include <stdio.h>
int main()
{
    int x,y,division = 2,min,w1=0,multiplication = 1;
    
    printf("Enter the value of X: ");
    scanf("%d",&x);
    
    printf("Enter the value of Y: ");
    scanf("%d",&y);
    
    if (x < y) min = x;
    else min = y;
    
    while (division <= min)
    {
        w1 = 0;
        if (!(x % division) && !(y % division))
        {
            x /= division;
            y /= division;
            w1 = 1;
            multiplication *= division;
        }
        if (!(w1))
        {
            division++;
        }
    }
    printf("%d\n",multiplication);
}