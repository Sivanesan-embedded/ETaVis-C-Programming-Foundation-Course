#include <stdio.h>
int main()
{
    int x,sum=0;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    
    while (x)
    {
       sum += (x%10);
       x /= 10;
    }
    printf("%d\n",sum);
}