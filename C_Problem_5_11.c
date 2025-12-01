#include <stdio.h>
int main()
{
    int x = 0,count = 0;
    printf("Enter a number: ");
    scanf("%d",&x);
    for (;x!=0;)
    {
        count++;
        x /= 10;
    }
    printf("%d\n",count);
}