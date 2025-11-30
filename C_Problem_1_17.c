#include <stdio.h>
int main()
{
    int x = 0,zero = 0;
    printf("Enter a number: ");
    scanf("%d",&x);
    zero = (x / 10) * 10;
    printf("The number is : %d\n",zero);
    return 0;
}