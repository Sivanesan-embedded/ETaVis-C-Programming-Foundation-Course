#include <stdio.h>
int main()
{
    int x,prime = 1,sum=0;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    
    for (int i = 2;i < x;i++)
    {
        if (!(x % i))
        {
            prime = 0;
        }
    }
    
    for (;x != 0;)
    {
        sum += (x % 10);
        x /= 10;
    }
    
    if (prime && (sum == 14))
    {
        printf("Prime & sum of digits is 14\n");
    }
    else if (!(prime) && (sum == 14))
    {
        printf("Not Prime but sum of digits is 14\n");
    }
    else if (prime && (sum != 14))
    {
        printf("Prime & sum of digits is not 14\n");
    }
    else
    {
        printf("Not prime & sum of digits is not 14\n");
    }
}