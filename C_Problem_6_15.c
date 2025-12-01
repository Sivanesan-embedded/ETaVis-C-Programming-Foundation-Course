#include <stdio.h>
int main()
{
    int count = -1,x=0,temp,mul=1;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    
    temp = x;
    
    while (temp)
    {
        count++;
        temp/=10;
    }
    
    while (count--)
    {
        mul *= 10;
    }
    
    if (x % 10 % 2)
    {
        x -= mul;
    }
    
    printf("%d\n",x);
}