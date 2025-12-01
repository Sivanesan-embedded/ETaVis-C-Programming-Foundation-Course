#include <stdio.h>
int main()
{
    int x = 0,sum = 0,rev = 0;
    printf("Enter a number: ");
    scanf("%d",&x);
    for (;x!=0;)
    {
        rev = x % 10;
        sum = (sum * 10) + rev;
        x /= 10;
    }
    printf("%d\n",sum);
}