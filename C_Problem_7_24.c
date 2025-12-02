#include <stdio.h>

void disp_two_digit_square(void);

int main()
{
    disp_two_digit_square();
}

void disp_two_digit_square(void)
{
    int x,count = 0,mul=1,num;
    printf("Enter a number: ");
    scanf("%d",&x);
    
    while (x / 10)
    {
        num = x % 100;
        for (int i = 1;i<99;i++)
        {
            if ((i*i) == num)
            {
                count++;
            }
        }
        x /= 10;
    }
    printf("%d\n",count);
}