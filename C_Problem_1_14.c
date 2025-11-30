#include <stdio.h>
int main()
{
    int x = 0,rev = 0;
    printf("Enter a number: ");
    scanf("%d",&x);
    rev = ((x % 10) * 100) + (((x / 10) % 10) * 10) + (x / 100);
    printf("The number is : %d\n",rev);
    return 0;
}