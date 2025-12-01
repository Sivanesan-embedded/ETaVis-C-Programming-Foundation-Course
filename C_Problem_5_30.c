#include <stdio.h>
int main()
{
    int x,y,division=2,multiplication = 1,min = 0;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);
    
    if (x < y) min = x;
    else min = y;
    
    for (;;)
    {
        if (!(x % division) && !(y % division))
        {
            multiplication *= division;
            x /= division;
            y /= division;
        }
        else
        {
            division++;
        }
        if (division > min)
        {
            break;
        }
    }
    printf("%d\n",multiplication);
}