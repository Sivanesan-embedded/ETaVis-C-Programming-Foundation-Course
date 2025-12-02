#include <stdio.h>

int disp_single_digit_square(int);

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("%d\n",disp_single_digit_square(x));
    return 0;
}

int disp_single_digit_square(int x)
{
    int count = 0,num;
    while (x)
    {
        num = x % 10;
        for (int i = 1; i < 10;i++)
        {
            if ((i * i) == num)
            {
                count++;
            }
        }
        x/=10;
    }
    return count;
}