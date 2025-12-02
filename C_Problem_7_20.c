#include <stdio.h>

void disp_2digit_even_sum6(void);

int main()
{
    disp_2digit_even_sum6();
}

void disp_2digit_even_sum6(void)
{
    int x,prime = 1,temp=0,sum = 0,count = 0;
    
    for (int j = 2;j<10;j++)
    {
        prime = 1;
        for (int i = 2;i<j;i++)
        {
            if (!(j % i))
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            count++;
        }
    }
    
    printf("%d\n",count);
}