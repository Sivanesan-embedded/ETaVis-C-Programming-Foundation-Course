#include <stdio.h>
int main()
{
    int temp,count=0,sum = 0,l_count=0;
    for (int i = 1;i<=100000;i++)
    {
        sum = 0;
        count = 0;
        temp = i;
        for (;temp!=0;)
        {
            sum += (temp%10);
            temp /= 10;
        }
        if (sum == 14)
        {
            l_count++;
        }
    }
    printf("%d\n",l_count);
}