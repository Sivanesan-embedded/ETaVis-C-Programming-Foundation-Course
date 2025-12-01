#include <stdio.h>
int main()
{
    int x,prime = 1,sum=0;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    
    x = (x / 10) % 100;
    
    for (int i = 2;i < x;i++)
    {
        if (!(x % i))
        {
            prime = 0;
        }
    }
    
    if(prime && x != 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }
    
}