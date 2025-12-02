#include <stdio.h>
int main()
{
    int x,y,division = 2,multiplication=1,w1=0,w2=0;
    
    printf("Enter the value of x: ");
    scanf("%d",&x);
    
    printf("Enter the value of y: ");
    scanf("%d",&y);
    
    while (1)
    {
        w1 = 0;
        if (!(x % division) && !(y%division))
        {
            multiplication *= division;
            x /= division;
            y/= division;
            w1 = 1;
        }
        if (!(x % division))
        {
            multiplication *= division;
            x/=division;
            w1 = 1;
        }
        if (!(y % division))
        {
            multiplication *= division;
            y /= division;
            w1 = 1;
        }
        if (!(w1))
        {
            division++;
        }
        if (x == 1 && y == 1)
        {
            break;
        }
    }
    printf("%d\n",multiplication);
}