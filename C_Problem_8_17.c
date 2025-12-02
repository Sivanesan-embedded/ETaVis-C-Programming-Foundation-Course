#include <stdio.h>

int disp_count_sum14(void);

int main()
{
    printf("%d\n",disp_count_sum14());
    return 0;
}

int disp_count_sum14(void)
{
    int num = 0,sum = 0,count = 0;
    for (int i = 1;i <= 100000;i++)
    {
        sum = 0;
        num = i;
        while (num)
        {
            sum += (num % 10);
            num /= 10;
        }
        if (sum == 14)
        {
            count++;
        }
    }
    return count;
}