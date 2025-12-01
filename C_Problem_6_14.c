#include <stdio.h>
int main()
{
    int count = -1,x=0,temp,mul=1,ans=0;
    
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
    
    ans = ((x % 10) * mul) + (x % mul) - (x % 10) + (x / mul);
    
    printf("%d\n",ans);
}