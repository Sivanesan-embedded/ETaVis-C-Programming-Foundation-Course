#include <stdio.h>
int main()
{
    int x = 0,tens_1 = 0;
    printf("Enter a number: ");
    scanf("%d",&x);
    tens_1 = (x % 10) + 10;
    printf("The number is : %d\n",tens_1);
    return 0;
}