#include <stdio.h>

int disp_sum_all_digits(int);

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    
    printf("%d\n",disp_sum_all_digits(x));
}

int disp_sum_all_digits(int x)
{
    int sum = 0;
    while (x)
    {
        sum += (x%10);
        x/=10;
    }
    return sum;
}