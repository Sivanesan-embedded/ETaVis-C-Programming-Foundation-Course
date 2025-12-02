#include <stdio.h>

void check_first_2digits_prime(void);

int main()
{
    check_first_2digits_prime();
}

void check_first_2digits_prime(void)
{
    int x,prime = 1,temp=0,sum = 0;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    x %= 100;  
    
    for (int i = 2;i<x;i++)
    {
        if (!(x % i))
        {
            prime = 0;
            break;
        }
    }
    
    if (prime) printf("Prime");
    else printf("Not Prime");
}