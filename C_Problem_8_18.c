#include <stdio.h>

int disp_LCM2(int,int);

int main()
{
    int x,y;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    printf("%d\n",disp_LCM2(x,y));
    return 0;
}

int disp_LCM2(int x,int y)
{
    int w = 0,division = 2,multiplication = 1;
    while (1)
    {
        w = 0;
        if (!(x % division) && !(y%division))
        {
            x /= division;
            y /= division;
            multiplication *= division;
            w = 1;
        }
        else if (!(x % division))
        {
            x /= division;
            multiplication *= division;
            w  = 1;
        }
        else if(!(y % division))
        {
            y /= division;
            multiplication *= division;
            w = 1;
        }
        if (!(w))
        {
            division++;
        }
        if (x == 1 && y == 1)
        {
            break;
        }
    }
    return multiplication;
}