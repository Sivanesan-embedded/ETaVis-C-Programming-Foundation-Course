#include <stdio.h>

void disp_sum_all_digits(void);

int main()
{
    disp_sum_all_digits();
}

void disp_sum_all_digits(void)
{
    int count = 0,sum=0,x;
    printf("Enter a number: ");
    scanf("%d",&x);
    
    while (x)
    {
        sum += (x % 10);
        x /= 10;
    }
    printf("%d",sum);
}