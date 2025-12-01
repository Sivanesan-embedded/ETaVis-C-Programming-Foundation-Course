#include <stdio.h>
int main()
{
    int x = 0,sum = 0;
    printf("Enter a number: ");
    scanf("%d",&x);
    for (;x!=0;)
    {
        sum += (x%10);
        x /= 10;
    }
    printf("%d\n",sum);
}