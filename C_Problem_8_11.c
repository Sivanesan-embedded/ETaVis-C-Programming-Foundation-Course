#include <stdio.h>

int disp_total_odd_digits(int);

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("%d\n",disp_total_odd_digits(x));
    return 0;
}

int disp_total_odd_digits(int x)
{
    int count = 0;
    while (x)
    {
        if (x%10%2)
        {
            count++;
        }
        x/=10;
    }
    return count;
}