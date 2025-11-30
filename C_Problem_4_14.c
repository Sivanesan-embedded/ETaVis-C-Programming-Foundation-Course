#include <stdio.h>
int main()
{
    int x=0,count=0,temp=0,mul=1,value = 0;
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
    
    value = ((x % 10) * mul) + (x % mul) - (x % 10) + (x/mul);
    
    printf("%d\n",value);
}