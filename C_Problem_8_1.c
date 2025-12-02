#include <stdio.h>

int disp_sum(void);

int main()
{
    printf("%d\n",disp_sum());
}

int disp_sum(void)
{
    int sum = 0;
    for (int i = 1;i<=5;i++)
    {
        sum += i;
    }
    return sum;
}