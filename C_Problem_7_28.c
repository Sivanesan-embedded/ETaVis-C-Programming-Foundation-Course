#include <stdio.h>
void disp_LCM2(void);
int main()
{
    disp_LCM2();
}

void disp_LCM2(void)
{
    int x,y,w1=0,division=2,multiplication=1;
    
    printf("Enter the value of x: ");
    scanf("%d",&x);
    
    printf("Enter the value of y: ");
    scanf("%d",&y);
    
    while (1)
    {
        w1 = 0;
        if (!(x % division) && !(y % division))
        {
            x /= division;
            y /= division;
            multiplication *= division;
            w1 = 1;
        }
        if (!(x % division))
        {
            x /= division;
            multiplication *= division;
            w1 = 1;
        }
        if (!(y % division))
        {
            y /= division;
            multiplication *= division;
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