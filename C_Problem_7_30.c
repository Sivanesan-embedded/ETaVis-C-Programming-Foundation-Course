#include <stdio.h>
void disp_count_HCF2(void);
int main()
{
    disp_count_HCF2();
}

void disp_count_HCF2(void)
{
    int x,y,w1=0,division=2,multiplication=1,z,min;
    
    printf("Enter the value of x: ");
    scanf("%d",&x);
    
    printf("Enter the value of y: ");
    scanf("%d",&y);
    
    if (x < y) min = x;
    else min = y;
    
    while (division!=min)
    {
        w1 = 0;
        if (!(x % division) && !(y % division))
        {
            x /= division;
            y /= division;
            multiplication *= division;
            w1 = 1;
        }
        
        if (!(w1))
        {
            division++;
        }
    }
    printf("%d\n",multiplication);
}