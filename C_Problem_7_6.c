#include <stdio.h>

void disp_2digit_odd_below20(void);

int main()
{
    disp_2digit_odd_below20();
}

void disp_2digit_odd_below20(void)
{
    int sum = 0;
    for (int i = 1;i < 20;i++)
    {
        if ((i%2) && (i/10!=0))
        {
            printf("%d\n",i);
        }
    }
}