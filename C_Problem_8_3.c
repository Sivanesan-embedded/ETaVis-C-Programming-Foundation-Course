#include <stdio.h>

int disp_2digit_ones5(void);

int main()
{
    printf("%d\n",disp_2digit_ones5());
}

int disp_2digit_ones5(void)
{
    int sum = 0;
    for (int i = 1;i<100;i++)
    {
        if ((i%10==5) && i/10)
        {
            sum += i;
        }
    }
    return sum;
}