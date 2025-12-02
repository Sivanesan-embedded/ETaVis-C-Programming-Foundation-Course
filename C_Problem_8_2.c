#include <stdio.h>

int disp_rsum(void);

int main()
{
    printf("%d\n",disp_rsum());
}

int disp_rsum(void)
{
    int sum = 0;
    for (int i = 6;i>=1;i--)
    {
        sum += i;
    }
    return sum;
}