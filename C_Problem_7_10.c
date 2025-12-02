#include <stdio.h>

void disp_2digit_odd_sum_tens7(void);

int main()
{
    disp_2digit_odd_sum_tens7();
}

void disp_2digit_odd_sum_tens7(void)
{
    int sum = 0;
    for (int i = 1;i < 100;i++)
    {
        if (i%2)
        {
        if ((i/10==7) && (i/10!=0))
        {
            sum += i;
        }
        }
    }
    printf("%d",sum);
}