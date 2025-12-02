#include <stdio.h>

int disp_single_digit_prime(int);

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("%d\n",disp_single_digit_prime(x));
    return 0;
}

int disp_single_digit_prime(int x)
{
    int count = 0,num,prime = 1;
    while (x)
    {
        num = x % 10;
        prime = 1;
        for (int i = 2; i < num;i++)
        {
            if (!(num%i))
            {
                prime = 0;
                break;
            }
        }
        x/=10;
        if ((prime) && (num != 1))
        {
            count++;
        }
    }
    return count;
}