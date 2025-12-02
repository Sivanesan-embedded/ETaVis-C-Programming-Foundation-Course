#include <stdio.h>

int disp_reverse_number(int);

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    
    printf("%d\n",disp_reverse_number(x));
}

int disp_reverse_number(int x)
{
    int sum = 0,rev=0;
    while (x)
    {
        rev = x % 10;
        sum = (sum * 10) + rev;
        x/=10;
    }
    return sum;
}