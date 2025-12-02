#include <stdio.h>

void disp_interchange_first_last_digit(void);

int main()
{
    disp_interchange_first_last_digit();
}

void disp_interchange_first_last_digit(void)
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
    
    ans = (x % 10) * mul + (x % mul) - (x % 10) + (x/mul);
    printf("%d\n",ans);
}