#include <stdio.h>
int main()
{
    int x=0,sum=0;
    printf("Enter a number: ");
    scanf("%d",&x);
loop:if (x)
    {
        sum += (x % 10);
        x /= 10;
        goto loop;
    }
    printf("%d\n",sum);
}