#include <stdio.h>
int main()
{
    int x = 0,ones_2 = 0;
    printf("Enter a number: ");
    scanf("%d",&x);
    ones_2 = ((x / 10) * 10) + 2;
    printf("The number is : %d\n",ones_2);
    return 0;
}