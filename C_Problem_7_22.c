#include <stdio.h>

void disp_total_2digit_odd(void);

int main()
{
    disp_total_2digit_odd();
}

void disp_total_2digit_odd(void)
{
    int x,count = -1,mul=1,temp,l_count=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    temp = x;
    
    while (x)
    {
        count++;
        x/=10;
    }
    for (int i = 0; i< count;i++)
    {
        if (temp%100%2)
        {
            l_count++;
        }
        temp /= 10;
    }
    printf("%d\n",l_count);
}