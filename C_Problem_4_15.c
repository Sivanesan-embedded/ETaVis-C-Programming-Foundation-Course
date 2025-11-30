#include <stdio.h>
int main()
{
    int x=0,count=0,temp=0,mul=1;
    printf("Enter a number: ");
    scanf("%d",&x);
    temp = x;
loop: if (temp)
    {
        count++;
        temp/=10;
        goto loop;
    }
    
    count--;
    
loop1: if(count)
    {
        mul *= 10;
        count--;
        goto loop1;
    }
    
    if ((x%10)%2)
    {
        printf("%d\n",x-mul);
    }
    else
    {
        printf("%d\n",x);
    }
}