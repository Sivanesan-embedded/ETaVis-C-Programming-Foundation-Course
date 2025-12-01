#include <stdio.h>
int main()
{
    int x = 0,count=0,temp,mul = 1,ans=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    temp = x;
    for (;temp!=0;)
    {
        count++;
        temp /= 10;
    }
    temp = 1;
    for (;temp++!=count;)
    {
        mul *= 10;
    }
    ans = ((x % 10)*mul) + (x % mul) - (x % 10) + (x / mul);
    
    printf("%d\n",ans);
}