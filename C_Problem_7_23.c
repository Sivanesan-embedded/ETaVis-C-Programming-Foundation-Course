#include <stdio.h>

void disp_single_digit_square(void);

int main()
{
    disp_single_digit_square();
}

void disp_single_digit_square(void)
{
    int x,count = 0,mul=1,num;
    printf("Enter a number: ");
    scanf("%d",&x);
    
    while (x)
    {
        num = x % 10;
        for (int i = 1;i<9;i++)
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