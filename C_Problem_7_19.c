#include <stdio.h>

void middle_2digits_prime(void);

int main()
{
    middle_2digits_prime();
}

void middle_2digits_prime(void)
{
    int x,prime = 1,temp=0,sum = 0;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    x = x/10%100;  
    
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