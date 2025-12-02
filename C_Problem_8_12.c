#include <stdio.h>

int disp_total_2digit_odd(int);

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("%d\n",disp_total_2digit_odd(x));
    return 0;
}

int disp_total_2digit_odd(int x)
{
    int count = 0;
    while (x/10)
    {
        if (x%100%2)
        {
            count++;
        }
        x/=10;
    }
    return count;
}