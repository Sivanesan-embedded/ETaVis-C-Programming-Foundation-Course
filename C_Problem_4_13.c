#include <stdio.h>
int main()
{
    int x=0,rem=0,sum=0;
    printf("Enter a number: ");
    scanf("%d",&x);
loop:if (x)
    {
        rem = x % 10;
        sum = (sum * 10) + rem;
        x /= 10;
        goto loop;
    }
    printf("%d\n",sum);
}