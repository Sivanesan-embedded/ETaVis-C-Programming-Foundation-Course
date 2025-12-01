#include <stdio.h>
int main()
{
    int x,y,division=2,e1=0,e2=0,mul=1;
    
    printf("Enter the value of x: ");
    scanf("%d",&x);
    
    printf("Enter the value of y: ");
    scanf("%d",&y);
    
    for (;;)
    {
        e1 = 0;
        e2 = 0;
        
        if (!(x % division) && !(y % division))
        {
            mul *= division;
            x /= division;
            y /= division;
            e1 = 1;
            e2 = 1;
            goto down;
        }
        if (!(x % division))
        {
            x /= division;
            e1 = 1;
            mul *= division;
        }
        if (!(y % division) && (y!=1))
        {
            e2 = 1;
            y /= division;
            mul *= division;
        }
down:   if ((!e1) && (!e2))
        {
            division++;
        }
        if (x == 1 && y == 1)
        {
            break;
        }
    }
    printf("LCM: %d\n",mul);
}