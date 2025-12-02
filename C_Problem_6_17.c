#include <stdio.h>
int main()
{
    int x,i=2,prime = 1,sum = 0;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    
    while(i < x)
    {
        if (!(x % i))
        {
            prime = 0;
            break;
        }
        i++;
    }
    
    while (x)
    {
        sum += (x%10);
        x /= 10;
    }
    if (prime && (sum == 14))
    {
        printf("Prime & sum is 14");
    }
    else if(!(prime) && (sum == 14))
    {
        printf("Not Prime but sum is 14");
    }
    else if((prime) && (sum != 14))
    {
        printf("Prime & sum is not 14");
    }
    else
    {
        printf("Not Prime & sum is not 14");
    }
}