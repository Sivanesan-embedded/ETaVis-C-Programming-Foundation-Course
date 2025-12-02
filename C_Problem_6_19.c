#include <stdio.h>
int main()
{
    int x,i=2,prime = 1;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    
    x = x/10%100;
    
    while(i < x)
    {
        if (!(x % i))
        {
            prime = 0;
            break;
        }
        i++;
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