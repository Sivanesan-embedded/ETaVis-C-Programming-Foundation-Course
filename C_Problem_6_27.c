#include <stdio.h>
int main()
{
    int temp = 0,sum = 0,count = 0;
    for (int i = 0;i <= 100000;i++)
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