#include <stdio.h>

void count_total_digits(void);

int main()
{
    count_total_digits();
}

void count_total_digits(void)
{
    int count = 0,x=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    
    while (x)
    {
        count++;
        x /= 10;
    }
    printf("%d",count);
}