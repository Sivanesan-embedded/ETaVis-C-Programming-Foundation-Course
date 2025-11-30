#include <stdio.h>
int main()
{
    int i = 2,prime = 1,x=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    
loop:if (i < x)
    {
        if (x % i == 0)
        {
            prime = 0;
            goto check;
        }
        i++;
        goto loop;
    }
    
check:if (prime && x!=1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }
}