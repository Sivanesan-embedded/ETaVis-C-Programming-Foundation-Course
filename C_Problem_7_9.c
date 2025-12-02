#include <stdio.h>

void disp_2digit_ones5(void);

int main()
{
    disp_2digit_ones5();
}

void disp_2digit_ones5(void)
{
    int sum = 0;
    for (int i = 1;i < 100;i++)
    {
        if ((i%10==5) && (i/10!=0))
        {
            sum += i;
        }
    }
    printf("%d",sum);
}