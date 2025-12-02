#include <stdio.h>

void check_prime(void);

int main()
{
    check_prime();
}

void check_prime(void)
{
    int x,prime = 1;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    
    for (int i = 2;i<x;i++)
    {
        if (!(x % i))
        {
            prime = 0;
            break;
        }
    }
    if (prime)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}