#include <stdio.h>

void check_last_digit_odd(void);

int main()
{
    check_last_digit_odd();
}

void check_last_digit_odd(void)
{
    int sum=0,x,rem=0,count = -1,temp,mul=1,ans;
    printf("Enter a number: ");
    scanf("%d",&x);
    
    temp = x;
    
    while (temp)
    {
        count++;
        temp /= 10;
    }
    for (int i = 0; i < count;i++)
    {
        mul *= 10;
    }
    
    if (x % 10 % 2)
    {
        x -= mul;
    }
    
    printf("%d\n",x);
}