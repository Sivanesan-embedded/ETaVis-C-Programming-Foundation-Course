#include <stdio.h>

void disp_reverse_number(void);

int main()
{
    disp_reverse_number();
}

void disp_reverse_number(void)
{
    int sum=0,x,rem=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    
    while (x)
    {
        rem = x % 10;
        sum = (sum * 10) + rem;
        x /= 10;
    }
    printf("%d",sum);
}