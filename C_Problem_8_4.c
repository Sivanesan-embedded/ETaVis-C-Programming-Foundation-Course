#include <stdio.h>

int disp_2digit_odd_sum_tens7(void);

int main()
{
    printf("%d\n",disp_2digit_odd_sum_tens7());
}

int disp_2digit_odd_sum_tens7(void)
{
    int sum = 0;
    for (int i = 1;i<100;i++)
    {
        if ((i%10%2) && i/10)
        {
            if (i/10 == 7)
            {
                sum += i;
            }
        }
    }
    return sum;
}