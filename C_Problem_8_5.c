#include <stdio.h>

int count_total_digits(int);

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    
    printf("%d\n",count_total_digits(x));
}

int count_total_digits(int x)
{
    int count = 0;
    while (x)
    {
        count++;
        x/=10;
    }
    return count;
}