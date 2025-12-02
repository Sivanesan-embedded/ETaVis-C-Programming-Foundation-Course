#include <stdio.h>

void check_prime_and_sum14(void);

int main()
{
    check_prime_and_sum14();
}

void check_prime_and_sum14(void)
{
    int x,prime = 1,temp=0,sum = 0;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    
    temp = x;
    
    for (int i = 2;i<x;i++)
    {
        if (!(x % i))
        {
            prime = 0;
            break;
        }
    }
    
    while (temp)
    {
       sum += (temp%10);
       temp /= 10;
    }
    if (prime && (sum == 14))
    {
        printf("Prime & sum of digits is 14\n");
    }
    else if(!(prime) && (sum == 14))
    {
        printf("Not Prime but sum of digits is 14\n");
    }
    else if(prime && (sum != 14))
    {
        printf("Prime & sum of digits is not 14\n");
    }
    else
    {
        printf("Not Prime & sum of digits is not 14\n");
    }
}