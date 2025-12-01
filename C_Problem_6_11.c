#include <stdio.h>
int main()
{
    int x,count=0;
    
    printf("Enter a number: ");
    scanf("%d",&x);
    
    while (x)
    {
       count++;
       x /= 10;
    }
    printf("%d\n",count);
}