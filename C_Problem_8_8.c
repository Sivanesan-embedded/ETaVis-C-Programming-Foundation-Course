#include <stdio.h>

int disp_interchange_first_last_digit(int);

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("%d\n",disp_interchange_first_last_digit(x));
    return 0;
}

int disp_interchange_first_last_digit(int x)
{
    int temp = x,count = -1,mul=1;
    
    while (temp)
    {
        count++;
        temp /= 10;
    }
    while (count)
    {
        mul *= 10;
        count--;
    }
    
    return ((x%10*mul) + (x % mul) - (x % 10) + (x / mul));
}