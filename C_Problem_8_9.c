#include <stdio.h>

int check_last_digit_odd(int);

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("%d\n",check_last_digit_odd(x));
    return 0;
}

int check_last_digit_odd(int x)
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
    
    if (x % 10 % 2) return x - mul;
    return x;
}