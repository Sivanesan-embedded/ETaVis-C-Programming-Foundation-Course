#include <stdio.h>

void disp_rsum(void);

int main()
{
    disp_rsum();
}

void disp_rsum(void)
{
    int sum = 0;
    for (int i = 6;i >= 1;i--)
    {
        sum += i;
    }
    printf("%d\n",sum);
}