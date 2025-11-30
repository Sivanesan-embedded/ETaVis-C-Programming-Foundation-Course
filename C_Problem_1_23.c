#include <stdio.h>
int main()
{
    int x = 0,num = 0;
    printf("Enter a number: ");
    scanf("%d",&x);
    num = ((x % 10) + (x / 10)) % 2;
    printf("The number is : %d\n",x-(num*5));
    return 0;
}