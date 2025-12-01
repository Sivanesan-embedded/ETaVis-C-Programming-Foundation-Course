#include <stdio.h>
int main()
{
    int x,rem=0,sum=0;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    
    while (x)
    {
       rem = x % 10;
       sum = (sum * 10) + rem;
       x /= 10;
    }
    printf("%d\n",sum);
}