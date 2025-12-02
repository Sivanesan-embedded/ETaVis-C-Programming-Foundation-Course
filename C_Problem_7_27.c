#include <stdio.h>
void disp_count_sum14(void);
int main()
{
    disp_count_sum14();
}

void disp_count_sum14(void)
{
    int temp,sum = 0,count = 0;
    for (int i = 1;i <= 100000;i++)
    {
        sum = 0;
        temp = i;
        while (temp)
        {
            sum += (temp%10);
            temp /= 10;
        }
    if (sum == 14)
    {
        count++;
    }
    }
    printf("%d\n",count);
}