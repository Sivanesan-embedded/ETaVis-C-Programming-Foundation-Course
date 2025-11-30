#include <stdio.h>
int main()
{
    int x = 0,sum = 0;
    printf("Enter a number: ");
    scanf("%d",&x);
    sum = (x % 10) + (x / 100) + ((x / 10) % 10);
    printf("The number is : %d\n",sum);
    return 0;
}