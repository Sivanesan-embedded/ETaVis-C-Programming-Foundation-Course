#include <stdio.h>
int main()
{
    int x=0,count=0;
    printf("Enter a number: ");
    scanf("%d",&x);
loop:if (x)
    {
        count++;
        x /= 10;
        goto loop;
    }
    printf("%d\n",count);
}