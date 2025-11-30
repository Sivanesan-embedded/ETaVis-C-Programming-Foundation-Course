#include <stdio.h>
int main()
{
    int x=0,tens_0=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    tens_0  = ((x / 100) * 100) + (x % 10);
    printf("The number is : %d\n",tens_0);
    return 0;
}